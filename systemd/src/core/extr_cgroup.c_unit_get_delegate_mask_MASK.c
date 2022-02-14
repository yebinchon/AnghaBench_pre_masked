
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {int delegate_controllers; } ;
typedef int ExecContext ;
typedef int CGroupMask ;
typedef TYPE_1__ CGroupContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

CGroupMask FUNC_7(Unit *VAR_0) {
        CGroupContext *VAR_1;






        if (!FUNC_4(VAR_0))
                return 0;

        if (FUNC_2() <= 0) {
                ExecContext *VAR_2;

                VAR_2 = FUNC_6(VAR_0);
                if (VAR_2 && !FUNC_3(VAR_2))
                        return 0;
        }

        FUNC_1(VAR_1 = FUNC_5(VAR_0));
        return FUNC_0(VAR_1->delegate_controllers);
}
