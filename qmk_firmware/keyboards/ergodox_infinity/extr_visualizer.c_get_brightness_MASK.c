
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int led1; int led2; int led3; } ;
typedef TYPE_1__ visualizer_user_data_t ;
typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(visualizer_user_data_t* VAR_0, uint8_t VAR_1) {
    switch (VAR_1) {
    case 1:
        return VAR_0->led1;
    case 2:
        return VAR_0->led2;
    case 3:
        return VAR_0->led3;
    }
    return 0;
}
