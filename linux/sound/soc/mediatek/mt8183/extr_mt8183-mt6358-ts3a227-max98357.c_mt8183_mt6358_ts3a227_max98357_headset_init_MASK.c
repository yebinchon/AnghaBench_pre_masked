
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int card; } ;
struct mt8183_mt6358_ts3a227_max98357_priv {int headset_jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mt8183_mt6358_ts3a227_max98357_priv* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int *,int *,int ) ;
 int FUNC_2 (struct snd_soc_component*,int *) ;

__attribute__((used)) static int
FUNC_3(struct snd_soc_component *VAR_6)
{
 int VAR_7;
 struct mt8183_mt6358_ts3a227_max98357_priv *VAR_8 =
   FUNC_0(VAR_6->card);


 VAR_7 = FUNC_1(&VAR_5,
        "Headset Jack",
        VAR_4 |
        VAR_0 | VAR_1 |
        VAR_2 | VAR_3,
        &VAR_8->headset_jack,
        ((void*)0), 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6, &VAR_8->headset_jack);

 return VAR_7;
}
