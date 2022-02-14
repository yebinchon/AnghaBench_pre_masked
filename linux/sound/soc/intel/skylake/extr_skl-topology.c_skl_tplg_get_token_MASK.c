
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct skl_module_res {int dummy; } ;
struct skl_module_iface {int dummy; } ;
struct TYPE_10__ {int caps_size; int set_params; int param_id; } ;
struct TYPE_8__ {int instance_id; } ;
struct skl_module_cfg {int res_idx; int fmt_idx; int time_slot; int core_id; int m_type; int dev_type; int hw_conn_type; int vbus_id; int params_fixup; int converter; int d0i3_caps; int domain; int dma_buffer_size; TYPE_4__ formats_config; TYPE_3__* mod_cfg; TYPE_5__* pipe; TYPE_2__ id; void* m_out_pin; void* m_in_pin; TYPE_1__* module; } ;
struct skl_dev {scalar_t__ nr_modules; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int nr_cfgs; } ;
struct TYPE_9__ {int res_idx; int fmt_idx; } ;
struct TYPE_7__ {int max_input_pins; int max_output_pins; struct skl_module_iface* formats; struct skl_module_res* resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (struct device*,char*,int) ;
 void* FUNC_1 (struct device*,int ,int,int ) ;
 int FUNC_2 (struct device*,struct skl_module_cfg*,struct skl_dev*,struct snd_soc_tplg_vendor_value_elem*) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (struct device*,struct skl_module_cfg*,struct snd_soc_tplg_vendor_value_elem*,int,int) ;
 int FUNC_5 (struct device*,TYPE_5__*,int,int,int,int) ;
 int FUNC_6 (struct device*,TYPE_5__*,int,int) ;
 int FUNC_7 (struct device*,struct snd_soc_tplg_vendor_value_elem*,struct skl_module_res*,int,int) ;
 int FUNC_8 (struct device*,struct skl_module_iface*,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_9,
  struct snd_soc_tplg_vendor_value_elem *VAR_10,
  struct skl_dev *VAR_11, struct skl_module_cfg *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 static int VAR_15;
 static int VAR_16, VAR_17, VAR_18;
 struct skl_module_iface *VAR_19 = ((void*)0);
 struct skl_module_res *VAR_20 = ((void*)0);
 int VAR_21 = VAR_12->res_idx;
 int VAR_22 = VAR_12->fmt_idx;






 if (VAR_11->nr_modules == 0) {
  VAR_20 = &VAR_12->module->resources[VAR_21];
  VAR_19 = &VAR_12->module->formats[VAR_22];
 }

 if (VAR_10->token > VAR_8)
  return -VAR_1;

 switch (VAR_10->token) {
 case 133:
  VAR_12->module->max_input_pins = VAR_10->value;
  break;

 case 130:
  VAR_12->module->max_output_pins = VAR_10->value;
  break;

 case 137:
  if (!VAR_12->m_in_pin)
   VAR_12->m_in_pin =
    FUNC_1(VAR_9, VAR_4,
          sizeof(*VAR_12->m_in_pin),
          VAR_3);
  if (!VAR_12->m_in_pin)
   return -VAR_2;

  FUNC_3(VAR_12->m_in_pin, VAR_4,
           VAR_10->value);
  break;

 case 136:
  if (!VAR_12->m_out_pin)
   VAR_12->m_out_pin =
    FUNC_1(VAR_9, VAR_4,
          sizeof(*VAR_12->m_in_pin),
          VAR_3);
  if (!VAR_12->m_out_pin)
   return -VAR_2;

  FUNC_3(VAR_12->m_out_pin, VAR_5,
           VAR_10->value);
  break;

 case 129:
  VAR_12->time_slot = VAR_10->value;
  break;

 case 139:
  VAR_12->core_id = VAR_10->value;
  break;

 case 132:
  VAR_12->m_type = VAR_10->value;
  break;

 case 138:
  VAR_12->dev_type = VAR_10->value;
  break;

 case 135:
  VAR_12->hw_conn_type = VAR_10->value;
  break;

 case 177:
  VAR_12->id.instance_id =
  VAR_10->value;
  break;

 case 158:
 case 159:
 case 156:
 case 160:
  VAR_14 = FUNC_7(VAR_9, VAR_10, VAR_20, VAR_16, VAR_17);
  if (VAR_14 < 0)
   return VAR_14;

  break;

 case 143:
  VAR_12->vbus_id = VAR_10->value;
  break;

 case 155:
  VAR_12->params_fixup = VAR_10->value;
  break;

 case 172:
  VAR_12->converter = VAR_10->value;
  break;

 case 171:
  VAR_12->d0i3_caps = VAR_10->value;
  break;

 case 148:
  VAR_14 = FUNC_2(VAR_9,
    VAR_12, VAR_11, VAR_10);

  if (VAR_14 < 0) {
   if (VAR_14 == -VAR_0) {
    VAR_15 = 1;
    break;
   }
   return VAR_15;
  }

  break;

 case 151:
  VAR_18 = VAR_10->value;
  break;

 case 150:
 case 146:
 case 147:
 case 145:
 case 149:
 case 157:
  if (VAR_15) {
   VAR_14 = FUNC_6(VAR_9, VAR_12->pipe,
     VAR_10->token, VAR_10->value);
   if (VAR_14 < 0)
    return VAR_14;
  }

  break;

 case 154:
 case 173:
 case 141:
 case 142:
  if (VAR_12->pipe->nr_cfgs) {
   VAR_14 = FUNC_5(VAR_9, VAR_12->pipe,
     VAR_10->token, VAR_10->value,
     VAR_18, VAR_17);
   if (VAR_14 < 0)
    return VAR_14;
  }
  break;

 case 178:
  VAR_12->mod_cfg[VAR_18].res_idx = VAR_10->value;
  break;

 case 179:
  VAR_12->mod_cfg[VAR_18].fmt_idx = VAR_10->value;
  break;






 case 170:
  VAR_17 = VAR_10->value & VAR_6;
  VAR_16 = (VAR_10->value &
   VAR_7) >> 4;

  break;

 case 167:
 case 164:
 case 168:
 case 162:
 case 166:
 case 163:
 case 161:
 case 165:
  VAR_14 = FUNC_8(VAR_9, VAR_19, VAR_10->token,
    VAR_10->value, VAR_17, VAR_16);

  if (VAR_14 < 0)
   return VAR_14;

  break;

 case 152:
 case 153:
 case 128:
  VAR_14 = FUNC_4(VAR_9,
    VAR_12, VAR_10, VAR_17,
    VAR_16);
  if (VAR_14 < 0)
   return VAR_14;

  break;

 case 174:
  VAR_12->formats_config.caps_size =
   VAR_10->value;

  break;

 case 175:
  VAR_12->formats_config.set_params =
    VAR_10->value;
  break;

 case 176:
  VAR_12->formats_config.param_id =
    VAR_10->value;
  break;

 case 144:
  VAR_12->domain =
   VAR_10->value;

  break;

 case 169:
  VAR_12->dma_buffer_size = VAR_10->value;
  break;

 case 134:
 case 131:
 case 140:
  break;

 default:
  FUNC_0(VAR_9, "Token %d not handled\n",
    VAR_10->token);
  return -VAR_1;
 }

 VAR_13++;

 return VAR_13;
}
