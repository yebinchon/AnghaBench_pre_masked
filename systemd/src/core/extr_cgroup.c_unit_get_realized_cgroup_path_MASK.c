
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* cgroup_path; int slice; int cgroup_realized_mask; scalar_t__ cgroup_realized; } ;
typedef TYPE_1__ Unit ;
typedef int CGroupMask ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

const char *FUNC_2(Unit *VAR_0, CGroupMask VAR_1) {



        while (VAR_0) {

                if (VAR_0->cgroup_path &&
                    VAR_0->cgroup_realized &&
                    FUNC_0(VAR_0->cgroup_realized_mask, VAR_1))
                        return VAR_0->cgroup_path;

                VAR_0 = FUNC_1(VAR_0->slice);
        }

        return ((void*)0);
}
