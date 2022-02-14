
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;



 unsigned int VAR_21 ;



 unsigned int VAR_22 ;

 unsigned int VAR_23 ;



 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_24, unsigned int VAR_25)
{
 struct snd_soc_component *VAR_26 = VAR_24->component;
 unsigned int VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;

 FUNC_0(VAR_26->dev, "rk3036_codec dai set fmt : %08x\n", VAR_25);

 switch (VAR_25 & VAR_23) {
 case 136:
  VAR_27 |= VAR_5 |
        VAR_4;
  break;
 case 137:
  VAR_27 |= VAR_7 |
        VAR_2;
  break;
 default:
  FUNC_1(VAR_26->dev, "invalid fmt\n");
  return -VAR_0;
 }

 switch (VAR_25 & VAR_21) {
 case 135:
  VAR_28 |= VAR_12;
  break;
 case 134:
  VAR_28 |= VAR_9;
  break;
 case 128:
  VAR_28 |= VAR_13;
  break;
 case 131:
  VAR_28 |= VAR_10;
  break;
 default:
  FUNC_1(VAR_26->dev, "set dai format failed\n");
  return -VAR_0;
 }

 switch (VAR_25 & VAR_22) {
 case 129:
  VAR_28 |= VAR_15;
  VAR_29 |= VAR_19;
  break;
 case 133:
  VAR_28 |= VAR_16;
  VAR_29 |= VAR_20;
  break;
 case 132:
  VAR_28 |= VAR_16;
  VAR_29 |= VAR_19;
  break;
 case 130:
  VAR_28 |= VAR_15;
  VAR_29 |= VAR_20;
  break;
 default:
  FUNC_1(VAR_26->dev, "set dai format failed\n");
  return -VAR_0;
 }

 FUNC_2(VAR_26, VAR_1, VAR_3 |
       VAR_6, VAR_27);
 FUNC_2(VAR_26, VAR_8, VAR_14 |
       VAR_11, VAR_28);
 FUNC_2(VAR_26, VAR_17, VAR_18, VAR_29);

 return 0;
}
