
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cs42l42_private {unsigned int ts_inv; unsigned int ts_dbnc_rise; unsigned int ts_dbnc_fall; unsigned int btn_det_init_dbnce; unsigned int btn_det_event_dbnce; unsigned int* bias_thresholds; unsigned int hs_bias_ramp_rate; int regmap; void* hs_bias_ramp_time; } ;


 void* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;


 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (TYPE_1__*,char*,unsigned int,...) ;
 int FUNC_1 (struct device_node*,char*,unsigned int*) ;
 int FUNC_2 (struct device_node*,char*,int *,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 void** VAR_23 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_24,
     struct cs42l42_private *VAR_25)
{
 struct device_node *VAR_26 = VAR_24->dev.of_node;
 unsigned int VAR_27;
 unsigned int VAR_28[VAR_15];
 int VAR_29;
 int VAR_30;

 VAR_29 = FUNC_1(VAR_26, "cirrus,ts-inv", &VAR_27);

 if (!VAR_29) {
  switch (VAR_27) {
  case 128:
  case 129:
   VAR_25->ts_inv = VAR_27;
   break;
  default:
   FUNC_0(&VAR_24->dev,
    "Wrong cirrus,ts-inv DT value %d\n",
    VAR_27);
   VAR_25->ts_inv = 129;
  }
 } else {
  VAR_25->ts_inv = 129;
 }

 FUNC_3(VAR_25->regmap, VAR_16,
   VAR_19,
   (VAR_25->ts_inv << VAR_20));

 VAR_29 = FUNC_1(VAR_26, "cirrus,ts-dbnc-rise", &VAR_27);

 if (!VAR_29) {
  switch (VAR_27) {
  case 137:
  case 135:
  case 132:
  case 131:
  case 130:
  case 136:
  case 134:
  case 133:
   VAR_25->ts_dbnc_rise = VAR_27;
   break;
  default:
   FUNC_0(&VAR_24->dev,
    "Wrong cirrus,ts-dbnc-rise DT value %d\n",
    VAR_27);
   VAR_25->ts_dbnc_rise = 136;
  }
 } else {
  VAR_25->ts_dbnc_rise = 136;
 }

 FUNC_3(VAR_25->regmap, VAR_16,
   VAR_21,
   (VAR_25->ts_dbnc_rise <<
   VAR_22));

 VAR_29 = FUNC_1(VAR_26, "cirrus,ts-dbnc-fall", &VAR_27);

 if (!VAR_29) {
  switch (VAR_27) {
  case 137:
  case 135:
  case 132:
  case 131:
  case 130:
  case 136:
  case 134:
  case 133:
   VAR_25->ts_dbnc_fall = VAR_27;
   break;
  default:
   FUNC_0(&VAR_24->dev,
    "Wrong cirrus,ts-dbnc-fall DT value %d\n",
    VAR_27);
   VAR_25->ts_dbnc_fall = 137;
  }
 } else {
  VAR_25->ts_dbnc_fall = 137;
 }

 FUNC_3(VAR_25->regmap, VAR_16,
   VAR_17,
   (VAR_25->ts_dbnc_fall <<
   VAR_18));

 VAR_29 = FUNC_1(VAR_26, "cirrus,btn-det-init-dbnce", &VAR_27);

 if (!VAR_29) {
  if ((VAR_27 >= VAR_5) &&
   (VAR_27 <= VAR_4))
   VAR_25->btn_det_init_dbnce = VAR_27;
  else {
   FUNC_0(&VAR_24->dev,
    "Wrong cirrus,btn-det-init-dbnce DT value %d\n",
    VAR_27);
   VAR_25->btn_det_init_dbnce =
    VAR_3;
  }
 } else {
  VAR_25->btn_det_init_dbnce =
   VAR_3;
 }

 VAR_29 = FUNC_1(VAR_26, "cirrus,btn-det-event-dbnce", &VAR_27);

 if (!VAR_29) {
  if ((VAR_27 >= VAR_2) &&
   (VAR_27 <= VAR_1))
   VAR_25->btn_det_event_dbnce = VAR_27;
  else {
   FUNC_0(&VAR_24->dev,
   "Wrong cirrus,btn-det-event-dbnce DT value %d\n", VAR_27);
   VAR_25->btn_det_event_dbnce =
    VAR_0;
  }
 } else {
  VAR_25->btn_det_event_dbnce =
   VAR_0;
 }

 VAR_29 = FUNC_2(VAR_26, "cirrus,bias-lvls",
       (u32 *)VAR_28, VAR_15);

 if (!VAR_29) {
  for (VAR_30 = 0; VAR_30 < VAR_15; VAR_30++) {
   if ((VAR_28[VAR_30] >= VAR_14) &&
    (VAR_28[VAR_30] <= VAR_13))
    VAR_25->bias_thresholds[VAR_30] = VAR_28[VAR_30];
   else {
    FUNC_0(&VAR_24->dev,
    "Wrong cirrus,bias-lvls[%d] DT value %d\n", VAR_30,
     VAR_28[VAR_30]);
    VAR_25->bias_thresholds[VAR_30] =
     VAR_23[VAR_30];
   }
  }
 } else {
  for (VAR_30 = 0; VAR_30 < VAR_15; VAR_30++)
   VAR_25->bias_thresholds[VAR_30] = VAR_23[VAR_30];
 }

 VAR_29 = FUNC_1(VAR_26, "cirrus,hs-bias-ramp-rate", &VAR_27);

 if (!VAR_29) {
  switch (VAR_27) {
  case 140:
   VAR_25->hs_bias_ramp_rate = VAR_27;
   VAR_25->hs_bias_ramp_time = VAR_8;
   break;
  case 141:
   VAR_25->hs_bias_ramp_rate = VAR_27;
   VAR_25->hs_bias_ramp_time = VAR_9;
   break;
  case 139:
   VAR_25->hs_bias_ramp_rate = VAR_27;
   VAR_25->hs_bias_ramp_time = VAR_10;
   break;
  case 138:
   VAR_25->hs_bias_ramp_rate = VAR_27;
   VAR_25->hs_bias_ramp_time = VAR_11;
   break;
  default:
   FUNC_0(&VAR_24->dev,
    "Wrong cirrus,hs-bias-ramp-rate DT value %d\n",
    VAR_27);
   VAR_25->hs_bias_ramp_rate = 139;
   VAR_25->hs_bias_ramp_time = VAR_10;
  }
 } else {
  VAR_25->hs_bias_ramp_rate = 139;
  VAR_25->hs_bias_ramp_time = VAR_10;
 }

 FUNC_3(VAR_25->regmap, VAR_12,
   VAR_6,
   (VAR_25->hs_bias_ramp_rate <<
   VAR_7));

 return 0;
}
