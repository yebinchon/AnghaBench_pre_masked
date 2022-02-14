
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int aif2clk_enable; int aif1clk_enable; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int const VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int const) ;
 int FUNC_1 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int const) ;
 struct wm8994_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_7,
     struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = FUNC_4(VAR_7->dapm);
 struct wm8994_priv *VAR_11 = FUNC_2(VAR_10);

 switch (VAR_9) {
 case 128:
  if (VAR_11->aif1clk_enable) {
   FUNC_0(VAR_7, VAR_8, 128);
   FUNC_3(VAR_10, VAR_3,
         VAR_2,
         VAR_1);
   FUNC_0(VAR_7, VAR_8, VAR_0);
   VAR_11->aif1clk_enable = 0;
  }
  if (VAR_11->aif2clk_enable) {
   FUNC_1(VAR_7, VAR_8, 128);
   FUNC_3(VAR_10, VAR_6,
         VAR_5,
         VAR_4);
   FUNC_1(VAR_7, VAR_8, VAR_0);
   VAR_11->aif2clk_enable = 0;
  }
  break;
 }


 FUNC_5(VAR_7, VAR_8, VAR_9);

 return 0;
}
