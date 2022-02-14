
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt5645_priv {scalar_t__ codec_type; int en_button_func; int regmap; struct snd_soc_jack* btn_jack; struct snd_soc_jack* mic_jack; struct snd_soc_jack* hp_jack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct rt5645_priv*) ;
 struct rt5645_priv* FUNC_2 (struct snd_soc_component*) ;

int FUNC_3(struct snd_soc_component *VAR_5,
 struct snd_soc_jack *VAR_6, struct snd_soc_jack *VAR_7,
 struct snd_soc_jack *VAR_8)
{
 struct rt5645_priv *VAR_9 = FUNC_2(VAR_5);

 VAR_9->hp_jack = VAR_6;
 VAR_9->mic_jack = VAR_7;
 VAR_9->btn_jack = VAR_8;
 if (VAR_9->btn_jack && VAR_9->codec_type == VAR_0) {
  VAR_9->en_button_func = 1;
  FUNC_0(VAR_9->regmap, VAR_4,
    VAR_3, VAR_3);
  FUNC_0(VAR_9->regmap, VAR_2,
    VAR_1, VAR_1);
 }
 FUNC_1(0, VAR_9);

 return 0;
}
