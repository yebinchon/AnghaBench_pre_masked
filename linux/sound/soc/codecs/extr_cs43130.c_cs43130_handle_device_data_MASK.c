
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cs43130_private {int * dc_threshold; int * ac_freq; void* ac_meas; void* dc_meas; int xtal_ibias; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (TYPE_1__*,char*,unsigned int) ;
 void* FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *,int) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9,
          struct cs43130_private *VAR_10)
{
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 unsigned int VAR_12;
 int VAR_13;

 if (FUNC_3(VAR_11, "cirrus,xtal-ibias", &VAR_12) < 0) {

  VAR_10->xtal_ibias = VAR_5;
  return 0;
 }

 switch (VAR_12) {
 case 1:
  VAR_10->xtal_ibias = VAR_4;
  break;
 case 2:
  VAR_10->xtal_ibias = VAR_2;
  break;
 case 3:
  VAR_10->xtal_ibias = VAR_3;
  break;
 default:
  FUNC_0(&VAR_9->dev,
   "Invalid cirrus,xtal-ibias value: %d\n", VAR_12);
  return -VAR_6;
 }

 VAR_10->dc_meas = FUNC_1(VAR_11, "cirrus,dc-measure");
 VAR_10->ac_meas = FUNC_1(VAR_11, "cirrus,ac-measure");

 if (FUNC_2(VAR_11, "cirrus,ac-freq", VAR_10->ac_freq,
     VAR_0) < 0) {
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
   VAR_10->ac_freq[VAR_13] = VAR_7[VAR_13];
 }

 if (FUNC_2(VAR_11, "cirrus,dc-threshold",
           VAR_10->dc_threshold,
           VAR_1) < 0) {
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   VAR_10->dc_threshold[VAR_13] = VAR_8[VAR_13];
 }

 return 0;
}
