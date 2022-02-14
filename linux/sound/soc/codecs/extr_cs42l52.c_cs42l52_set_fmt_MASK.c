
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int format; } ;
struct cs42l52_private {TYPE_1__ config; } ;


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




 unsigned int VAR_11 ;



 unsigned int VAR_12 ;

 unsigned int VAR_13 ;



 struct cs42l52_private* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct cs42l52_private *VAR_17 = FUNC_0(VAR_16);
 u8 VAR_18 = 0;

 switch (VAR_15 & VAR_13) {
 case 138:
  VAR_18 = VAR_8;
  break;
 case 137:
  VAR_18 = VAR_9;
  break;
 default:
  return -VAR_10;
 }


 switch (VAR_15 & VAR_11) {
 case 134:
  VAR_18 |= VAR_1 |
    VAR_3;
  break;
 case 128:
  VAR_18 |= VAR_5;
  break;
 case 131:
  VAR_18 |= VAR_2 |
    VAR_4;
  break;
 case 136:
  VAR_18 |= VAR_6;
  break;
 case 135:
  break;
 default:
  return -VAR_10;
 }


 switch (VAR_15 & VAR_12) {
 case 129:
  break;
 case 133:
  VAR_18 |= VAR_7;
  break;
 case 132:
  VAR_18 |= VAR_7;
  break;
 case 130:
  break;
 default:
  return -VAR_10;
 }
 VAR_17->config.format = VAR_18;
 FUNC_1(VAR_16, VAR_0, VAR_17->config.format);

 return 0;
}
