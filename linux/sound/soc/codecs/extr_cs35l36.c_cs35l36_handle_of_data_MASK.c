
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cs35l36_vpbr_cfg {int is_present; unsigned int vpbr_en; unsigned int vpbr_thld; unsigned int vpbr_atk_rate; unsigned int vpbr_atk_vol; unsigned int vpbr_max_attn; unsigned int vpbr_wait; unsigned int vpbr_rel_rate; unsigned int vpbr_mute_en; } ;
struct cs35l36_platform_data {unsigned int bst_vctl; unsigned int bst_vctl_sel; unsigned int bst_ipk; unsigned int temp_warn_thld; unsigned int boost_ind; unsigned int irq_drv_sel; unsigned int irq_gpio_sel; void* vmon_pol_inv; void* imon_pol_inv; void* amp_pcm_inv; void* dcm_mode; void* multi_amp_mode; struct cs35l36_vpbr_cfg vpbr_config; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 struct device_node* FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*) ;
 void* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2,
    struct cs35l36_platform_data *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct cs35l36_vpbr_cfg *VAR_5 = &VAR_3->vpbr_config;
 struct device_node *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (!VAR_4)
  return 0;

 VAR_8 = FUNC_4(VAR_4, "cirrus,boost-ctl-millivolt", &VAR_7);
 if (!VAR_8) {
  if (VAR_7 < 2550 || VAR_7 > 12000) {
   FUNC_0(&VAR_2->dev,
    "Invalid Boost Voltage %d mV\n", VAR_7);
   return -VAR_1;
  }
  VAR_3->bst_vctl = (((VAR_7 - 2550) / 100) + 1) << 1;
 } else {
  FUNC_0(&VAR_2->dev,
   "Unable to find required parameter 'cirrus,boost-ctl-millivolt'");
  return -VAR_1;
 }

 VAR_8 = FUNC_4(VAR_4, "cirrus,boost-ctl-select", &VAR_7);
 if (!VAR_8)
  VAR_3->bst_vctl_sel = VAR_7 | VAR_0;

 VAR_8 = FUNC_4(VAR_4, "cirrus,boost-peak-milliamp", &VAR_7);
 if (!VAR_8) {
  if (VAR_7 < 1600 || VAR_7 > 4500) {
   FUNC_0(&VAR_2->dev,
    "Invalid Boost Peak Current %u mA\n", VAR_7);
   return -VAR_1;
  }

  VAR_3->bst_ipk = (VAR_7 - 1600) / 50;
 } else {
  FUNC_0(&VAR_2->dev,
   "Unable to find required parameter 'cirrus,boost-peak-milliamp'");
  return -VAR_1;
 }

 VAR_3->multi_amp_mode = FUNC_3(VAR_4,
     "cirrus,multi-amp-mode");

 VAR_3->dcm_mode = FUNC_3(VAR_4,
     "cirrus,dcm-mode-enable");

 VAR_3->amp_pcm_inv = FUNC_3(VAR_4,
     "cirrus,amp-pcm-inv");

 VAR_3->imon_pol_inv = FUNC_3(VAR_4,
     "cirrus,imon-pol-inv");

 VAR_3->vmon_pol_inv = FUNC_3(VAR_4,
     "cirrus,vmon-pol-inv");

 if (FUNC_4(VAR_4, "cirrus,temp-warn-threshold", &VAR_7) >= 0)
  VAR_3->temp_warn_thld = VAR_7 | VAR_0;

 if (FUNC_4(VAR_4, "cirrus,boost-ind-nanohenry", &VAR_7) >= 0) {
  VAR_3->boost_ind = VAR_7;
 } else {
  FUNC_0(&VAR_2->dev, "Inductor not specified.\n");
  return -VAR_1;
 }

 if (FUNC_4(VAR_4, "cirrus,irq-drive-select", &VAR_7) >= 0)
  VAR_3->irq_drv_sel = VAR_7 | VAR_0;

 if (FUNC_4(VAR_4, "cirrus,irq-gpio-select", &VAR_7) >= 0)
  VAR_3->irq_gpio_sel = VAR_7 | VAR_0;


 VAR_6 = FUNC_1(VAR_4, "cirrus,vpbr-config");
 VAR_5->is_present = VAR_6 ? 1 : 0;
 if (VAR_5->is_present) {
  if (FUNC_4(VAR_6, "cirrus,vpbr-en",
      &VAR_7) >= 0)
   VAR_5->vpbr_en = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-thld",
      &VAR_7) >= 0)
   VAR_5->vpbr_thld = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-atk-rate",
      &VAR_7) >= 0)
   VAR_5->vpbr_atk_rate = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-atk-vol",
      &VAR_7) >= 0)
   VAR_5->vpbr_atk_vol = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-max-attn",
      &VAR_7) >= 0)
   VAR_5->vpbr_max_attn = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-wait",
      &VAR_7) >= 0)
   VAR_5->vpbr_wait = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-rel-rate",
      &VAR_7) >= 0)
   VAR_5->vpbr_rel_rate = VAR_7;
  if (FUNC_4(VAR_6, "cirrus,vpbr-mute-en",
      &VAR_7) >= 0)
   VAR_5->vpbr_mute_en = VAR_7;
 }
 FUNC_2(VAR_6);

 return 0;
}
