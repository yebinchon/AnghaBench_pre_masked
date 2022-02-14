
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_11,
 unsigned int VAR_12, unsigned int VAR_13, int VAR_14,
 int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_11->component;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18 = VAR_10 |
    VAR_6;

 switch (VAR_14) {
 case 2:
  VAR_17 |= VAR_7;
  break;
 case 4:
  VAR_17 |= VAR_8;
  break;
 case 8:
  VAR_17 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13) {
 case 0x03:
  VAR_17 |= VAR_2;
  break;
 case 0x0c:
  VAR_17 |= VAR_3;
  break;
 case 0x30:
  VAR_17 |= VAR_4;
  break;
 case 0xc0:
  VAR_17 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_16, VAR_1, VAR_18, VAR_17);

 return 0;
}
