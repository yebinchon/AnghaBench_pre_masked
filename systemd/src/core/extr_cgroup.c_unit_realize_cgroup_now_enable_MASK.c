
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cgroup_realized_mask; int cgroup_enabled_mask; int slice; } ;
typedef TYPE_1__ Unit ;
typedef int ManagerState ;
typedef int CGroupMask ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_0, ManagerState VAR_1) {
        CGroupMask VAR_2, VAR_3, VAR_4, VAR_5;
        int VAR_6;

        FUNC_2(VAR_0);



        if (FUNC_1(VAR_0->slice)) {
                VAR_6 = FUNC_7(FUNC_0(VAR_0->slice), VAR_1);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        VAR_2 = FUNC_5(VAR_0);
        VAR_3 = FUNC_4(VAR_0);



        if (FUNC_6(VAR_0, VAR_2, VAR_3))
                return 0;

        VAR_4 = VAR_0->cgroup_realized_mask | VAR_2;
        VAR_5 = VAR_0->cgroup_enabled_mask | VAR_3;

        return FUNC_3(VAR_0, VAR_4, VAR_5, VAR_1);
}
