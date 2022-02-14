
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct skl_module_res {int id; int nr_input_pins; int nr_output_pins; } ;
struct skl_module_iface {int fmt_idx; } ;
struct skl_module {struct skl_module_iface* formats; struct skl_module_res* resources; } ;
struct TYPE_3__ {TYPE_2__* astate_cfg; } ;
struct skl_dev {int lib_count; int nr_modules; TYPE_1__ cfg; struct skl_module** modules; } ;
struct skl_astate_param {int kcps; int clk_src; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int count; struct skl_astate_param* astate_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct skl_module** FUNC_1 (struct device*,int,int,int ) ;
 void* FUNC_2 (struct device*,size_t,int ) ;
 int FUNC_3 (struct device*,struct snd_soc_tplg_vendor_value_elem*,struct skl_module*) ;
 int FUNC_4 (struct device*,struct snd_soc_tplg_vendor_value_elem*,struct skl_module_res*,int,int) ;
 int FUNC_5 (struct device*,struct skl_module_iface*,struct snd_soc_tplg_vendor_value_elem*,int,int) ;
 size_t FUNC_6 (TYPE_2__*,struct skl_astate_param*,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6,
  struct snd_soc_tplg_vendor_value_elem *VAR_7,
  struct skl_dev *VAR_8)
{
 int VAR_9 = 0, VAR_10;
 static int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct skl_module_res *VAR_16 = ((void*)0);
 struct skl_module_iface *VAR_17 = ((void*)0);
 struct skl_module *VAR_18 = ((void*)0);
 static struct skl_astate_param *VAR_19;
 static int VAR_20, VAR_21;
 int VAR_22;
 size_t VAR_23;

 if (VAR_8->modules) {
  VAR_18 = VAR_8->modules[VAR_11];
  VAR_16 = &VAR_18->resources[VAR_12];
  VAR_17 = &VAR_18->formats[VAR_13];
 }

 switch (VAR_7->token) {
 case 135:
  VAR_8->lib_count = VAR_7->value;
  break;

 case 130:
  VAR_8->nr_modules = VAR_7->value;
  VAR_8->modules = FUNC_1(VAR_6, VAR_8->nr_modules,
    sizeof(*VAR_8->modules), VAR_2);
  if (!VAR_8->modules)
   return -VAR_1;

  for (VAR_22 = 0; VAR_22 < VAR_8->nr_modules; VAR_22++) {
   VAR_8->modules[VAR_22] = FUNC_2(VAR_6,
     sizeof(struct skl_module), VAR_2);
   if (!VAR_8->modules[VAR_22])
    return -VAR_1;
  }
  break;

 case 152:
  VAR_11 = VAR_7->value;
  break;

 case 148:
  if (VAR_19 != ((void*)0)) {
   FUNC_0(VAR_6, "More than one entry for A-State count");
   return -VAR_0;
  }

  if (VAR_7->value > VAR_4) {
   FUNC_0(VAR_6, "Invalid A-State count %d\n",
    VAR_7->value);
   return -VAR_0;
  }

  VAR_23 = FUNC_6(VAR_8->cfg.astate_cfg, VAR_19,
       VAR_7->value);
  VAR_8->cfg.astate_cfg = FUNC_2(VAR_6, VAR_23, VAR_2);
  if (!VAR_8->cfg.astate_cfg)
   return -VAR_1;

  VAR_19 = VAR_8->cfg.astate_cfg->astate_table;
  VAR_21 = VAR_8->cfg.astate_cfg->count = VAR_7->value;
  break;

 case 147:
  if (VAR_7->value >= VAR_21) {
   FUNC_0(VAR_6, "Invalid A-State index %d\n",
    VAR_7->value);
   return -VAR_0;
  }

  VAR_20 = VAR_7->value;
  break;

 case 146:
  VAR_19[VAR_20].kcps = VAR_7->value;
  break;

 case 149:
  VAR_19[VAR_20].clk_src = VAR_7->value;
  break;

 case 132:
 case 129:
 case 131:
 case 128:
 case 150:
 case 151:
  VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_18);
  if (VAR_10 < 0)
   return VAR_10;
  break;

 case 145:
  VAR_14 = VAR_7->value & VAR_3;
  VAR_15 = (VAR_7->value & VAR_5) >> 4;
  break;

 case 154:
  if (!VAR_16)
   return -VAR_0;

  VAR_16->id = VAR_7->value;
  VAR_12 = VAR_7->value;
  break;

 case 159:
  if (!VAR_17)
   return -VAR_0;

  VAR_17->fmt_idx = VAR_7->value;
  VAR_13 = VAR_7->value;
  break;

 case 161:
 case 160:
 case 162:
 case 134:
 case 133:
 case 136:
 case 153:
 case 155:
  VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_16, VAR_15, VAR_14);
  if (VAR_10 < 0)
   return VAR_10;

  break;

 case 157:
  if (!VAR_17)
   return -VAR_0;

  VAR_16->nr_input_pins = VAR_7->value;
  break;

 case 156:
  if (!VAR_17)
   return -VAR_0;

  VAR_16->nr_output_pins = VAR_7->value;
  break;

 case 143:
 case 140:
 case 144:
 case 138:
 case 142:
 case 139:
 case 137:
 case 141:
 case 158:
  VAR_10 = FUNC_5(VAR_6, VAR_17, VAR_7,
       VAR_14, VAR_15);
  if (VAR_10 < 0)
   return VAR_10;
  break;

 default:
  FUNC_0(VAR_6, "Not a manifest token %d\n", VAR_7->token);
  return -VAR_0;
 }
 VAR_9++;

 return VAR_9;
}
