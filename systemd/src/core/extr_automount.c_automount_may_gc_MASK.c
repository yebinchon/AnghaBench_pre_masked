
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_2__ {int (* may_gc ) (int *) ;} ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(Unit *VAR_0) {
        Unit *VAR_1;

        FUNC_2(VAR_0);

        VAR_1 = FUNC_0(VAR_0);
        if (!VAR_1)
                return 1;

        return FUNC_1(VAR_1)->may_gc(VAR_1);
}
