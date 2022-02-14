
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numstates; int trigstates; int all_isdeferred; int all_isset; } ;
typedef int SetConstraintTriggerData ;
typedef TYPE_1__* SetConstraintState ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static SetConstraintState
FUNC_2(SetConstraintState VAR_0)
{
 SetConstraintState VAR_1;

 VAR_1 = FUNC_0(VAR_0->numstates);

 VAR_1->all_isset = VAR_0->all_isset;
 VAR_1->all_isdeferred = VAR_0->all_isdeferred;
 VAR_1->numstates = VAR_0->numstates;
 FUNC_1(VAR_1->trigstates, VAR_0->trigstates,
     VAR_0->numstates * sizeof(SetConstraintTriggerData));

 return VAR_1;
}
