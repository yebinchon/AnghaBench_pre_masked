
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm9705_priv {struct regmap* ac97; TYPE_1__* mfd_pdata; } ;
struct snd_soc_component {int dev; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; struct regmap* ac97; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 struct regmap* FUNC_4 (struct regmap*,int *) ;
 struct wm9705_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,struct regmap*) ;
 int FUNC_7 (struct snd_soc_component*,struct regmap*) ;
 int FUNC_8 (struct regmap*) ;
 struct regmap* FUNC_9 (struct snd_soc_component*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_5)
{
 struct wm9705_priv *VAR_6 = FUNC_5(VAR_5);
 struct regmap *VAR_7;

 if (VAR_6->mfd_pdata) {
  VAR_6->ac97 = VAR_6->mfd_pdata->ac97;
  VAR_7 = VAR_6->mfd_pdata->regmap;
 } else if (FUNC_0(VAR_0)) {
  VAR_6->ac97 = FUNC_9(VAR_5, VAR_2,
            VAR_3);
  if (FUNC_1(VAR_6->ac97)) {
   FUNC_3(VAR_5->dev, "Failed to register AC97 codec\n");
   return FUNC_2(VAR_6->ac97);
  }

  VAR_7 = FUNC_4(VAR_6->ac97, &VAR_4);
  if (FUNC_1(VAR_7)) {
   FUNC_8(VAR_6->ac97);
   return FUNC_2(VAR_7);
  }
 } else {
  return -VAR_1;
 }

 FUNC_7(VAR_5, VAR_6->ac97);
 FUNC_6(VAR_5, VAR_7);

 return 0;
}
