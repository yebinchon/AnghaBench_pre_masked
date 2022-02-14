
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cgroup_invalidated_mask; int slice; } ;
typedef TYPE_1__ Unit ;
typedef int ManagerState ;
typedef int CGroupMask ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(Unit *VAR_0, ManagerState VAR_1) {
        CGroupMask VAR_2, VAR_3;
        int VAR_4;

        FUNC_2(VAR_0);

        FUNC_9(VAR_0);

        VAR_2 = FUNC_5(VAR_0);
        VAR_3 = FUNC_4(VAR_0);

        if (FUNC_6(VAR_0, VAR_2, VAR_3))
                return 0;


        VAR_4 = FUNC_7(VAR_0, VAR_1);
        if (VAR_4 < 0)
                return VAR_4;


        if (FUNC_1(VAR_0->slice)) {
                VAR_4 = FUNC_8(FUNC_0(VAR_0->slice), VAR_1);
                if (VAR_4 < 0)
                        return VAR_4;
        }


        VAR_4 = FUNC_3(VAR_0, VAR_2, VAR_3, VAR_1);
        if (VAR_4 < 0)
                return VAR_4;


        VAR_0->cgroup_invalidated_mask = 0;
        return 0;
}
