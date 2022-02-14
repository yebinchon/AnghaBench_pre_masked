
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int onConflictAction; } ;
struct TYPE_6__ {int state; scalar_t__ plan; } ;
struct TYPE_7__ {int operation; int mt_transition_capture; TYPE_1__ ps; int mt_oc_transition_capture; } ;
typedef int ResultRelInfo ;
typedef TYPE_2__ ModifyTableState ;
typedef TYPE_3__ ModifyTable ;





 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ModifyTableState *VAR_2)
{
 ModifyTable *VAR_3 = (ModifyTable *) VAR_2->ps.plan;
 ResultRelInfo *VAR_4 = FUNC_4(VAR_2);

 switch (VAR_2->operation)
 {
  case 129:
   if (VAR_3->onConflictAction == VAR_1)
    FUNC_2(VAR_2->ps.state,
          VAR_4,
          VAR_2->mt_oc_transition_capture);
   FUNC_1(VAR_2->ps.state, VAR_4,
         VAR_2->mt_transition_capture);
   break;
  case 128:
   FUNC_2(VAR_2->ps.state, VAR_4,
         VAR_2->mt_transition_capture);
   break;
  case 130:
   FUNC_0(VAR_2->ps.state, VAR_4,
         VAR_2->mt_transition_capture);
   break;
  default:
   FUNC_3(VAR_0, "unknown operation");
   break;
 }
}
