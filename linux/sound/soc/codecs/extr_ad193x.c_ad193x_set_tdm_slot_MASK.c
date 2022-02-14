
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct ad193x_priv {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ad193x_priv*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct ad193x_priv* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_11, unsigned int VAR_12,
          unsigned int VAR_13, int VAR_14, int VAR_15)
{
 struct ad193x_priv *VAR_16 = FUNC_2(VAR_11->component);
 unsigned int VAR_17;

 switch (VAR_14) {
 case 2:
  VAR_17 = VAR_1;
  break;
 case 4:
  VAR_17 = VAR_2;
  break;
 case 8:
  VAR_17 = VAR_3;
  break;
 case 16:
  VAR_17 = VAR_0;
  break;
 default:
  return -VAR_10;
 }

 FUNC_1(VAR_16->regmap, VAR_9,
  VAR_7, VAR_17 << VAR_8);
 if (FUNC_0(VAR_16))
  FUNC_1(VAR_16->regmap, VAR_6,
       VAR_4,
       VAR_17 << VAR_5);

 return 0;
}
