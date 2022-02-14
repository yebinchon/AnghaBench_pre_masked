
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5640_priv {int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 struct rt5640_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_25)
{
 struct rt5640_priv *VAR_26 = FUNC_2(VAR_25);

 FUNC_0(VAR_26->regmap, VAR_12,
  VAR_14 | VAR_16,
  VAR_10 | VAR_15);
 FUNC_0(VAR_26->regmap, VAR_0,
  VAR_23, VAR_22);

 FUNC_0(VAR_26->regmap, VAR_13,
  VAR_2 | VAR_4 | VAR_6,
  (VAR_9 << VAR_3) |
  (VAR_8 << VAR_5) |
  (VAR_9 << VAR_7));

 FUNC_1(VAR_26->regmap, VAR_24 +
  VAR_21, 0x1c00);
 FUNC_0(VAR_26->regmap, VAR_11,
  VAR_17 | VAR_20,
  VAR_18 | VAR_19);
 FUNC_0(VAR_26->regmap, VAR_24 +
  VAR_1, 0x0700, 0x0400);
}
