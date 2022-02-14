
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct rt5670_priv {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct rt5670_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_7)
{
 struct snd_soc_dapm_context *VAR_8 = FUNC_2(VAR_7);
 struct rt5670_priv *VAR_9 = FUNC_3(VAR_7);

 switch (FUNC_4(VAR_7, VAR_2) & VAR_1) {
 case 130:
 case 129:
  FUNC_6(VAR_8,
   VAR_4,
   FUNC_0(VAR_4));
  FUNC_5(VAR_8,
   VAR_3,
   FUNC_0(VAR_3));
  break;
 case 128:
  FUNC_6(VAR_8,
   VAR_6,
   FUNC_0(VAR_6));
  FUNC_5(VAR_8,
   VAR_5,
   FUNC_0(VAR_5));
  break;
 default:
  FUNC_1(VAR_7->dev,
   "The driver is for RT5670 RT5671 or RT5672 only\n");
  return -VAR_0;
 }
 VAR_9->component = VAR_7;

 return 0;
}
