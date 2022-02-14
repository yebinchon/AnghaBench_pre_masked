
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cgroup_enabled_mask; int cgroup_realized_mask; int cgroup_realized; } ;
typedef TYPE_1__ Unit ;
typedef int CGroupMask ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(
                Unit *VAR_2,
                CGroupMask VAR_3,
                CGroupMask VAR_4) {

        FUNC_1(VAR_2);






        return !VAR_2->cgroup_realized ||
                (FUNC_0(VAR_2->cgroup_realized_mask, VAR_3 & VAR_0) &&
                 FUNC_0(VAR_2->cgroup_enabled_mask, VAR_4 & VAR_1));
}
