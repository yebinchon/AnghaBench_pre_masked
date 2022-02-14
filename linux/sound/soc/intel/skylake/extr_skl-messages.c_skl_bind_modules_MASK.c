
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct skl_module_iface {TYPE_2__* outputs; TYPE_1__* inputs; } ;
struct skl_module_fmt {int dummy; } ;
struct TYPE_8__ {int pvt_id; int module_id; } ;
struct skl_module_cfg {scalar_t__ m_state; scalar_t__ m_type; size_t fmt_idx; TYPE_4__* m_in_pin; TYPE_4__* m_out_pin; TYPE_3__ id; struct skl_module* module; } ;
struct skl_module {int max_input_pins; int max_output_pins; struct skl_module_iface* formats; } ;
struct skl_ipc_bind_unbind_msg {int src_queue; int dst_queue; int bind; int dst_instance_id; int dst_module_id; int instance_id; int module_id; } ;
struct skl_dev {int ipc; int dev; } ;
struct skl_cpr_pin_fmt {int sink_id; int dst_fmt; int src_fmt; } ;
struct TYPE_9__ {void* pin_state; } ;
struct TYPE_7__ {struct skl_module_fmt fmt; } ;
struct TYPE_6__ {struct skl_module_fmt fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *,struct skl_module_fmt*) ;
 int FUNC_2 (TYPE_4__*,struct skl_module_cfg*,int) ;
 int FUNC_3 (struct skl_dev*,struct skl_module_cfg*,struct skl_module_cfg*) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int *,struct skl_ipc_bind_unbind_msg*) ;
 int FUNC_6 (struct skl_dev*,void*,int,int ,struct skl_module_cfg*) ;

int FUNC_7(struct skl_dev *VAR_6,
   struct skl_module_cfg *VAR_7,
   struct skl_module_cfg *VAR_8)
{
 int VAR_9 = 0;
 struct skl_ipc_bind_unbind_msg VAR_10;
 int VAR_11 = VAR_8->module->max_input_pins;
 int VAR_12 = VAR_7->module->max_output_pins;
 int VAR_13, VAR_14;
 struct skl_module_fmt *VAR_15;
 struct skl_cpr_pin_fmt VAR_16;
 struct skl_module *VAR_17;
 struct skl_module_iface *VAR_18;

 FUNC_3(VAR_6, VAR_7, VAR_8);

 if (VAR_7->m_state < VAR_3 ||
  VAR_8->m_state < VAR_3)
  return 0;

 VAR_13 = FUNC_2(VAR_7->m_out_pin, VAR_8, VAR_12);
 if (VAR_13 < 0)
  return -VAR_1;

 VAR_10.src_queue = VAR_13;
 VAR_14 = FUNC_2(VAR_8->m_in_pin, VAR_7, VAR_11);
 if (VAR_14 < 0) {
  FUNC_4(VAR_7->m_out_pin, VAR_13);
  return -VAR_1;
 }





 if (VAR_7->m_type == VAR_4 && VAR_13 > 0) {
  VAR_16.sink_id = VAR_13;
  VAR_17 = VAR_7->module;
  VAR_18 = &VAR_17->formats[VAR_7->fmt_idx];


  VAR_15 = &VAR_18->inputs[0].fmt;
  FUNC_1(&(VAR_16.src_fmt), VAR_15);

  VAR_15 = &VAR_18->outputs[VAR_13].fmt;
  FUNC_1(&(VAR_16.dst_fmt), VAR_15);
  VAR_9 = FUNC_6(VAR_6, (void *)&VAR_16,
     sizeof(struct skl_cpr_pin_fmt),
     VAR_0, VAR_7);

  if (VAR_9 < 0)
   goto out;
 }

 VAR_10.dst_queue = VAR_14;

 FUNC_0(VAR_6->dev, "src queue = %d dst queue =%d\n",
    VAR_10.src_queue, VAR_10.dst_queue);

 VAR_10.module_id = VAR_7->id.module_id;
 VAR_10.instance_id = VAR_7->id.pvt_id;
 VAR_10.dst_module_id = VAR_8->id.module_id;
 VAR_10.dst_instance_id = VAR_8->id.pvt_id;
 VAR_10.bind = 1;

 VAR_9 = FUNC_5(&VAR_6->ipc, &VAR_10);

 if (!VAR_9) {
  VAR_7->m_state = VAR_2;
  VAR_7->m_out_pin[VAR_13].pin_state = VAR_5;
  VAR_8->m_in_pin[VAR_14].pin_state = VAR_5;
  return VAR_9;
 }
out:

 FUNC_4(VAR_7->m_out_pin, VAR_13);
 FUNC_4(VAR_8->m_in_pin, VAR_14);

 return VAR_9;
}
