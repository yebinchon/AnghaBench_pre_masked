
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {scalar_t__* aifclk; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct wm8994_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_1(VAR_2);
 struct wm8994_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5, VAR_6;


 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_2, 1);
 if (VAR_4->aifclk[0] == VAR_4->aifclk[1]) {
  FUNC_5(VAR_2);
  return 0;
 }

 if (VAR_4->aifclk[0] < VAR_4->aifclk[1])
  VAR_6 = VAR_1;
 else
  VAR_6 = 0;

 VAR_5 = FUNC_3(VAR_2, VAR_0,
         VAR_1, VAR_6);
 if (VAR_5)
  FUNC_4(VAR_3);

 FUNC_5(VAR_2);

 return 0;
}
