
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int num; int base; int regmap; } ;
struct madera_priv {unsigned int* adsp_rate_cache; struct madera* madera; struct wm_adsp* adsp; } ;
struct madera {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct madera_priv*) ;
 int FUNC_3 (struct madera_priv*,struct wm_adsp*,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

int FUNC_5(struct madera_priv *VAR_2, int VAR_3,
   unsigned int VAR_4)
{
 struct wm_adsp *VAR_5 = &VAR_2->adsp[VAR_3];
 struct madera *VAR_6 = VAR_2->madera;
 unsigned int VAR_7, VAR_8;
 int VAR_9;
 VAR_9 = FUNC_4(VAR_5->regmap, VAR_5->base, &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_6->dev,
   "Failed to read current DSP rate: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_7 &= VAR_0;

 VAR_8 = VAR_2->adsp_rate_cache[VAR_5->num - 1] << VAR_1;

 if (VAR_8 == VAR_7) {
  FUNC_0(VAR_6->dev, "DSP rate not changed\n");
  return FUNC_3(VAR_2, VAR_5, VAR_4);
 } else {
  FUNC_0(VAR_6->dev, "DSP rate changed\n");


  FUNC_2(VAR_2);
  VAR_9 = FUNC_3(VAR_2, VAR_5, VAR_4);
  FUNC_2(VAR_2);
  return VAR_9;
 }
}
