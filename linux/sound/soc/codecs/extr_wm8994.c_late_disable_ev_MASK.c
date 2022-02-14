
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int aif2clk_disable; int aif1clk_disable; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;



 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int const) ;
 int FUNC_1 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int const) ;
 struct wm8994_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_5,
      struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_4(VAR_5->dapm);
 struct wm8994_priv *VAR_9 = FUNC_2(VAR_8);

 switch (VAR_7) {
 case 128:
  if (VAR_9->aif1clk_disable) {
   FUNC_0(VAR_5, VAR_6, VAR_0);
   FUNC_3(VAR_8, VAR_2,
         VAR_1, 0);
   FUNC_0(VAR_5, VAR_6, 128);
   VAR_9->aif1clk_disable = 0;
  }
  if (VAR_9->aif2clk_disable) {
   FUNC_1(VAR_5, VAR_6, VAR_0);
   FUNC_3(VAR_8, VAR_4,
         VAR_3, 0);
   FUNC_1(VAR_5, VAR_6, 128);
   VAR_9->aif2clk_disable = 0;
  }
  break;
 }

 return 0;
}
