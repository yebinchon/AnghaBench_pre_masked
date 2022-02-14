
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
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
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 u16 VAR_17, VAR_18, VAR_19, VAR_20;

 switch (VAR_15 & VAR_1) {
 case 134:
  VAR_17 = 0x2;
  break;
 case 128:
  VAR_17 = 0x0;
  break;
 case 131:
  VAR_17 = 0x1;
  break;
 case 136:
 case 135:
  VAR_17 = 0x3;
  break;
 default:
  FUNC_0(VAR_14->dev, "Unknown dai format\n");
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_4,
       VAR_8, VAR_17 << VAR_9);

 switch (VAR_15 & VAR_3) {
 case 138:
  VAR_18 = 1;
  break;
 case 137:
  VAR_18 = 0;
  break;
 default:
  FUNC_0(VAR_14->dev, "Unknown master/slave configuration\n");
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_7,
       VAR_12, VAR_18 << VAR_13);


 switch (VAR_15 & VAR_1) {
 case 136:
 case 135:
  FUNC_0(VAR_14->dev, "DSP A/B modes are not supported\n");
  return -VAR_0;
 default:
  break;
 }

 VAR_19 = VAR_20 = 0;
 switch (VAR_15 & VAR_2) {
 case 129:
  break;
 case 133:
  VAR_19 = VAR_20 = 1;
  break;
 case 132:
  VAR_19 = 1;
  break;
 case 130:
  VAR_20 = 1;
  break;
 default:
  FUNC_0(VAR_14->dev, "Unknown polarity configuration\n");
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_4,
       VAR_10, VAR_20 << VAR_11);
 FUNC_1(VAR_16, VAR_4,
       VAR_5, VAR_19 << VAR_6);
 return 0;
}
