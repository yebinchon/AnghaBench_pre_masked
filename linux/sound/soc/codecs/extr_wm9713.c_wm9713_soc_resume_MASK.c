
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9713_priv {scalar_t__ pll_in; int ac97; } ;
struct snd_soc_component {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 struct wm9713_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3)
{
 struct wm9713_priv *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->ac97, 1, VAR_1,
  VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_3(VAR_3, VAR_0);


 if (VAR_4->pll_in)
  FUNC_5(VAR_3, 0, VAR_4->pll_in, 0);


 if (VAR_5 == 0) {
  FUNC_0(VAR_3->regmap);
  FUNC_2(VAR_3);
 }

 return VAR_5;
}
