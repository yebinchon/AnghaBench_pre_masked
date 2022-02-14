
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int status; int memtupcount; int memtupsize; void** memtuples; int bound; int ru_start; int bounded; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef void* SortTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,void**,void**) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;



 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_1__*,void**) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int FUNC_12 (TYPE_1__*,void**) ;

__attribute__((used)) static void
FUNC_13(Tuplesortstate *VAR_3, SortTuple *VAR_4)
{
 FUNC_0(!FUNC_4(VAR_3));

 switch (VAR_3->status)
 {
  case 128:
   if (VAR_3->memtupcount >= VAR_3->memtupsize - 1)
   {
    (void) FUNC_8(VAR_3);
    FUNC_0(VAR_3->memtupcount < VAR_3->memtupsize);
   }
   VAR_3->memtuples[VAR_3->memtupcount++] = *VAR_4;
   if (VAR_3->bounded &&
    (VAR_3->memtupcount > VAR_3->bound * 2 ||
     (VAR_3->memtupcount > VAR_3->bound && FUNC_3(VAR_3))))
   {






    FUNC_10(VAR_3);
    return;
   }




   if (VAR_3->memtupcount < VAR_3->memtupsize && !FUNC_3(VAR_3))
    return;




   FUNC_9(VAR_3, 1);




   FUNC_5(VAR_3, 0);
   break;

  case 130:
   if (FUNC_2(VAR_3, VAR_4, &VAR_3->memtuples[0]) <= 0)
   {

    FUNC_7(VAR_3, VAR_4);
    FUNC_1();
   }
   else
   {

    FUNC_7(VAR_3, &VAR_3->memtuples[0]);
    FUNC_12(VAR_3, VAR_4);
   }
   break;

  case 129:




   VAR_3->memtuples[VAR_3->memtupcount++] = *VAR_4;




   FUNC_5(VAR_3, 0);
   break;

  default:
   FUNC_6(VAR_0, "invalid tuplesort state");
   break;
 }
}
