
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cs35l32_platform_data {unsigned int sdout_share; unsigned int boost_mng; unsigned int sdout_datacfg; unsigned int batt_thresh; unsigned int batt_recov; } ;
 int FUNC_0 (TYPE_1__*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0,
        struct cs35l32_platform_data *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 unsigned int VAR_3;

 if (FUNC_1(VAR_2, "cirrus,sdout-share", &VAR_3) >= 0)
  VAR_1->sdout_share = VAR_3;

 if (FUNC_1(VAR_2, "cirrus,boost-manager", &VAR_3))
  VAR_3 = -1u;

 switch (VAR_3) {
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_1->boost_mng = VAR_3;
  break;
 case -1u:
 default:
  FUNC_0(&VAR_0->dev,
   "Wrong cirrus,boost-manager DT value %d\n", VAR_3);
  VAR_1->boost_mng = 133;
 }

 if (FUNC_1(VAR_2, "cirrus,sdout-datacfg", &VAR_3))
  VAR_3 = -1u;
 switch (VAR_3) {
 case 129:
 case 130:
 case 131:
 case 128:
  VAR_1->sdout_datacfg = VAR_3;
  break;
 case -1u:
 default:
  FUNC_0(&VAR_0->dev,
   "Wrong cirrus,sdout-datacfg DT value %d\n", VAR_3);
  VAR_1->sdout_datacfg = 131;
 }

 if (FUNC_1(VAR_2, "cirrus,battery-threshold", &VAR_3))
  VAR_3 = -1u;
 switch (VAR_3) {
 case 139:
 case 138:
 case 137:
 case 136:
  VAR_1->batt_thresh = VAR_3;
  break;
 case -1u:
 default:
  FUNC_0(&VAR_0->dev,
   "Wrong cirrus,battery-threshold DT value %d\n", VAR_3);
  VAR_1->batt_thresh = 137;
 }

 if (FUNC_1(VAR_2, "cirrus,battery-recovery", &VAR_3))
  VAR_3 = -1u;
 switch (VAR_3) {
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
  VAR_1->batt_recov = VAR_3;
  break;
 case -1u:
 default:
  FUNC_0(&VAR_0->dev,
   "Wrong cirrus,battery-recovery DT value %d\n", VAR_3);
  VAR_1->batt_recov = 142;
 }

 return 0;
}
