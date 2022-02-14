
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int boost_vtge; } ;
struct cs35l34_private {int regmap; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cs35l34_private* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_4,
  struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_4->dapm);
 struct cs35l34_private *VAR_8 = FUNC_2(VAR_7);

 switch (VAR_6) {
 case 128:
  FUNC_1(VAR_8->regmap, VAR_1,
    VAR_0, VAR_8->pdata.boost_vtge);
  FUNC_4(5000, 5100);
  FUNC_1(VAR_8->regmap, VAR_3,
      VAR_2, 0);
  break;
 case 129:
  FUNC_1(VAR_8->regmap, VAR_1,
   VAR_0, 0);
  FUNC_1(VAR_8->regmap, VAR_3,
   VAR_2, VAR_2);
  FUNC_4(5000, 5100);
  break;
 default:
  FUNC_0("Invalid event = 0x%x\n", VAR_6);
 }
 return 0;
}
