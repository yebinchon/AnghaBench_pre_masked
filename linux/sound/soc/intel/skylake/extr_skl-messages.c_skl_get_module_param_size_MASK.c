
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct skl_up_down_mixer_cfg {int dummy; } ;
struct skl_src_module_cfg {int dummy; } ;
struct TYPE_2__ {int caps_size; } ;
struct skl_module_cfg {int m_type; TYPE_1__ formats_config; } ;
struct skl_dev {int dummy; } ;
struct skl_cpr_cfg {int dummy; } ;
struct skl_base_outfmt_cfg {int dummy; } ;
struct skl_base_cfg {int dummy; } ;
__attribute__((used)) static u16 FUNC_0(struct skl_dev *VAR_0,
   struct skl_module_cfg *VAR_1)
{
 u16 VAR_2;

 switch (VAR_1->m_type) {
 case 132:
  VAR_2 = sizeof(struct skl_cpr_cfg);
  VAR_2 += VAR_1->formats_config.caps_size;
  return VAR_2;

 case 129:
  return sizeof(struct skl_src_module_cfg);

 case 128:
  return sizeof(struct skl_up_down_mixer_cfg);

 case 134:
  VAR_2 = sizeof(struct skl_base_cfg);
  VAR_2 += VAR_1->formats_config.caps_size;
  return VAR_2;

 case 133:
 case 130:
 case 131:
  return sizeof(struct skl_base_outfmt_cfg);

 default:




  return sizeof(struct skl_base_cfg);
 }

 return 0;
}
