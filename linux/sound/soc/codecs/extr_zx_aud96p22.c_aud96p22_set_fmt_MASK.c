
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct regmap {int dummy; } ;
struct aud96p22_priv {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;


 unsigned int VAR_7 ;


 unsigned int VAR_8 ;

 int FUNC_0 (struct regmap*,int ,unsigned int,unsigned int) ;
 struct aud96p22_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_9, unsigned int VAR_10)
{
 struct aud96p22_priv *VAR_11 = FUNC_1(VAR_9->component);
 struct regmap *VAR_12 = VAR_11->regmap;
 unsigned int VAR_13;


 switch (VAR_10 & VAR_8) {
 case 131:
  VAR_13 = 0;
  break;
 case 132:
  VAR_13 = VAR_6;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(VAR_12, VAR_0, VAR_6, VAR_13);


 switch (VAR_10 & VAR_7) {
 case 128:
  VAR_13 = VAR_5;
  break;
 case 130:
  VAR_13 = VAR_2;
  break;
 case 129:
  VAR_13 = VAR_3;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(VAR_12, VAR_0, VAR_4, VAR_13);

 return 0;
}
