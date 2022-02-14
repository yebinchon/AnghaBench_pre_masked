
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm9713_priv {struct regmap* ac97; TYPE_1__* mfd_pdata; } ;
struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; struct regmap* ac97; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct regmap* FUNC_3 (struct regmap*,int *) ;
 struct wm9713_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,struct regmap*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_7 (struct regmap*) ;
 struct regmap* FUNC_8 (struct snd_soc_component*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_6)
{
 struct wm9713_priv *VAR_7 = FUNC_4(VAR_6);
 struct regmap *VAR_8 = ((void*)0);

 if (VAR_7->mfd_pdata) {
  VAR_7->ac97 = VAR_7->mfd_pdata->ac97;
  VAR_8 = VAR_7->mfd_pdata->regmap;
 } else if (FUNC_0(VAR_1)) {
  VAR_7->ac97 = FUNC_8(VAR_6, VAR_3,
            VAR_4);
  if (FUNC_1(VAR_7->ac97))
   return FUNC_2(VAR_7->ac97);
  VAR_8 = FUNC_3(VAR_7->ac97, &VAR_5);
  if (FUNC_1(VAR_8)) {
   FUNC_7(VAR_7->ac97);
   return FUNC_2(VAR_8);
  }
 } else {
  return -VAR_2;
 }

 FUNC_5(VAR_6, VAR_8);


 FUNC_6(VAR_6, VAR_0, 0x7fff, 0x0000);

 return 0;
}
