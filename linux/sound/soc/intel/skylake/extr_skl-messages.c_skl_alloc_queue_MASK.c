
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ module_id; scalar_t__ instance_id; int pvt_id; } ;
struct skl_module_pin {int in_use; scalar_t__ pin_state; struct skl_module_cfg* tgt_mcfg; TYPE_1__ id; scalar_t__ is_dynamic; } ;
struct skl_module_inst_id {scalar_t__ module_id; scalar_t__ instance_id; int pvt_id; } ;
struct skl_module_cfg {struct skl_module_inst_id id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct skl_module_pin *VAR_2,
   struct skl_module_cfg *VAR_3, int VAR_4)
{
 int VAR_5;
 struct skl_module_inst_id VAR_6 = VAR_3->id;






 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2[VAR_5].is_dynamic) {
   if (!VAR_2[VAR_5].in_use &&
    VAR_2[VAR_5].pin_state == VAR_1) {

    VAR_2[VAR_5].in_use = 1;
    VAR_2[VAR_5].id.module_id = VAR_6.module_id;
    VAR_2[VAR_5].id.instance_id = VAR_6.instance_id;
    VAR_2[VAR_5].id.pvt_id = VAR_6.pvt_id;
    VAR_2[VAR_5].tgt_mcfg = VAR_3;
    return VAR_5;
   }
  } else {
   if (VAR_2[VAR_5].id.module_id == VAR_6.module_id &&
    VAR_2[VAR_5].id.instance_id == VAR_6.instance_id &&
    VAR_2[VAR_5].pin_state == VAR_1) {

    VAR_2[VAR_5].tgt_mcfg = VAR_3;
    return VAR_5;
   }
  }
 }

 return -VAR_0;
}
