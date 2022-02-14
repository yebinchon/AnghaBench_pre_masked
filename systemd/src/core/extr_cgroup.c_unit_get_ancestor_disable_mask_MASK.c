
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int slice; } ;
typedef TYPE_1__ Unit ;
typedef int CGroupMask ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

CGroupMask FUNC_4(Unit *VAR_0) {
        CGroupMask VAR_1;

        FUNC_2(VAR_0);
        VAR_1 = FUNC_3(VAR_0);




        if (FUNC_1(VAR_0->slice))
                VAR_1 |= FUNC_4(FUNC_0(VAR_0->slice));

        return VAR_1;
}
