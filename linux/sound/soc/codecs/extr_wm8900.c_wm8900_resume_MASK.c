
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8900_priv {int fll_out; int fll_in; int regmap; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 struct wm8900_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_1)
{
 struct wm8900_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_4(VAR_1);

 VAR_3 = FUNC_1(VAR_2->regmap);
 if (VAR_3 != 0) {
  FUNC_0(VAR_1->dev, "Failed to restore cache: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_2(VAR_1, VAR_0);


 if (VAR_2->fll_out) {
  int VAR_4 = VAR_2->fll_out;
  int VAR_5 = VAR_2->fll_in;

  VAR_2->fll_in = 0;
  VAR_2->fll_out = 0;

  VAR_3 = FUNC_5(VAR_1, 0, VAR_5, VAR_4);
  if (VAR_3 != 0) {
   FUNC_0(VAR_1->dev, "Failed to restart FLL\n");
   return VAR_3;
  }
 }

 return 0;
}
