
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_11__ {int * ecxt_innertuple; int * ecxt_outertuple; } ;
struct TYPE_9__ {int * ps_ResultTupleSlot; TYPE_3__* ps_ExprContext; } ;
struct TYPE_10__ {int setop_done; scalar_t__ numOutput; int * grp_firstTuple; int eqfunction; TYPE_1__ ps; scalar_t__ pergroup; } ;
typedef scalar_t__ SetOpStatePerGroup ;
typedef TYPE_2__ SetOpState ;
typedef int PlanState ;
typedef TYPE_3__ ExprContext ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (scalar_t__) ;
 int * FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static TupleTableSlot *
FUNC_11(SetOpState *VAR_0)
{
 PlanState *VAR_1;
 SetOpStatePerGroup VAR_2;
 TupleTableSlot *VAR_3;
 TupleTableSlot *VAR_4;
 ExprContext *VAR_5 = VAR_0->ps.ps_ExprContext;




 VAR_1 = FUNC_9(VAR_0);
 VAR_2 = (SetOpStatePerGroup) VAR_0->pergroup;
 VAR_4 = VAR_0->ps.ps_ResultTupleSlot;




 while (!VAR_0->setop_done)
 {




  if (VAR_0->grp_firstTuple == ((void*)0))
  {
   VAR_3 = FUNC_2(VAR_1);
   if (!FUNC_5(VAR_3))
   {

    VAR_0->grp_firstTuple = FUNC_1(VAR_3);
   }
   else
   {

    VAR_0->setop_done = 1;
    return ((void*)0);
   }
  }






  FUNC_4(VAR_0->grp_firstTuple,
         VAR_4,
         1);
  VAR_0->grp_firstTuple = ((void*)0);


  FUNC_8(VAR_2);


  FUNC_6(VAR_2,
        FUNC_7(VAR_0, VAR_4));




  for (;;)
  {
   VAR_3 = FUNC_2(VAR_1);
   if (FUNC_5(VAR_3))
   {

    VAR_0->setop_done = 1;
    break;
   }




   VAR_5->ecxt_outertuple = VAR_4;
   VAR_5->ecxt_innertuple = VAR_3;

   if (!FUNC_3(VAR_0->eqfunction, VAR_5))
   {



    VAR_0->grp_firstTuple = FUNC_1(VAR_3);
    break;
   }


   FUNC_6(VAR_2,
         FUNC_7(VAR_0, VAR_3));
  }





  FUNC_10(VAR_0, VAR_2);

  if (VAR_0->numOutput > 0)
  {
   VAR_0->numOutput--;
   return VAR_4;
  }
 }


 FUNC_0(VAR_4);
 return ((void*)0);
}
