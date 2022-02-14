
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta32x_priv {unsigned int format; int regmap; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct sta32x_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_7,
         unsigned int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;
 struct sta32x_priv *VAR_10 = FUNC_1(VAR_9);
 u8 VAR_11 = 0;

 switch (VAR_8 & VAR_3) {
 case 133:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_8 & VAR_1) {
 case 132:
 case 128:
 case 131:
  VAR_10->format = VAR_8 & VAR_1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_8 & VAR_2) {
 case 129:
  VAR_11 |= VAR_6;
  break;
 case 130:
  VAR_11 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_10->regmap, VAR_4,
      VAR_5 | VAR_6, VAR_11);
}
