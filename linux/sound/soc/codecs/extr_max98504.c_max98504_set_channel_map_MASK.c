
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; } ;
struct regmap {int dummy; } ;
struct max98504_priv {struct regmap* regmap; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,int) ;
 struct max98504_priv* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3,
  unsigned int VAR_4, unsigned int *VAR_5,
  unsigned int VAR_6, unsigned int *VAR_7)
{
 struct max98504_priv *VAR_8 = FUNC_2(VAR_3);
 struct regmap *VAR_9 = VAR_8->regmap;
 unsigned int VAR_10, VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  if (VAR_5[VAR_10])
   VAR_11 |= (1 << VAR_10);

 switch (VAR_3->id) {
 case 129:
  FUNC_1(VAR_9, VAR_1,
        VAR_11);
  break;

 case 128:
  FUNC_1(VAR_9, VAR_2, VAR_11);
  break;
 default:
  FUNC_0(1);
 }

 FUNC_1(VAR_9, VAR_0, VAR_11 ? 0x3 : 0x01);

 return 0;
}
