
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct monitor_cfg {int is_present; int imon_specs; int vmon_specs; int vpmon_specs; int vbstmon_specs; int vpbrstat_specs; int zerofill_specs; void* zerofill_frm; void* zerofill_loc; void* zerofill_dpth; void* vpbrstat_frm; void* vpbrstat_loc; void* vpbrstat_dpth; void* vbstmon_frm; void* vbstmon_loc; void* vbstmon_dpth; void* vpmon_frm; void* vpmon_loc; void* vpmon_dpth; void* vmon_frm; void* vmon_loc; void* vmon_dpth; void* imon_scale; void* imon_frm; void* imon_loc; void* imon_dpth; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct classh_cfg {int classh_algo_enable; unsigned int classh_bst_max_limit; unsigned int classh_mem_depth; unsigned int classh_release_rate; unsigned int classh_headroom; unsigned int classh_wk_fet_disable; unsigned int classh_wk_fet_delay; unsigned int classh_wk_fet_thld; unsigned int classh_vpch_auto; unsigned int classh_vpch_rate; unsigned int classh_vpch_man; void* classh_bst_override; } ;
struct cs35l35_platform_data {unsigned int bst_vctl; unsigned int bst_ipk; unsigned int boost_ind; unsigned int sp_drv_str; unsigned int sp_drv_unused; unsigned int aud_channel; unsigned int adv_channel; void* gain_zc; void* ext_bst; void* shared_bst; void* stereo; void* bst_pdn_fet_on; struct monitor_cfg mon_cfg; struct classh_cfg classh_algo; } ;


 int FUNC_0 (void**) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*) ;
 void* FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,unsigned int*) ;
 int FUNC_6 (struct device_node*,char*,void**,int const) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2,
    struct cs35l35_platform_data *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct device_node *VAR_5, *VAR_6;
 struct classh_cfg *VAR_7 = &VAR_3->classh_algo;
 struct monitor_cfg *VAR_8 = &VAR_3->mon_cfg;
 unsigned int VAR_9 = 0;
 u8 VAR_10[4];
 const int VAR_11 = FUNC_0(VAR_10);
 const int VAR_12 = VAR_11 - 1;
 int VAR_13 = 0;

 if (!VAR_4)
  return 0;

 VAR_3->bst_pdn_fet_on = FUNC_4(VAR_4,
     "cirrus,boost-pdn-fet-on");

 VAR_13 = FUNC_5(VAR_4, "cirrus,boost-ctl-millivolt", &VAR_9);
 if (VAR_13 >= 0) {
  if (VAR_9 < 2600 || VAR_9 > 9000) {
   FUNC_1(&VAR_2->dev,
    "Invalid Boost Voltage %d mV\n", VAR_9);
   return -VAR_1;
  }
  VAR_3->bst_vctl = ((VAR_9 - 2600) / 100) + 1;
 }

 VAR_13 = FUNC_5(VAR_4, "cirrus,boost-peak-milliamp", &VAR_9);
 if (VAR_13 >= 0) {
  if (VAR_9 < 1680 || VAR_9 > 4480) {
   FUNC_1(&VAR_2->dev,
    "Invalid Boost Peak Current %u mA\n", VAR_9);
   return -VAR_1;
  }

  VAR_3->bst_ipk = ((VAR_9 - 1680) / 110) | VAR_0;
 }

 VAR_13 = FUNC_5(VAR_4, "cirrus,boost-ind-nanohenry", &VAR_9);
 if (VAR_13 >= 0) {
  VAR_3->boost_ind = VAR_9;
 } else {
  FUNC_1(&VAR_2->dev, "Inductor not specified.\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_4, "cirrus,sp-drv-strength", &VAR_9) >= 0)
  VAR_3->sp_drv_str = VAR_9;
 if (FUNC_5(VAR_4, "cirrus,sp-drv-unused", &VAR_9) >= 0)
  VAR_3->sp_drv_unused = VAR_9 | VAR_0;

 VAR_3->stereo = FUNC_4(VAR_4, "cirrus,stereo-config");

 if (VAR_3->stereo) {
  VAR_13 = FUNC_5(VAR_4, "cirrus,audio-channel", &VAR_9);
  if (VAR_13 >= 0)
   VAR_3->aud_channel = VAR_9;

  VAR_13 = FUNC_5(VAR_4, "cirrus,advisory-channel",
        &VAR_9);
  if (VAR_13 >= 0)
   VAR_3->adv_channel = VAR_9;

  VAR_3->shared_bst = FUNC_4(VAR_4,
      "cirrus,shared-boost");
 }

 VAR_3->ext_bst = FUNC_4(VAR_4, "cirrus,external-boost");

 VAR_3->gain_zc = FUNC_4(VAR_4, "cirrus,amp-gain-zc");

 VAR_5 = FUNC_2(VAR_4, "cirrus,classh-internal-algo");
 VAR_7->classh_algo_enable = VAR_5 ? 1 : 0;

 if (VAR_7->classh_algo_enable) {
  VAR_7->classh_bst_override =
   FUNC_4(VAR_4, "cirrus,classh-bst-overide");

  VAR_13 = FUNC_5(VAR_5,
        "cirrus,classh-bst-max-limit",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_bst_max_limit = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5,
        "cirrus,classh-bst-max-limit",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_bst_max_limit = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-mem-depth",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_mem_depth = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-release-rate",
        &VAR_9);
  if (VAR_13 >= 0)
   VAR_7->classh_release_rate = VAR_9;

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-headroom",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_headroom = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5,
        "cirrus,classh-wk-fet-disable",
        &VAR_9);
  if (VAR_13 >= 0)
   VAR_7->classh_wk_fet_disable = VAR_9;

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-wk-fet-delay",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_wk_fet_delay = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-wk-fet-thld",
        &VAR_9);
  if (VAR_13 >= 0)
   VAR_7->classh_wk_fet_thld = VAR_9;

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-vpch-auto",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_vpch_auto = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-vpch-rate",
        &VAR_9);
  if (VAR_13 >= 0) {
   VAR_9 |= VAR_0;
   VAR_7->classh_vpch_rate = VAR_9;
  }

  VAR_13 = FUNC_5(VAR_5, "cirrus,classh-vpch-man",
        &VAR_9);
  if (VAR_13 >= 0)
   VAR_7->classh_vpch_man = VAR_9;
 }
 FUNC_3(VAR_5);


 VAR_6 = FUNC_2(VAR_4, "cirrus,monitor-signal-format");
 VAR_8->is_present = VAR_6 ? 1 : 0;
 if (VAR_8->is_present) {
  VAR_13 = FUNC_6(VAR_6, "cirrus,imon",
      VAR_10, VAR_11);
  if (!VAR_13) {
   VAR_8->imon_specs = 1;
   VAR_8->imon_dpth = VAR_10[0];
   VAR_8->imon_loc = VAR_10[1];
   VAR_8->imon_frm = VAR_10[2];
   VAR_8->imon_scale = VAR_10[3];
  }
  VAR_13 = FUNC_6(VAR_6, "cirrus,vmon",
      VAR_10, VAR_12);
  if (!VAR_13) {
   VAR_8->vmon_specs = 1;
   VAR_8->vmon_dpth = VAR_10[0];
   VAR_8->vmon_loc = VAR_10[1];
   VAR_8->vmon_frm = VAR_10[2];
  }
  VAR_13 = FUNC_6(VAR_6, "cirrus,vpmon",
      VAR_10, VAR_12);
  if (!VAR_13) {
   VAR_8->vpmon_specs = 1;
   VAR_8->vpmon_dpth = VAR_10[0];
   VAR_8->vpmon_loc = VAR_10[1];
   VAR_8->vpmon_frm = VAR_10[2];
  }
  VAR_13 = FUNC_6(VAR_6, "cirrus,vbstmon",
      VAR_10, VAR_12);
  if (!VAR_13) {
   VAR_8->vbstmon_specs = 1;
   VAR_8->vbstmon_dpth = VAR_10[0];
   VAR_8->vbstmon_loc = VAR_10[1];
   VAR_8->vbstmon_frm = VAR_10[2];
  }
  VAR_13 = FUNC_6(VAR_6, "cirrus,vpbrstat",
      VAR_10, VAR_12);
  if (!VAR_13) {
   VAR_8->vpbrstat_specs = 1;
   VAR_8->vpbrstat_dpth = VAR_10[0];
   VAR_8->vpbrstat_loc = VAR_10[1];
   VAR_8->vpbrstat_frm = VAR_10[2];
  }
  VAR_13 = FUNC_6(VAR_6, "cirrus,zerofill",
      VAR_10, VAR_12);
  if (!VAR_13) {
   VAR_8->zerofill_specs = 1;
   VAR_8->zerofill_dpth = VAR_10[0];
   VAR_8->zerofill_loc = VAR_10[1];
   VAR_8->zerofill_frm = VAR_10[2];
  }
 }
 FUNC_3(VAR_6);

 return 0;
}
