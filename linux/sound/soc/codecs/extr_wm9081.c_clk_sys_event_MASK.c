
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int sysclk_source; int mclk_rate; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 struct wm9081_priv* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_4(VAR_1->dapm);
 struct wm9081_priv *VAR_5 = FUNC_3(VAR_4);


 switch (VAR_5->sysclk_source) {
 case 128:
  FUNC_1(VAR_4->dev, "Using %dHz MCLK\n", VAR_5->mclk_rate);
  break;
 case 129:
  FUNC_1(VAR_4->dev, "Using %dHz MCLK with FLL\n",
   VAR_5->mclk_rate);
  break;
 default:
  FUNC_2(VAR_4->dev, "System clock not configured\n");
  return -VAR_0;
 }

 switch (VAR_3) {
 case 130:
  FUNC_0(VAR_4);
  break;

 case 131:

  FUNC_5(VAR_4, 0, 0, 0);
  break;
 }

 return 0;
}
