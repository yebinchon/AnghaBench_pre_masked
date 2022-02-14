
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skl_module_inst_id {int pvt_id; int module_id; } ;
struct skl_module_cfg {TYPE_2__* m_out_pin; TYPE_2__* m_in_pin; struct skl_module_inst_id id; TYPE_1__* module; } ;
struct skl_ipc_bind_unbind_msg {int src_queue; int dst_queue; int bind; int dst_instance_id; int dst_module_id; int instance_id; int module_id; } ;
struct skl_dev {int ipc; } ;
struct TYPE_6__ {int pin_state; } ;
struct TYPE_5__ {int max_input_pins; int max_output_pins; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,struct skl_module_cfg*) ;
 int FUNC_1 (struct skl_dev*,struct skl_module_cfg*,struct skl_module_cfg*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,struct skl_module_inst_id,int) ;
 int FUNC_4 (int *,struct skl_ipc_bind_unbind_msg*) ;

int FUNC_5(struct skl_dev *VAR_1,
   struct skl_module_cfg *VAR_2,
   struct skl_module_cfg *VAR_3)
{
 int VAR_4;
 struct skl_ipc_bind_unbind_msg VAR_5;
 struct skl_module_inst_id VAR_6 = VAR_2->id;
 struct skl_module_inst_id VAR_7 = VAR_3->id;
 int VAR_8 = VAR_3->module->max_input_pins;
 int VAR_9 = VAR_2->module->max_output_pins;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_1, VAR_2, VAR_3);


 VAR_10 = FUNC_3(VAR_2->m_out_pin, VAR_7, VAR_9);
 if (VAR_10 < 0)
  return 0;

 VAR_5.src_queue = VAR_10;


 VAR_11 = FUNC_3(VAR_3->m_in_pin, VAR_6, VAR_8);
 if (VAR_11 < 0)
  return 0;

 VAR_5.dst_queue = VAR_11;

 VAR_12 = VAR_2->m_out_pin[VAR_10].pin_state;
 VAR_13 = VAR_3->m_in_pin[VAR_11].pin_state;

 if (VAR_12 != VAR_0 ||
  VAR_13 != VAR_0)
  return 0;

 VAR_5.module_id = VAR_2->id.module_id;
 VAR_5.instance_id = VAR_2->id.pvt_id;
 VAR_5.dst_module_id = VAR_3->id.module_id;
 VAR_5.dst_instance_id = VAR_3->id.pvt_id;
 VAR_5.bind = 0;

 VAR_4 = FUNC_4(&VAR_1->ipc, &VAR_5);
 if (!VAR_4) {

  FUNC_2(VAR_2->m_out_pin, VAR_10);
  FUNC_2(VAR_3->m_in_pin, VAR_11);





  FUNC_0(VAR_2->m_out_pin, VAR_9, VAR_2);
 }

 return VAR_4;
}
