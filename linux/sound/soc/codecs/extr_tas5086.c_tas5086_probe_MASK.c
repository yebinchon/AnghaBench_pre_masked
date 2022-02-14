
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tas5086_private {int pwm_start_mid_z; int charge_period; int supplies; int regmap; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
typedef int name ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 struct tas5086_private* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (char*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_11 (TYPE_1__*,struct tas5086_private*) ;
 int FUNC_12 (struct tas5086_private*) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_2)
{
 struct tas5086_private *VAR_3 = FUNC_9(VAR_2);
 int VAR_4, VAR_5;

 VAR_5 = FUNC_8(FUNC_0(VAR_3->supplies), VAR_3->supplies);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2->dev, "Failed to enable regulators: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_3->pwm_start_mid_z = 0;
 VAR_3->charge_period = 1300000;

 if (FUNC_3(FUNC_4(VAR_1), VAR_2->dev)) {
  struct device_node *VAR_6 = VAR_2->dev->of_node;

  FUNC_5(VAR_6, "ti,charge-period",
         &VAR_3->charge_period);

  for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
   char VAR_7[25];

   FUNC_10(VAR_7, sizeof(VAR_7),
     "ti,mid-z-channel-%d", VAR_4 + 1);

   if (FUNC_2(VAR_6, VAR_7, ((void*)0)) != ((void*)0))
    VAR_3->pwm_start_mid_z |= 1 << VAR_4;
  }
 }

 FUNC_12(VAR_3);
 VAR_5 = FUNC_11(VAR_2->dev, VAR_3);
 if (VAR_5 < 0)
  goto exit_disable_regulators;


 VAR_5 = FUNC_6(VAR_3->regmap, VAR_0, 0x30);
 if (VAR_5 < 0)
  goto exit_disable_regulators;

 return 0;

exit_disable_regulators:
 FUNC_7(FUNC_0(VAR_3->supplies), VAR_3->supplies);

 return VAR_5;
}
