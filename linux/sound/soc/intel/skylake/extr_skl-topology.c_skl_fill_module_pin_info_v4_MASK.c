
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instance_id; int module_id; } ;
struct skl_module_pin {int in_use; int is_dynamic; int pin_state; TYPE_1__ id; } ;
struct skl_dfw_v4_module_pin {int instance_id; int module_id; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct skl_dfw_v4_module_pin *VAR_1,
     struct skl_module_pin *VAR_2,
     bool VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_2[VAR_5].id.module_id = VAR_1[VAR_5].module_id;
  VAR_2[VAR_5].id.instance_id = VAR_1[VAR_5].instance_id;
  VAR_2[VAR_5].in_use = 0;
  VAR_2[VAR_5].is_dynamic = VAR_3;
  VAR_2[VAR_5].pin_state = VAR_0;
 }
}
