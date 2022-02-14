
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cgroup_invalidated_mask; } ;
typedef TYPE_1__ Unit ;
typedef int CGroupMask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(Unit *VAR_4, CGroupMask VAR_5) {
        FUNC_2(VAR_4);

        if (!FUNC_1(VAR_4))
                return;

        if (VAR_5 == 0)
                return;


        if (VAR_5 & (VAR_3 | VAR_0))
                VAR_5 |= VAR_3 | VAR_0;

        if (VAR_5 & (VAR_1 | VAR_2))
                VAR_5 |= VAR_1 | VAR_2;

        if (FUNC_0(VAR_4->cgroup_invalidated_mask, VAR_5))
                return;

        VAR_4->cgroup_invalidated_mask |= VAR_5;
        FUNC_3(VAR_4);
}
