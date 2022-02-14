
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int memtupdeleted; int readptrcount; int memtupcount; int * memtuples; int myfile; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_6__ {int current; int offset; int file; int eof_reached; } ;
typedef TYPE_2__ TSReadPointer ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(Tuplestorestate *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->memtupdeleted;; VAR_1++)
 {
  TSReadPointer *VAR_2 = VAR_0->readptrs;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->readptrcount; VAR_2++, VAR_3++)
  {
   if (VAR_1 == VAR_2->current && !VAR_2->eof_reached)
    FUNC_0(VAR_0->myfile,
       &VAR_2->file, &VAR_2->offset);
  }
  if (VAR_1 >= VAR_0->memtupcount)
   break;
  FUNC_1(VAR_0, VAR_0->memtuples[VAR_1]);
 }
 VAR_0->memtupdeleted = 0;
 VAR_0->memtupcount = 0;
}
