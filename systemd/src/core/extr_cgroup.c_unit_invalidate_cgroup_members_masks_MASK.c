
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cgroup_members_mask_valid; int slice; } ;
typedef TYPE_1__ Unit ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(Unit *VAR_0) {
        FUNC_2(VAR_0);


        VAR_0->cgroup_members_mask_valid = 0;

        if (FUNC_1(VAR_0->slice))
                FUNC_3(FUNC_0(VAR_0->slice));
}
