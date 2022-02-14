
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun8i_codec {int regmap; } ;
struct snd_soc_dai {int component; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 unsigned int VAR_1 ;


 unsigned int VAR_2 ;

 unsigned int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct sun8i_codec* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_9, unsigned int VAR_10)
{
 struct sun8i_codec *VAR_11 = FUNC_2(VAR_9->component);
 u32 VAR_12;


 switch (VAR_10 & VAR_3) {
 case 135:
  VAR_12 = 0x1;
  break;
 case 136:
  VAR_12 = 0x0;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_11->regmap, VAR_4,
      FUNC_0(VAR_8),
      VAR_12 << VAR_8);


 switch (VAR_10 & VAR_2) {
 case 129:
  VAR_12 = 0x0;
  break;
 case 131:
  VAR_12 = 0x1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_11->regmap, VAR_4,
      FUNC_0(VAR_5),
      VAR_12 << VAR_5);
 FUNC_1(VAR_11->regmap, VAR_4,
      FUNC_0(VAR_7),
      !VAR_12 << VAR_7);


 switch (VAR_10 & VAR_1) {
 case 132:
  VAR_12 = 0x0;
  break;
 case 130:
  VAR_12 = 0x1;
  break;
 case 128:
  VAR_12 = 0x2;
  break;
 case 134:
 case 133:
  VAR_12 = 0x3;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_11->regmap, VAR_4,
      FUNC_0(VAR_6),
      VAR_12 << VAR_6);

 return 0;
}
