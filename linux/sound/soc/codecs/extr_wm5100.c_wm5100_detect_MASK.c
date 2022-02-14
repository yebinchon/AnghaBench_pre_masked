
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int jack_detecting; struct snd_soc_jack* jack; scalar_t__ jack_flips; } ;
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
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct wm5100_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;
 int FUNC_7 (struct wm5100_priv*,int ) ;

int FUNC_8(struct snd_soc_component *VAR_8, struct snd_soc_jack *VAR_9)
{
 struct wm5100_priv *VAR_10 = FUNC_1(VAR_8);
 struct snd_soc_dapm_context *VAR_11 = FUNC_0(VAR_8);

 if (VAR_9) {
  VAR_10->jack = VAR_9;
  VAR_10->jack_detecting = 1;
  VAR_10->jack_flips = 0;

  FUNC_7(VAR_10, 0);



  FUNC_2(VAR_8, VAR_7,
        VAR_0 |
        VAR_3,
        (7 << VAR_1) |
        VAR_3);


  FUNC_4(VAR_11);

  FUNC_3(VAR_11, "CP2");
  FUNC_3(VAR_11, "SYSCLK");

  FUNC_6(VAR_11);

  FUNC_5(VAR_11);




  FUNC_2(VAR_8, VAR_7,
        VAR_2, VAR_2);

  FUNC_2(VAR_8, VAR_6,
        VAR_4, 0);
 } else {
  FUNC_2(VAR_8, VAR_6,
        VAR_5 |
        VAR_4,
        VAR_5 |
        VAR_4);
  FUNC_2(VAR_8, VAR_7,
        VAR_2, 0);
  VAR_10->jack = ((void*)0);
 }

 return 0;
}
