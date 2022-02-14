
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {struct snd_soc_jack* jack; } ;
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
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct wm8962_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;
 int FUNC_7 (struct snd_soc_jack*,int ,int) ;

int FUNC_8(struct snd_soc_component *VAR_7, struct snd_soc_jack *VAR_8)
{
 struct wm8962_priv *VAR_9 = FUNC_1(VAR_7);
 struct snd_soc_dapm_context *VAR_10 = FUNC_0(VAR_7);
 int VAR_11, VAR_12;

 VAR_9->jack = VAR_8;
 if (VAR_8) {
  VAR_11 = 0;
  VAR_12 = VAR_4;
 } else {
  VAR_11 = VAR_5 | VAR_6;
  VAR_12 = 0;
 }

 FUNC_2(VAR_7, VAR_3,
       VAR_5 | VAR_6, VAR_11);
 FUNC_2(VAR_7, VAR_2,
       VAR_4, VAR_12);


 FUNC_7(VAR_9->jack, 0,
       VAR_1 | VAR_0);

 FUNC_5(VAR_10);

 if (VAR_8) {
  FUNC_4(VAR_10, "SYSCLK");
  FUNC_4(VAR_10, "MICBIAS");
 } else {
  FUNC_3(VAR_10, "SYSCLK");
  FUNC_3(VAR_10, "MICBIAS");
 }

 FUNC_6(VAR_10);

 return 0;
}
