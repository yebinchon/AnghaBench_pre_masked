
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = VAR_14->component;

 VAR_17 = 0;
 switch (VAR_15 & VAR_3) {
 case 137:
  break;
 case 138:
  VAR_17 = VAR_12;
  break;
 default:
  FUNC_0(VAR_14->dev, "Unknown master/slave configuration\n");
  return -VAR_0;
 }

 VAR_18 = 0;
 switch (VAR_15 & VAR_1) {
 case 135:
  VAR_18 |= VAR_9;

 case 136:
  VAR_18 |= (0x3 << VAR_8);
  break;
 case 134:
  VAR_18 |= (0x2 << VAR_8);
  break;
 case 128:
  break;
 case 131:
  VAR_18 |= (0x1 << VAR_8);
  break;
 default:
  FUNC_0(VAR_14->dev, "Unknown dai format\n");
  return -VAR_0;
 }

 switch (VAR_15 & VAR_1) {
 case 136:
 case 135:

  switch (VAR_15 & VAR_2) {
  case 129:
   break;
  case 132:
   VAR_18 |= VAR_4;
   break;
  default:
   return -VAR_0;
  }
  break;

 case 134:
 case 128:
 case 131:
  switch (VAR_15 & VAR_2) {
  case 129:
   break;
  case 133:
   VAR_18 |= VAR_4 | VAR_9;
   break;
  case 132:
   VAR_18 |= VAR_4;
   break;
  case 130:
   VAR_18 |= VAR_9;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_6,
       VAR_5 |
       VAR_10 |
       VAR_7, VAR_18);
 FUNC_1(VAR_16, VAR_11,
       VAR_13, VAR_17);
 return 0;
}
