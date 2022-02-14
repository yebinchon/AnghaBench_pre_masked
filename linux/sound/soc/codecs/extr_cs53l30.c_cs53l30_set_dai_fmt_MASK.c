
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {int component; } ;
struct cs53l30_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 unsigned int VAR_7 ;



 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct cs53l30_private* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10, unsigned int VAR_11)
{
 struct cs53l30_private *VAR_12 = FUNC_1(VAR_10->component);
 u8 VAR_13 = 0, VAR_14 = 0;

 switch (VAR_11 & VAR_9) {
 case 133:
  VAR_13 |= VAR_2;
  break;
 case 132:
  break;
 default:
  return -VAR_6;
 }


 switch (VAR_11 & VAR_7) {
 case 130:

  VAR_14 |= VAR_4;
  break;
 case 131:





  VAR_14 |= VAR_5;
  break;
 default:
  return -VAR_6;
 }


 switch (VAR_11 & VAR_8) {
 case 128:
 case 129:
  VAR_13 ^= VAR_3;
  break;
 default:
  break;
 }

 FUNC_0(VAR_12->regmap, VAR_0,
      VAR_2 | VAR_3, VAR_13);

 FUNC_0(VAR_12->regmap, VAR_1,
      VAR_4 | VAR_5, VAR_14);

 return 0;
}
