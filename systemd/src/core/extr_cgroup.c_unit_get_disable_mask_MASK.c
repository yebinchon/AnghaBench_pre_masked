
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_3__ {int disable_controllers; } ;
typedef int CGroupMask ;
typedef TYPE_1__ CGroupContext ;


 TYPE_1__* FUNC_0 (int *) ;

CGroupMask FUNC_1(Unit *VAR_0) {
        CGroupContext *VAR_1;

        VAR_1 = FUNC_0(VAR_0);
        if (!VAR_1)
                return 0;

        return VAR_1->disable_controllers;
}
