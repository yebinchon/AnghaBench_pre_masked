
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cs35l34_platform_data {unsigned int boost_vtge; unsigned int boost_ind; unsigned int boost_peak; unsigned int i2s_sdinloc; unsigned int tdm_rising_edge; void* amp_inv; void* gain_zc_disable; void* digsft_disable; void* aif_half_drv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 void* FUNC_2 (struct device_node*,char*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
    struct cs35l34_platform_data *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 unsigned int VAR_4;

 if (FUNC_3(VAR_3, "cirrus,boost-vtge-millivolt",
  &VAR_4) >= 0) {

  if (VAR_4 > 8000 || (VAR_4 < 3300 && VAR_4 > 0)) {
   FUNC_0(&VAR_1->dev,
    "Invalid Boost Voltage %d mV\n", VAR_4);
   return -VAR_0;
  }
  if (VAR_4 == 0)
   VAR_2->boost_vtge = 0;
  else
   VAR_2->boost_vtge = ((VAR_4 - 3300)/100) + 1;
 } else {
  FUNC_1(&VAR_1->dev,
   "Boost Voltage not specified. Using VP\n");
 }

 if (FUNC_3(VAR_3, "cirrus,boost-ind-nanohenry", &VAR_4) >= 0) {
  VAR_2->boost_ind = VAR_4;
 } else {
  FUNC_0(&VAR_1->dev, "Inductor not specified.\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_3, "cirrus,boost-peak-milliamp", &VAR_4) >= 0) {
  if (VAR_4 > 3840 || VAR_4 < 1200) {
   FUNC_0(&VAR_1->dev,
    "Invalid Boost Peak Current %d mA\n", VAR_4);
   return -VAR_0;
  }
  VAR_2->boost_peak = ((VAR_4 - 1200)/80) + 1;
 }

 VAR_2->aif_half_drv = FUNC_2(VAR_3,
  "cirrus,aif-half-drv");
 VAR_2->digsft_disable = FUNC_2(VAR_3,
  "cirrus,digsft-disable");

 VAR_2->gain_zc_disable = FUNC_2(VAR_3,
  "cirrus,gain-zc-disable");
 VAR_2->amp_inv = FUNC_2(VAR_3, "cirrus,amp-inv");

 if (FUNC_3(VAR_3, "cirrus,i2s-sdinloc", &VAR_4) >= 0)
  VAR_2->i2s_sdinloc = VAR_4;
 if (FUNC_3(VAR_3, "cirrus,tdm-rising-edge", &VAR_4) >= 0)
  VAR_2->tdm_rising_edge = VAR_4;

 return 0;
}
