
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dev; } ;
struct max98095_priv {struct max98095_pdata* pdata; } ;
struct max98095_pdata {scalar_t__ bq_cfgcnt; scalar_t__ eq_cfgcnt; scalar_t__ digmic_right_mode; scalar_t__ digmic_left_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct max98095_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_3)
{
 struct max98095_priv *VAR_4 = FUNC_3(VAR_3);
 struct max98095_pdata *VAR_5 = VAR_4->pdata;
 u8 VAR_6 = 0;

 if (!VAR_5) {
  FUNC_0(VAR_3->dev, "No platform data\n");
  return;
 }


 if (VAR_5->digmic_left_mode)
  VAR_6 |= VAR_1;

 if (VAR_5->digmic_right_mode)
  VAR_6 |= VAR_2;

 FUNC_4(VAR_3, VAR_0, VAR_6);


 if (VAR_5->eq_cfgcnt)
  FUNC_2(VAR_3);


 if (VAR_5->bq_cfgcnt)
  FUNC_1(VAR_3);
}
