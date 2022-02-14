
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ operation; scalar_t__ onConflictAction; } ;
struct TYPE_11__ {scalar_t__ plan; } ;
struct TYPE_14__ {scalar_t__ operation; TYPE_2__* mt_transition_capture; int * mt_oc_transition_capture; TYPE_1__ ps; } ;
struct TYPE_13__ {int ri_RelationDesc; int ri_TrigDesc; } ;
struct TYPE_12__ {int tcs_map; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__ ModifyTableState ;
typedef TYPE_5__ ModifyTable ;
typedef int EState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_5(ModifyTableState *VAR_3, EState *VAR_4)
{
 ModifyTable *VAR_5 = (ModifyTable *) VAR_3->ps.plan;
 ResultRelInfo *VAR_6 = FUNC_3(VAR_3);


 VAR_3->mt_transition_capture =
  FUNC_1(VAR_6->ri_TrigDesc,
           FUNC_2(VAR_6->ri_RelationDesc),
           VAR_3->operation);
 if (VAR_5->operation == VAR_0 &&
  VAR_5->onConflictAction == VAR_2)
  VAR_3->mt_oc_transition_capture =
   FUNC_1(VAR_6->ri_TrigDesc,
            FUNC_2(VAR_6->ri_RelationDesc),
            VAR_1);







 if (VAR_3->mt_transition_capture != ((void*)0) ||
  VAR_3->mt_oc_transition_capture != ((void*)0))
 {
  FUNC_0(VAR_3);







  if (VAR_3->mt_transition_capture && VAR_3->operation != VAR_0)
   VAR_3->mt_transition_capture->tcs_map =
    FUNC_4(VAR_3, 0);
 }
}
