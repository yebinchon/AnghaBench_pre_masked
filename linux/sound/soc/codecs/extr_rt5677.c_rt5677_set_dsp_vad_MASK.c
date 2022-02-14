
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5677_priv {int type; int regmap; int fw2; int fw1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct snd_soc_component*,int) ;
 int FUNC_10 (int,int ) ;
 struct rt5677_priv* FUNC_11 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_22, bool VAR_23)
{
 struct rt5677_priv *VAR_24 = FUNC_11(VAR_22);
 static bool VAR_25;
 int VAR_26;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_23 && !VAR_25) {
  VAR_25 = 1;

  FUNC_2(VAR_24->regmap, 0);
  FUNC_1(VAR_24->regmap, 1);

  FUNC_5(VAR_24->regmap, VAR_3, 0x1, 0x1);
  FUNC_5(VAR_24->regmap,
   VAR_15 + VAR_2, 0x0f00, 0x0f00);
  FUNC_5(VAR_24->regmap, VAR_16,
   VAR_10, 0x0);
  FUNC_5(VAR_24->regmap, VAR_17,
   VAR_20, VAR_20);
  switch (VAR_24->type) {
  case 128:
   FUNC_5(VAR_24->regmap, VAR_8,
    VAR_12, VAR_11);
   FUNC_5(VAR_24->regmap, VAR_9,
    VAR_13 |
    VAR_5,
    VAR_14 |
    VAR_4);
   break;
  case 129:
   FUNC_5(VAR_24->regmap, VAR_9,
    VAR_5,
    VAR_4);
   break;
  default:
   break;
  }
  FUNC_6(VAR_24->regmap, VAR_19, 0x07ff);
  FUNC_6(VAR_24->regmap, VAR_18, 0x07fd);
  FUNC_9(VAR_22, 1);

  VAR_26 = FUNC_8(&VAR_24->fw1, VAR_6,
   VAR_22->dev);
  if (VAR_26 == 0) {
   FUNC_10(0x50000000, VAR_24->fw1);
   FUNC_7(VAR_24->fw1);
  }

  VAR_26 = FUNC_8(&VAR_24->fw2, VAR_7,
   VAR_22->dev);
  if (VAR_26 == 0) {
   FUNC_10(0x60000000, VAR_24->fw2);
   FUNC_7(VAR_24->fw2);
  }

  FUNC_5(VAR_24->regmap, VAR_18, 0x1, 0x0);

  FUNC_1(VAR_24->regmap, 0);
  FUNC_2(VAR_24->regmap, 1);
 } else if (!VAR_23 && VAR_25) {
  VAR_25 = 0;

  FUNC_2(VAR_24->regmap, 0);
  FUNC_1(VAR_24->regmap, 1);

  FUNC_5(VAR_24->regmap, VAR_18, 0x1, 0x1);
  FUNC_9(VAR_22, 0);
  FUNC_6(VAR_24->regmap, VAR_18, 0x0001);

  FUNC_6(VAR_24->regmap, VAR_21, 0x10ec);

  FUNC_1(VAR_24->regmap, 0);
  FUNC_3(VAR_24->regmap);
  FUNC_4(VAR_24->regmap);
 }

 return 0;
}
