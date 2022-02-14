
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
struct snd_soc_tplg_dapm_widget {TYPE_1__ priv; } ;
struct TYPE_13__ {int caps; int caps_size; int param_id; int set_params; } ;
struct TYPE_9__ {int module_id; int instance_id; } ;
struct skl_module_cfg {TYPE_6__ formats_config; TYPE_5__* module; void* m_out_pin; void* m_in_pin; int time_slot; int hw_conn_type; int dev_type; int vbus_id; int m_type; int converter; int params_fixup; int core_id; TYPE_2__ id; scalar_t__ guid; } ;
struct TYPE_14__ {int caps_size; int caps; int param_id; int set_params; } ;
struct skl_dfw_v4_module {int max_mcps; TYPE_7__ caps; int is_dynamic_out_pin; int out_pin; int is_dynamic_in_pin; int in_pin; int time_slot; int hw_conn_type; int dev_type; int pipe; int mem_pages; int vbus_id; int module_type; int converter; int params_fixup; int out_fmt; int in_fmt; int is_loadable; int max_out_queue; int max_in_queue; int core_id; int obs; int ibs; int instance_id; int uuid; } ;
struct skl_dev {int dummy; } ;
struct device {int dummy; } ;
typedef int guid_t ;
struct TYPE_12__ {int max_output_pins; int max_input_pins; TYPE_4__* resources; TYPE_3__* formats; int loadable; } ;
struct TYPE_11__ {int cpc; int is_pages; int obs; int ibs; } ;
struct TYPE_10__ {int outputs; int inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,int ,int,int ) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,void*,int ,int ) ;
 int FUNC_6 (struct device*,struct skl_module_cfg*,struct skl_dev*,int *) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_tplg_dapm_widget *VAR_4,
        struct skl_dev *VAR_5, struct device *VAR_6,
        struct skl_module_cfg *VAR_7)
{
 struct skl_dfw_v4_module *VAR_8 =
    (struct skl_dfw_v4_module *)VAR_4->priv.data;
 int VAR_9;

 FUNC_0(VAR_6, "Parsing Skylake v4 widget topology data\n");

 VAR_9 = FUNC_3(VAR_8->uuid, (guid_t *)VAR_7->guid);
 if (VAR_9)
  return VAR_9;
 VAR_7->id.module_id = -1;
 VAR_7->id.instance_id = VAR_8->instance_id;
 VAR_7->module->resources[0].cpc = VAR_8->max_mcps / 1000;
 VAR_7->module->resources[0].ibs = VAR_8->ibs;
 VAR_7->module->resources[0].obs = VAR_8->obs;
 VAR_7->core_id = VAR_8->core_id;
 VAR_7->module->max_input_pins = VAR_8->max_in_queue;
 VAR_7->module->max_output_pins = VAR_8->max_out_queue;
 VAR_7->module->loadable = VAR_8->is_loadable;
 FUNC_7(VAR_7->module->formats[0].inputs, VAR_8->in_fmt,
        VAR_2);
 FUNC_7(VAR_7->module->formats[0].outputs, VAR_8->out_fmt,
        VAR_3);

 VAR_7->params_fixup = VAR_8->params_fixup;
 VAR_7->converter = VAR_8->converter;
 VAR_7->m_type = VAR_8->module_type;
 VAR_7->vbus_id = VAR_8->vbus_id;
 VAR_7->module->resources[0].is_pages = VAR_8->mem_pages;

 VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_5, &VAR_8->pipe);
 if (VAR_9)
  return VAR_9;

 VAR_7->dev_type = VAR_8->dev_type;
 VAR_7->hw_conn_type = VAR_8->hw_conn_type;
 VAR_7->time_slot = VAR_8->time_slot;
 VAR_7->formats_config.caps_size = VAR_8->caps.caps_size;

 VAR_7->m_in_pin = FUNC_1(VAR_6,
    VAR_2, sizeof(*VAR_7->m_in_pin),
    VAR_1);
 if (!VAR_7->m_in_pin)
  return -VAR_0;

 VAR_7->m_out_pin = FUNC_1(VAR_6,
    VAR_3, sizeof(*VAR_7->m_out_pin),
    VAR_1);
 if (!VAR_7->m_out_pin)
  return -VAR_0;

 FUNC_5(VAR_8->in_pin, VAR_7->m_in_pin,
        VAR_8->is_dynamic_in_pin,
        VAR_7->module->max_input_pins);
 FUNC_5(VAR_8->out_pin, VAR_7->m_out_pin,
        VAR_8->is_dynamic_out_pin,
        VAR_7->module->max_output_pins);

 if (VAR_7->formats_config.caps_size) {
  VAR_7->formats_config.set_params = VAR_8->caps.set_params;
  VAR_7->formats_config.param_id = VAR_8->caps.param_id;
  VAR_7->formats_config.caps =
  FUNC_2(VAR_6, VAR_7->formats_config.caps_size,
        VAR_1);
  if (!VAR_7->formats_config.caps)
   return -VAR_0;
  FUNC_4(VAR_7->formats_config.caps, VAR_8->caps.caps,
         VAR_8->caps.caps_size);
 }

 return 0;
}
