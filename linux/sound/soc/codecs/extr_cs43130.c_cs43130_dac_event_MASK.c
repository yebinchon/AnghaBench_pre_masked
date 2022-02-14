
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs43130_private {int regmap; int dev_id; } ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct cs43130_private* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_8,
        struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = FUNC_6(VAR_8->dapm);
 struct cs43130_private *VAR_12 = FUNC_5(VAR_11);

 switch (VAR_10) {
 case 128:
  switch (VAR_12->dev_id) {
  case 134:
  case 131:
   FUNC_3(VAR_12->regmap, VAR_6,
            FUNC_0(VAR_6));
   break;
  case 133:
  case 132:
   FUNC_3(VAR_12->regmap, VAR_7,
            FUNC_0(VAR_7));
   break;
  }
  break;
 case 129:
  FUNC_7(10000, 10050);

  FUNC_4(VAR_12->regmap, VAR_0, 0x99);

  switch (VAR_12->dev_id) {
  case 134:
  case 131:
   FUNC_3(VAR_12->regmap, VAR_5,
            FUNC_0(VAR_5));





   FUNC_2(1000);
   FUNC_4(VAR_12->regmap, VAR_1, 0);
   break;
  case 133:
  case 132:
   FUNC_7(12000, 12010);
   FUNC_4(VAR_12->regmap, VAR_2, 0);
   break;
  }

  FUNC_4(VAR_12->regmap, VAR_0, 0);
  break;
 case 130:
  switch (VAR_12->dev_id) {
  case 134:
  case 131:
   FUNC_3(VAR_12->regmap, VAR_4,
            FUNC_0(VAR_4));
   break;
  }
  break;
 default:
  FUNC_1(VAR_11->dev, "Invalid DAC event = 0x%x\n", VAR_10);
  return -VAR_3;
 }
 return 0;
}
