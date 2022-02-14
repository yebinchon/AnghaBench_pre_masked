
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12, int VAR_13,
  unsigned int VAR_14, int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_12->component;
 u8 VAR_17;

 VAR_17 = FUNC_0(VAR_16, VAR_10);
 VAR_17 &= ~VAR_0;

 switch (VAR_14) {
 case 11289600:
  VAR_17 |= VAR_1;
  break;
 case 12000000:
  VAR_17 |= VAR_2;
  break;
 case 12288000:
  VAR_17 |= VAR_3;
  break;
 case 13000000:
  VAR_17 |= VAR_4;
  break;
 case 13500000:
  VAR_17 |= VAR_5;
  break;
 case 19200000:
  VAR_17 |= VAR_6;
  break;
 case 24000000:
  VAR_17 |= VAR_7;
  break;
 case 26000000:
  VAR_17 |= VAR_8;
  break;
 case 27000000:
  VAR_17 |= VAR_9;
  break;
 default:
  return -VAR_11;
 }

 FUNC_1(VAR_16, VAR_10, VAR_17);

 return 0;
}
