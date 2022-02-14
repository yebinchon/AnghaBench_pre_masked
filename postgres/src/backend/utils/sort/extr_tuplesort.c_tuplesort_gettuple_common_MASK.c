
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int status; int slabAllocatorUsed; int eof_reached; int tapeset; int * lastReturnedTuple; TYPE_2__* memtuples; int memtupcount; int result_tape; int randomAccess; int current; int bound; int bounded; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_16__ {int srctape; int * tuple; } ;
typedef TYPE_2__ SortTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int ,unsigned int) ;
 int FUNC_4 (TYPE_1__*,int *) ;



 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 unsigned int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_11(Tuplesortstate *VAR_1, bool VAR_2,
        SortTuple *VAR_3)
{
 unsigned int VAR_4;
 size_t VAR_5;

 FUNC_0(!FUNC_5(VAR_1));

 switch (VAR_1->status)
 {
  case 129:
   FUNC_0(VAR_2 || VAR_1->randomAccess);
   FUNC_0(!VAR_1->slabAllocatorUsed);
   if (VAR_2)
   {
    if (VAR_1->current < VAR_1->memtupcount)
    {
     *VAR_3 = VAR_1->memtuples[VAR_1->current++];
     return 1;
    }
    VAR_1->eof_reached = 1;






    if (VAR_1->bounded && VAR_1->current >= VAR_1->bound)
     FUNC_6(VAR_0, "retrieved too many tuples in a bounded sort");

    return 0;
   }
   else
   {
    if (VAR_1->current <= 0)
     return 0;





    if (VAR_1->eof_reached)
     VAR_1->eof_reached = 0;
    else
    {
     VAR_1->current--;
     if (VAR_1->current <= 0)
      return 0;
    }
    *VAR_3 = VAR_1->memtuples[VAR_1->current - 1];
    return 1;
   }
   break;

  case 128:
   FUNC_0(VAR_2 || VAR_1->randomAccess);
   FUNC_0(VAR_1->slabAllocatorUsed);





   if (VAR_1->lastReturnedTuple)
   {
    FUNC_4(VAR_1, VAR_1->lastReturnedTuple);
    VAR_1->lastReturnedTuple = ((void*)0);
   }

   if (VAR_2)
   {
    if (VAR_1->eof_reached)
     return 0;

    if ((VAR_4 = FUNC_7(VAR_1, VAR_1->result_tape, 1)) != 0)
    {
     FUNC_3(VAR_1, VAR_3, VAR_1->result_tape, VAR_4);






     VAR_1->lastReturnedTuple = VAR_3->tuple;

     return 1;
    }
    else
    {
     VAR_1->eof_reached = 1;
     return 0;
    }
   }







   if (VAR_1->eof_reached)
   {





    VAR_5 = FUNC_1(VAR_1->tapeset,
             VAR_1->result_tape,
             2 * sizeof(unsigned int));
    if (VAR_5 == 0)
     return 0;
    else if (VAR_5 != 2 * sizeof(unsigned int))
     FUNC_6(VAR_0, "unexpected tape position");
    VAR_1->eof_reached = 0;
   }
   else
   {




    VAR_5 = FUNC_1(VAR_1->tapeset,
             VAR_1->result_tape,
             sizeof(unsigned int));
    if (VAR_5 == 0)
     return 0;
    else if (VAR_5 != sizeof(unsigned int))
     FUNC_6(VAR_0, "unexpected tape position");
    VAR_4 = FUNC_7(VAR_1, VAR_1->result_tape, 0);




    VAR_5 = FUNC_1(VAR_1->tapeset,
             VAR_1->result_tape,
             VAR_4 + 2 * sizeof(unsigned int));
    if (VAR_5 == VAR_4 + sizeof(unsigned int))
    {







     return 0;
    }
    else if (VAR_5 != VAR_4 + 2 * sizeof(unsigned int))
     FUNC_6(VAR_0, "bogus tuple length in backward scan");
   }

   VAR_4 = FUNC_7(VAR_1, VAR_1->result_tape, 0);






   VAR_5 = FUNC_1(VAR_1->tapeset,
            VAR_1->result_tape,
            VAR_4);
   if (VAR_5 != VAR_4)
    FUNC_6(VAR_0, "bogus tuple length in backward scan");
   FUNC_3(VAR_1, VAR_3, VAR_1->result_tape, VAR_4);





   VAR_1->lastReturnedTuple = VAR_3->tuple;

   return 1;

  case 130:
   FUNC_0(VAR_2);

   FUNC_0(VAR_1->slabAllocatorUsed);





   if (VAR_1->lastReturnedTuple)
   {
    FUNC_4(VAR_1, VAR_1->lastReturnedTuple);
    VAR_1->lastReturnedTuple = ((void*)0);
   }




   if (VAR_1->memtupcount > 0)
   {
    int VAR_6 = VAR_1->memtuples[0].srctape;
    SortTuple VAR_7;

    *VAR_3 = VAR_1->memtuples[0];





    VAR_1->lastReturnedTuple = VAR_3->tuple;





    if (!FUNC_8(VAR_1, VAR_6, &VAR_7))
    {




     FUNC_9(VAR_1);






     FUNC_2(VAR_1->tapeset, VAR_6);
     return 1;
    }
    VAR_7.srctape = VAR_6;
    FUNC_10(VAR_1, &VAR_7);
    return 1;
   }
   return 0;

  default:
   FUNC_6(VAR_0, "invalid tuplesort state");
   return 0;
 }
}
