
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int eflags; scalar_t__ status; int memtupcount; int readptrcount; int memtupdeleted; int truncated; TYPE_1__* readptrs; int ** memtuples; } ;
typedef TYPE_2__ Tuplestorestate ;
struct TYPE_5__ {int current; int eof_reached; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int **,int **,int) ;
 int FUNC_5 (int *) ;

void
FUNC_6(Tuplestorestate *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;





 if (VAR_2->eflags & VAR_0)
  return;





 if (VAR_2->status != VAR_1)
  return;


 VAR_3 = VAR_2->memtupcount;
 for (VAR_5 = 0; VAR_5 < VAR_2->readptrcount; VAR_5++)
 {
  if (!VAR_2->readptrs[VAR_5].eof_reached)
   VAR_3 = FUNC_3(VAR_3, VAR_2->readptrs[VAR_5].current);
 }
 VAR_4 = VAR_3 - 1;
 if (VAR_4 <= 0)
  return;

 FUNC_0(VAR_4 >= VAR_2->memtupdeleted);
 FUNC_0(VAR_4 <= VAR_2->memtupcount);


 for (VAR_5 = VAR_2->memtupdeleted; VAR_5 < VAR_4; VAR_5++)
 {
  FUNC_1(VAR_2, FUNC_2(VAR_2->memtuples[VAR_5]));
  FUNC_5(VAR_2->memtuples[VAR_5]);
  VAR_2->memtuples[VAR_5] = ((void*)0);
 }
 VAR_2->memtupdeleted = VAR_4;


 VAR_2->truncated = 1;







 if (VAR_4 < VAR_2->memtupcount / 8)
  return;







 if (VAR_4 + 1 == VAR_2->memtupcount)
  VAR_2->memtuples[0] = VAR_2->memtuples[VAR_4];
 else
  FUNC_4(VAR_2->memtuples, VAR_2->memtuples + VAR_4,
    (VAR_2->memtupcount - VAR_4) * sizeof(void *));

 VAR_2->memtupdeleted = 0;
 VAR_2->memtupcount -= VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_2->readptrcount; VAR_5++)
 {
  if (!VAR_2->readptrs[VAR_5].eof_reached)
   VAR_2->readptrs[VAR_5].current -= VAR_4;
 }
}
