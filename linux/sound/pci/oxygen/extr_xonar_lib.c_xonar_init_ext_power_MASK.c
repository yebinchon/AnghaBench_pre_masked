
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xonar_generic {int ext_power_bit; int has_power; int ext_power_reg; int ext_power_int_reg; } ;
struct TYPE_2__ {int gpio_changed; } ;
struct oxygen {TYPE_1__ model; int interrupt_mask; struct xonar_generic* model_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*,int ) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int VAR_1 ;

void FUNC_2(struct oxygen *VAR_2)
{
 struct xonar_generic *VAR_3 = VAR_2->model_data;

 FUNC_1(VAR_2, VAR_3->ext_power_int_reg,
    VAR_3->ext_power_bit);
 VAR_2->interrupt_mask |= VAR_0;
 VAR_2->model.gpio_changed = VAR_1;
 VAR_3->has_power = !!(FUNC_0(VAR_2, VAR_3->ext_power_reg)
        & VAR_3->ext_power_bit);
}
