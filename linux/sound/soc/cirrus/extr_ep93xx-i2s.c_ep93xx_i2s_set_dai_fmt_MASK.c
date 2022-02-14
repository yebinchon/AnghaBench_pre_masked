
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct ep93xx_i2s_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;


 unsigned int VAR_11 ;



 unsigned int VAR_12 ;

 unsigned int VAR_13 ;



 unsigned int FUNC_0 (struct ep93xx_i2s_info*,int ) ;
 int FUNC_1 (struct ep93xx_i2s_info*,int ,unsigned int) ;
 struct ep93xx_i2s_info* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_14,
      unsigned int VAR_15)
{
 struct ep93xx_i2s_info *VAR_16 = FUNC_2(VAR_14);
 unsigned int VAR_17;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19 = 0;

 VAR_17 = FUNC_0(VAR_16, VAR_5);

 switch (VAR_15 & VAR_11) {
 case 134:
  VAR_17 |= VAR_4;
  break;

 case 131:
  VAR_17 &= ~VAR_4;
  break;

 case 128:
  VAR_17 &= ~VAR_4;
  VAR_19 |= VAR_7;
  VAR_18 |= VAR_10;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_13) {
 case 135:

  VAR_17 |= VAR_3;
  break;

 case 136:

  VAR_17 &= ~VAR_3;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_12) {
 case 129:

  VAR_17 &= ~(VAR_1 | VAR_2);
  break;

 case 130:

  VAR_17 &= ~VAR_1;
  VAR_17 |= VAR_2;
  break;

 case 132:

  VAR_17 |= VAR_1;
  VAR_17 &= ~VAR_2;
  break;

 case 133:

  VAR_17 |= VAR_1 | VAR_2;
  break;
 }


 FUNC_1(VAR_16, VAR_5, VAR_17);
 FUNC_1(VAR_16, VAR_8, VAR_17);
 FUNC_1(VAR_16, VAR_6, VAR_19);
 FUNC_1(VAR_16, VAR_9, VAR_18);
 return 0;
}
