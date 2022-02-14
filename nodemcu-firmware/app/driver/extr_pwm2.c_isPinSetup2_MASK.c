
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {TYPE_1__* pin; } ;
typedef TYPE_2__ pwm2_interrupt_handler_data_t ;
struct TYPE_4__ {scalar_t__ gpioMask; } ;



__attribute__((used)) static inline bool FUNC_0(const pwm2_interrupt_handler_data_t *VAR_0, const uint8_t VAR_1) {
  return VAR_0->pin[VAR_1].gpioMask > 0;
}
