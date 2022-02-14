
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * chgParam; } ;
typedef TYPE_1__ PlanState ;
typedef int Node ;
typedef int HashState ;
typedef int BitmapOrState ;
typedef int BitmapIndexScanState ;
typedef int BitmapAndState ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;




 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (TYPE_1__*) ;

Node *
FUNC_9(PlanState *VAR_1)
{
 Node *VAR_2;

 FUNC_6();

 FUNC_0();

 if (VAR_1->chgParam != ((void*)0))
  FUNC_1(VAR_1);

 switch (FUNC_8(VAR_1))
 {




  case 128:
   VAR_2 = FUNC_5((HashState *) VAR_1);
   break;

  case 130:
   VAR_2 = FUNC_3((BitmapIndexScanState *) VAR_1);
   break;

  case 131:
   VAR_2 = FUNC_2((BitmapAndState *) VAR_1);
   break;

  case 129:
   VAR_2 = FUNC_4((BitmapOrState *) VAR_1);
   break;

  default:
   FUNC_7(VAR_0, "unrecognized node type: %d", (int) FUNC_8(VAR_1));
   VAR_2 = ((void*)0);
   break;
 }

 return VAR_2;
}
