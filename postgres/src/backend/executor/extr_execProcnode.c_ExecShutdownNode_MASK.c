
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ running; } ;
struct TYPE_8__ {TYPE_5__* instrument; } ;
typedef TYPE_1__ PlanState ;
typedef int HashState ;
typedef int HashJoinState ;
typedef int GatherState ;
typedef int GatherMergeState ;
typedef int ForeignScanState ;
typedef int CustomScanState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;






 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int (*) (TYPE_1__*),int *) ;

bool
FUNC_11(PlanState *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;

 FUNC_8();

 FUNC_10(VAR_0, FUNC_11, ((void*)0));
 if (VAR_0->instrument && VAR_0->instrument->running)
  FUNC_6(VAR_0->instrument);

 switch (FUNC_9(VAR_0))
 {
  case 130:
   FUNC_2((GatherState *) VAR_0);
   break;
  case 132:
   FUNC_1((ForeignScanState *) VAR_0);
   break;
  case 133:
   FUNC_0((CustomScanState *) VAR_0);
   break;
  case 131:
   FUNC_3((GatherMergeState *) VAR_0);
   break;
  case 128:
   FUNC_4((HashState *) VAR_0);
   break;
  case 129:
   FUNC_5((HashJoinState *) VAR_0);
   break;
  default:
   break;
 }


 if (VAR_0->instrument && VAR_0->instrument->running)
  FUNC_7(VAR_0->instrument, 0);

 return 0;
}
