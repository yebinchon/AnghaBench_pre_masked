
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int led_on; } ;
typedef TYPE_1__ visualizer_user_data_t ;
typedef unsigned int uint8_t ;



__attribute__((used)) static inline bool FUNC_0(visualizer_user_data_t* VAR_0, uint8_t VAR_1) {
    return VAR_0->led_on & (1u << VAR_1);
}
