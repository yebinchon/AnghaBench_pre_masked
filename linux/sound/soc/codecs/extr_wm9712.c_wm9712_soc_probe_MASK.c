
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm9712_priv {struct regmap* ac97; TYPE_1__* mfd_pdata; } ;
struct snd_soc_component {int dev; } ;
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
 int FUNC_3 (int ,char*,int) ;
 struct regmap* FUNC_4 (struct regmap*,int *) ;
 struct wm9712_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,struct regmap*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_8 (struct regmap*) ;
 struct regmap* FUNC_9 (struct snd_soc_component*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_6)
{
 struct wm9712_priv *VAR_7 = FUNC_5(VAR_6);
 struct regmap *VAR_8;

 if (VAR_7->mfd_pdata) {
  VAR_7->ac97 = VAR_7->mfd_pdata->ac97;
  VAR_8 = VAR_7->mfd_pdata->regmap;
 } else if (FUNC_0(VAR_1)) {
  int VAR_9;

  VAR_7->ac97 = FUNC_9(VAR_6, VAR_3,
            VAR_4);
  if (FUNC_1(VAR_7->ac97)) {
   VAR_9 = FUNC_2(VAR_7->ac97);
   FUNC_3(VAR_6->dev,
    "Failed to register AC97 codec: %d\n", VAR_9);
   return VAR_9;
  }

  VAR_8 = FUNC_4(VAR_7->ac97, &VAR_5);
  if (FUNC_1(VAR_8)) {
   FUNC_8(VAR_7->ac97);
   return FUNC_2(VAR_8);
  }
 } else {
  return -VAR_2;
 }

 FUNC_6(VAR_6, VAR_8);


 FUNC_7(VAR_6, VAR_0, 0x3000, 0x3000);

 return 0;
}
