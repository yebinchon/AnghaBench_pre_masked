
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct jz4740_i2s {int dummy; } ;


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


 int FUNC_0 (struct jz4740_i2s*,int ) ;
 int FUNC_1 (struct jz4740_i2s*,int ,int) ;
 struct jz4740_i2s* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_10, unsigned int VAR_11)
{
 struct jz4740_i2s *VAR_12 = FUNC_2(VAR_10);

 uint32_t VAR_13 = 0;
 uint32_t VAR_14;

 VAR_14 = FUNC_0(VAR_12, VAR_5);

 VAR_14 &= ~(VAR_1 | VAR_2);

 switch (VAR_11 & VAR_9) {
 case 131:
  VAR_14 |= VAR_1 | VAR_2;
  VAR_13 |= VAR_3;
  break;
 case 133:
  VAR_14 |= VAR_2;
  break;
 case 132:
  VAR_14 |= VAR_1;
  break;
 case 134:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_7) {
 case 129:
  VAR_13 |= VAR_4;
  break;
 case 130:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_8) {
 case 128:
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_12, VAR_5, VAR_14);
 FUNC_1(VAR_12, VAR_6, VAR_13);

 return 0;
}
