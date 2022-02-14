
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gpio_num_t ;
struct TYPE_3__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(void) {
    for (int VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); ++VAR_1) {
        if (VAR_0[VAR_1].id != (gpio_num_t)-1) {
            FUNC_1(VAR_0[VAR_1].id);
        }
    }
}
