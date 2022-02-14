
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pvt_id; scalar_t__ instance_id; scalar_t__ module_id; } ;
struct skl_module_pin {int in_use; int * tgt_mcfg; int pin_state; TYPE_1__ id; scalar_t__ is_dynamic; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct skl_module_pin *VAR_1, int VAR_2)
{
 if (VAR_1[VAR_2].is_dynamic) {
  VAR_1[VAR_2].in_use = 0;
  VAR_1[VAR_2].id.module_id = 0;
  VAR_1[VAR_2].id.instance_id = 0;
  VAR_1[VAR_2].id.pvt_id = 0;
 }
 VAR_1[VAR_2].pin_state = VAR_0;
 VAR_1[VAR_2].tgt_mcfg = ((void*)0);
}
