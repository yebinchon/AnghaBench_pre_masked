
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* wm8996_polarity_fn ) (struct snd_soc_component*,int ) ;
struct wm8996_priv {int detecting; int (* polarity_cb ) (struct snd_soc_component*,int ) ;scalar_t__ jack_flips; struct snd_soc_jack* jack; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


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
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct wm8996_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;

int FUNC_7(struct snd_soc_component *VAR_10, struct snd_soc_jack *VAR_11,
    wm8996_polarity_fn VAR_12)
{
 struct wm8996_priv *VAR_13 = FUNC_1(VAR_10);
 struct snd_soc_dapm_context *VAR_14 = FUNC_0(VAR_10);

 VAR_13->jack = VAR_11;
 VAR_13->detecting = 1;
 VAR_13->polarity_cb = VAR_12;
 VAR_13->jack_flips = 0;

 if (VAR_13->polarity_cb)
  VAR_13->polarity_cb(VAR_10, 0);


 FUNC_2(VAR_10, VAR_5,
       VAR_3, 0);
 FUNC_2(VAR_10, VAR_6,
       VAR_4, 0);


 FUNC_4(VAR_14);

 FUNC_3(VAR_14, "LDO2");
 FUNC_3(VAR_14, "SYSCLK");

 FUNC_5(VAR_14);




 FUNC_2(VAR_10, VAR_9,
       VAR_7, VAR_7);


 FUNC_2(VAR_10, VAR_9,
       VAR_8,
       VAR_8);


 FUNC_2(VAR_10, VAR_2,
       VAR_1 | VAR_0, 0);

 return 0;
}
