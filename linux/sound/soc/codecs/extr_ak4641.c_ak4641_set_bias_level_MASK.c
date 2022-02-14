
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct ak4641_priv {int regmap; } ;
struct ak4641_platform_data {int gpio_power; int gpio_npdn; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {struct ak4641_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct ak4641_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_3,
 enum snd_soc_bias_level VAR_4)
{
 struct ak4641_priv *VAR_5 = FUNC_7(VAR_3);
 struct ak4641_platform_data *VAR_6 = VAR_3->dev->platform_data;
 int VAR_7;

 switch (VAR_4) {
 case 130:

  FUNC_8(VAR_3, VAR_0, 0x20, 0);
  break;
 case 129:

  FUNC_8(VAR_3, VAR_0, 0x20, 0x20);
  break;
 case 128:
  if (FUNC_6(VAR_3) == 131) {
   if (VAR_6 && FUNC_1(VAR_6->gpio_power))
    FUNC_2(VAR_6->gpio_power, 1);
   FUNC_3(1);
   if (VAR_6 && FUNC_1(VAR_6->gpio_npdn))
    FUNC_2(VAR_6->gpio_npdn, 1);
   FUNC_3(1);

   VAR_7 = FUNC_5(VAR_5->regmap);
   if (VAR_7) {
    FUNC_0(VAR_3->dev,
     "Failed to sync cache: %d\n", VAR_7);
    return VAR_7;
   }
  }
  FUNC_8(VAR_3, VAR_1, 0x80, 0x80);
  FUNC_8(VAR_3, VAR_2, 0x80, 0);
  break;
 case 131:
  FUNC_8(VAR_3, VAR_1, 0x80, 0);
  if (VAR_6 && FUNC_1(VAR_6->gpio_npdn))
   FUNC_2(VAR_6->gpio_npdn, 0);
  if (VAR_6 && FUNC_1(VAR_6->gpio_power))
   FUNC_2(VAR_6->gpio_power, 0);
  FUNC_4(VAR_5->regmap);
  break;
 }
 return 0;
}
