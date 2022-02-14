
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {scalar_t__ base; int regmap; } ;
struct snd_soc_dapm_widget {size_t shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wm_adsp*,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int ,unsigned int) ;
 struct wm_adsp* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

int FUNC_4(struct snd_soc_dapm_widget *VAR_3, unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_3->dapm);
 struct wm_adsp *VAR_6 = FUNC_2(VAR_5);
 struct wm_adsp *VAR_7 = &VAR_6[VAR_3->shift];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7->regmap, VAR_7->base + VAR_2,
     VAR_0,
     VAR_4 << VAR_1);
 if (VAR_8)
  FUNC_0(VAR_7, "Failed to set clock rate: %d\n", VAR_8);

 return VAR_8;
}
