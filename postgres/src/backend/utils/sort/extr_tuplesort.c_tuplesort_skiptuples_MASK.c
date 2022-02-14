
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {int status; scalar_t__ memtupcount; scalar_t__ current; int eof_reached; scalar_t__ bound; int sortcontext; int bounded; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;



 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int,int *) ;

bool
FUNC_6(Tuplesortstate *VAR_1, int64 VAR_2, bool VAR_3)
{
 MemoryContext VAR_4;





 FUNC_0(VAR_3);
 FUNC_0(VAR_2 >= 0);
 FUNC_0(!FUNC_3(VAR_1));

 switch (VAR_1->status)
 {
  case 129:
   if (VAR_1->memtupcount - VAR_1->current >= VAR_2)
   {
    VAR_1->current += VAR_2;
    return 1;
   }
   VAR_1->current = VAR_1->memtupcount;
   VAR_1->eof_reached = 1;






   if (VAR_1->bounded && VAR_1->current >= VAR_1->bound)
    FUNC_4(VAR_0, "retrieved too many tuples in a bounded sort");

   return 0;

  case 128:
  case 130:





   VAR_4 = FUNC_2(VAR_1->sortcontext);
   while (VAR_2-- > 0)
   {
    SortTuple VAR_5;

    if (!FUNC_5(VAR_1, VAR_3, &VAR_5))
    {
     FUNC_2(VAR_4);
     return 0;
    }
    FUNC_1();
   }
   FUNC_2(VAR_4);
   return 1;

  default:
   FUNC_4(VAR_0, "invalid tuplesort state");
   return 0;
 }
}
