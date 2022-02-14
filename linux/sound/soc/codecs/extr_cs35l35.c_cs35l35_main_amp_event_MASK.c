
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int bst_vctl; int bst_pdn_fet_on; } ;
struct cs35l35_private {TYPE_1__ pdata; int regmap; int pdm_mode; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int**,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 struct cs35l35_private* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_11,
  struct snd_kcontrol *VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = FUNC_5(VAR_11->dapm);
 struct cs35l35_private *VAR_15 = FUNC_4(VAR_14);
 unsigned int VAR_16[4];
 int VAR_17;

 switch (VAR_13) {
 case 128:
  if (VAR_15->pdata.bst_pdn_fet_on)
   FUNC_3(VAR_15->regmap, VAR_10,
    VAR_8,
    0 << VAR_7);
  else
   FUNC_3(VAR_15->regmap, VAR_10,
    VAR_8,
    0 << VAR_6);
  break;
 case 130:
  FUNC_6(5000, 5100);

  if (VAR_15->pdm_mode)
   FUNC_3(VAR_15->regmap,
     VAR_4,
     VAR_2,
     0 << VAR_3);

  FUNC_3(VAR_15->regmap, VAR_9,
   VAR_0, 0);

  for (VAR_17 = 0; VAR_17 < 2; VAR_17++)
   FUNC_2(VAR_15->regmap, VAR_5,
     &VAR_16, FUNC_0(VAR_16));

  break;
 case 129:
  FUNC_3(VAR_15->regmap, VAR_9,
    VAR_0,
    1 << VAR_1);
  if (VAR_15->pdata.bst_pdn_fet_on)
   FUNC_3(VAR_15->regmap, VAR_10,
    VAR_8,
    1 << VAR_7);
  else
   FUNC_3(VAR_15->regmap, VAR_10,
    VAR_8,
    1 << VAR_6);
  break;
 case 131:
  FUNC_6(5000, 5100);




  if (VAR_15->pdm_mode)
   FUNC_3(VAR_15->regmap,
     VAR_4,
     VAR_2,
     VAR_15->pdata.bst_vctl
     << VAR_3);

  break;
 default:
  FUNC_1(VAR_14->dev, "Invalid event = 0x%x\n", VAR_13);
 }
 return 0;
}
