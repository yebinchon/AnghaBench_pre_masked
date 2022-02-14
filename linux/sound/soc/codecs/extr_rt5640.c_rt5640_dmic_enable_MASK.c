
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5640_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct rt5640_priv* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_12,
         bool VAR_13, bool VAR_14)
{
 struct rt5640_priv *VAR_15 = FUNC_1(VAR_12);

 FUNC_0(VAR_15->regmap, VAR_11,
  VAR_6, VAR_5);

 if (VAR_13) {
  FUNC_0(VAR_15->regmap, VAR_0,
   VAR_2, VAR_1);
  FUNC_0(VAR_15->regmap, VAR_11,
   VAR_8, VAR_7);
 }

 if (VAR_14) {
  FUNC_0(VAR_15->regmap, VAR_0,
   VAR_4, VAR_3);
  FUNC_0(VAR_15->regmap, VAR_11,
   VAR_10, VAR_9);
 }

 return 0;
}
