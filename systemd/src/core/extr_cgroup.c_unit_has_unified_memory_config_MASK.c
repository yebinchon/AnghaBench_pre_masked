
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ memory_high; scalar_t__ memory_max; scalar_t__ memory_swap_max; } ;
typedef TYPE_1__ Unit ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_4(Unit *VAR_1) {
        CGroupContext *VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_3(VAR_1);
        FUNC_0(VAR_2);

        return FUNC_2(VAR_1) > 0 || FUNC_1(VAR_1) > 0 ||
               VAR_2->memory_high != VAR_0 || VAR_2->memory_max != VAR_0 ||
               VAR_2->memory_swap_max != VAR_0;
}
