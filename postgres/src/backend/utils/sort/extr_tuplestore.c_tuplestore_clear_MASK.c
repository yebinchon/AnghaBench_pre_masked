
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int memtupdeleted; int memtupcount; int truncated; int readptrcount; TYPE_2__* readptrs; scalar_t__ tuples; int status; int * memtuples; int * myfile; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_6__ {int eof_reached; scalar_t__ current; } ;
typedef TYPE_2__ TSReadPointer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void
FUNC_4(Tuplestorestate *VAR_1)
{
 int VAR_2;
 TSReadPointer *VAR_3;

 if (VAR_1->myfile)
  FUNC_0(VAR_1->myfile);
 VAR_1->myfile = ((void*)0);
 if (VAR_1->memtuples)
 {
  for (VAR_2 = VAR_1->memtupdeleted; VAR_2 < VAR_1->memtupcount; VAR_2++)
  {
   FUNC_1(VAR_1, FUNC_2(VAR_1->memtuples[VAR_2]));
   FUNC_3(VAR_1->memtuples[VAR_2]);
  }
 }
 VAR_1->status = VAR_0;
 VAR_1->truncated = 0;
 VAR_1->memtupdeleted = 0;
 VAR_1->memtupcount = 0;
 VAR_1->tuples = 0;
 VAR_3 = VAR_1->readptrs;
 for (VAR_2 = 0; VAR_2 < VAR_1->readptrcount; VAR_3++, VAR_2++)
 {
  VAR_3->eof_reached = 0;
  VAR_3->current = 0;
 }
}
