
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



 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct cs43130_private* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_7,
         struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = FUNC_6(VAR_7->dapm);
 struct cs43130_private *VAR_11 = FUNC_5(VAR_10);

 switch (VAR_9) {
 case 128:
  switch (VAR_11->dev_id) {
  case 134:
  case 131:
   FUNC_3(VAR_11->regmap, VAR_5,
            FUNC_0(VAR_5));
   break;
  }
  break;
 case 130:
  FUNC_4(VAR_11->regmap, VAR_2,
       VAR_1, 0);
  switch (VAR_11->dev_id) {
  case 134:
  case 131:
   FUNC_3(VAR_11->regmap, VAR_6,
            FUNC_0(VAR_6));
   break;
  }
  break;
 case 129:
  switch (VAR_11->dev_id) {
  case 134:
  case 131:
   FUNC_3(VAR_11->regmap, VAR_4,
            FUNC_0(VAR_4));
   FUNC_4(VAR_11->regmap,
        VAR_2,
        VAR_1, VAR_0);




   FUNC_2(130);
   break;
  case 133:
  case 132:
   FUNC_4(VAR_11->regmap,
        VAR_2,
        VAR_1, VAR_0);
   break;
  }
  break;
 default:
  FUNC_1(VAR_10->dev, "Invalid event = 0x%x\n", VAR_9);
  return -VAR_3;
 }
 return 0;
}
