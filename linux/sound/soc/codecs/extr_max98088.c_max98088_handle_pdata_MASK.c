
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dev; } ;
struct max98088_priv {int digmic; struct max98088_pdata* pdata; } ;
struct max98088_pdata {scalar_t__ eq_cfgcnt; scalar_t__ receiver_mode; scalar_t__ digmic_right_mode; scalar_t__ digmic_left_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct max98088_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_6)
{
       struct max98088_priv *VAR_7 = FUNC_2(VAR_6);
       struct max98088_pdata *VAR_8 = VAR_7->pdata;
       u8 VAR_9 = 0;

       if (!VAR_8) {
               FUNC_0(VAR_6->dev, "No platform data\n");
               return;
       }


       if (VAR_8->digmic_left_mode)
               VAR_9 |= VAR_0;

       if (VAR_8->digmic_right_mode)
               VAR_9 |= VAR_1;

       VAR_7->digmic = (VAR_9 ? 1 : 0);

       FUNC_4(VAR_6, VAR_5, VAR_9);


       VAR_9 = ((VAR_8->receiver_mode) ? VAR_2 : 0);
       FUNC_3(VAR_6, VAR_4,
               VAR_3, VAR_9);


       if (VAR_8->eq_cfgcnt)
               FUNC_1(VAR_6);
}
