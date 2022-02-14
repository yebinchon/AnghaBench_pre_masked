
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ancestors; } ;
typedef TYPE_1__ deparse_namespace ;
typedef int PlanState ;
typedef int ListCell ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_4(deparse_namespace *VAR_0, ListCell *VAR_1,
       deparse_namespace *VAR_2)
{
 PlanState *VAR_3 = (PlanState *) FUNC_0(VAR_1);


 *VAR_2 = *VAR_0;


 VAR_0->ancestors =
  FUNC_2(VAR_0->ancestors,
        FUNC_1(VAR_0->ancestors, VAR_1) + 1);


 FUNC_3(VAR_0, VAR_3);
}
