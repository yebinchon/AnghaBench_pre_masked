
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



 unsigned int VAR_10 ;


 unsigned int VAR_11 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12, unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 u8 VAR_15;
 u8 VAR_16;


 VAR_15 = FUNC_0(VAR_14, VAR_8);

 switch (VAR_13 & VAR_11) {
 case 132:
  VAR_15 |= VAR_7;
  break;
 case 131:
  VAR_15 &= ~(VAR_7);
  break;
 default:
  return -VAR_9;
 }


 VAR_16 = FUNC_0(VAR_14, VAR_5);
 VAR_16 &= ~VAR_1;

 switch (VAR_13 & VAR_10) {
 case 129:
  VAR_16 |= VAR_3;
  break;
 case 128:
  VAR_16 |= VAR_4;
  break;
 case 130:
  VAR_16 |= VAR_2;
  VAR_16 |= VAR_0;
  VAR_16 |= VAR_6;
  break;
 default:
  return -VAR_9;
 }


 FUNC_1(VAR_14, VAR_8, VAR_15);
 FUNC_1(VAR_14, VAR_5, VAR_16);

 return 0;
}
