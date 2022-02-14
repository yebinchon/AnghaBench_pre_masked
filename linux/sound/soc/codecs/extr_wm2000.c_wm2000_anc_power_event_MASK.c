
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {int anc_eng_ena; int lock; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct wm2000_priv* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct snd_soc_component* FUNC_5 (int ) ;
 int FUNC_6 (struct wm2000_priv*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_0,
      struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_0->dapm);
 struct wm2000_priv *VAR_4 = FUNC_2(VAR_3->dev);
 int VAR_5;

 FUNC_3(&VAR_4->lock);

 if (FUNC_1(VAR_2))
  VAR_4->anc_eng_ena = 1;

 if (FUNC_0(VAR_2))
  VAR_4->anc_eng_ena = 0;

 VAR_5 = FUNC_6(VAR_4);

 FUNC_4(&VAR_4->lock);

 return VAR_5;
}
