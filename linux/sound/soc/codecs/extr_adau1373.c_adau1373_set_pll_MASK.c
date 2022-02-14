
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_soc_component {int dummy; } ;
struct adau1373 {int regmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;


 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (unsigned int,unsigned int,int*) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int ,int ,int) ;
 struct adau1373* FUNC_11 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_2, int VAR_3,
 int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 struct adau1373 *VAR_7 = FUNC_11(VAR_2);
 unsigned int VAR_8 = 0;
 uint8_t VAR_9[5];
 int VAR_10;

 switch (VAR_3) {
 case 141:
 case 140:
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_4) {
 case 139:
 case 138:
 case 137:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 136:
 case 135:
 case 134:
 case 133:
  break;
 default:
  return -VAR_1;
 }

 if (VAR_5 < 7813 || VAR_5 > 27000000)
  return -VAR_1;

 if (VAR_6 < 45158000 || VAR_6 > 49152000)
  return -VAR_1;



 while (VAR_5 < 8000000) {
  VAR_5 *= 2;
  VAR_8++;
 }

 VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_9);
 if (VAR_10)
  return -VAR_1;

 if (VAR_8) {
  VAR_8 = 11 - VAR_8;
  FUNC_9(VAR_7->regmap, FUNC_7(VAR_3),
   VAR_0, 0);
 } else {
  FUNC_9(VAR_7->regmap, FUNC_7(VAR_3),
   VAR_0,
   VAR_0);
 }

 FUNC_10(VAR_7->regmap, FUNC_1(VAR_3),
  (VAR_4 << 4) | VAR_8);
 FUNC_10(VAR_7->regmap, FUNC_2(VAR_3), VAR_9[0]);
 FUNC_10(VAR_7->regmap, FUNC_3(VAR_3), VAR_9[1]);
 FUNC_10(VAR_7->regmap, FUNC_4(VAR_3), VAR_9[2]);
 FUNC_10(VAR_7->regmap, FUNC_5(VAR_3), VAR_9[3]);
 FUNC_10(VAR_7->regmap, FUNC_6(VAR_3), VAR_9[4]);


 FUNC_9(VAR_7->regmap, FUNC_0(VAR_3), 0x3f, 0x09);

 return 0;
}
