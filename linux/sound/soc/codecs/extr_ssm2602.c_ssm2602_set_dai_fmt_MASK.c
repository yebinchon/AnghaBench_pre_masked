
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int regmap; } ;
struct snd_soc_dai {int component; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct ssm2602_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
  unsigned int VAR_6)
{
 struct ssm2602_priv *VAR_7 = FUNC_1(VAR_5->component);
 unsigned int VAR_8 = 0;


 switch (VAR_6 & VAR_3) {
 case 138:
  VAR_8 |= 0x0040;
  break;
 case 137:
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_6 & VAR_1) {
 case 134:
  VAR_8 |= 0x0002;
  break;
 case 128:
  break;
 case 131:
  VAR_8 |= 0x0001;
  break;
 case 136:
  VAR_8 |= 0x0013;
  break;
 case 135:
  VAR_8 |= 0x0003;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_6 & VAR_2) {
 case 129:
  break;
 case 133:
  VAR_8 |= 0x0090;
  break;
 case 132:
  VAR_8 |= 0x0080;
  break;
 case 130:
  VAR_8 |= 0x0010;
  break;
 default:
  return -VAR_0;
 }


 FUNC_0(VAR_7->regmap, VAR_4, VAR_8);
 return 0;
}
