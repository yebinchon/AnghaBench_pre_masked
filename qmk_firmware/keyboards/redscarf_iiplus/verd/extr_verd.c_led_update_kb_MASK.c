
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_lock; int caps_lock; } ;
typedef TYPE_1__ led_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ,int) ;

bool FUNC_2(led_t VAR_2) {
    if (FUNC_0(VAR_2)) {
        FUNC_1(VAR_0, !VAR_2.caps_lock);
        FUNC_1(VAR_1, !VAR_2.num_lock);
    }
    return 1;
}
