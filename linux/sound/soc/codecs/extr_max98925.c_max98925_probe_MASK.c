
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max98925_priv {int regmap; struct snd_soc_component* component; } ;


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
 int FUNC_0 (int ,int ,int) ;
 struct max98925_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_12)
{
 struct max98925_priv *VAR_13 = FUNC_1(VAR_12);

 VAR_13->component = VAR_12;
 FUNC_0(VAR_13->regmap, VAR_10, 0x00);

 FUNC_0(VAR_13->regmap,
   VAR_9, VAR_0);
 FUNC_0(VAR_13->regmap, VAR_11, 0xC8);
 FUNC_0(VAR_13->regmap, VAR_4, 0xFF);
 FUNC_0(VAR_13->regmap, VAR_5, 0xFF);
 FUNC_0(VAR_13->regmap, VAR_6, 0xFF);
 FUNC_0(VAR_13->regmap, VAR_7, 0xF0);
 FUNC_0(VAR_13->regmap, VAR_8, 0xD8);
 FUNC_0(VAR_13->regmap, VAR_1, 0xF8);
 FUNC_0(VAR_13->regmap, VAR_3, 0xF0);

 FUNC_0(VAR_13->regmap, VAR_2, 0xF8);
 return 0;
}
