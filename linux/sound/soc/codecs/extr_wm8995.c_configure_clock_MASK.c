
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8995_priv {scalar_t__* aifclk; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct wm8995_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = FUNC_1(VAR_3);
 struct wm8995_priv *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_2(VAR_3);


 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_3, 1);
 if (VAR_5->aifclk[0] == VAR_5->aifclk[1])
  return 0;

 if (VAR_5->aifclk[0] < VAR_5->aifclk[1])
  VAR_7 = VAR_1;
 else
  VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_3, VAR_0,
         VAR_2, VAR_7);
 if (!VAR_6)
  return 0;

 FUNC_4(VAR_4);

 return 0;
}
