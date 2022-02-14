
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max98504_priv {int brownout_enable; TYPE_1__* supplies; int regmap; int brownout_release_rate; int brownout_timed_hold; int brownout_attack_hold; int brownout_attenuation; int brownout_threshold; } ;
struct i2c_device_id {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int supply; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct max98504_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct device*,int,TYPE_1__*) ;
 int FUNC_7 (struct device*,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct max98504_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_9 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct max98504_priv *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_4(VAR_9, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 if (VAR_10) {
  if (!FUNC_9(VAR_10, "maxim,brownout-threshold",
     &VAR_11->brownout_threshold))
   VAR_11->brownout_enable = 1;

  FUNC_9(VAR_10, "maxim,brownout-attenuation",
     &VAR_11->brownout_attenuation);
  FUNC_9(VAR_10, "maxim,brownout-attack-hold-ms",
     &VAR_11->brownout_attack_hold);
  FUNC_9(VAR_10, "maxim,brownout-timed-hold-ms",
     &VAR_11->brownout_timed_hold);
  FUNC_9(VAR_10, "maxim,brownout-release-rate-ms",
     &VAR_11->brownout_release_rate);
 }

 VAR_11->regmap = FUNC_5(VAR_7, &VAR_5);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_13 = FUNC_2(VAR_11->regmap);
  FUNC_3(&VAR_7->dev, "regmap initialization failed: %d\n", VAR_13);
  return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  VAR_11->supplies[VAR_12].supply = VAR_6[VAR_12];

 VAR_13 = FUNC_6(VAR_9, VAR_2,
          VAR_11->supplies);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_8(VAR_7, VAR_11);

 return FUNC_7(VAR_9, &VAR_3,
    VAR_4, FUNC_0(VAR_4));
}
