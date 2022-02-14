
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


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
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_13, unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 int VAR_16, VAR_17, VAR_18;

 VAR_16 = 0;
 VAR_17 = 0;

 switch (VAR_14 & VAR_1) {
 case 133:
  VAR_18 = 0;
  break;
 case 132:
  VAR_18 = 2;
  break;
 default:
  FUNC_0(VAR_15->dev, "Unsupported DAI format %d\n",
   VAR_14 & VAR_1);
  return -VAR_0;
 }

 switch (VAR_14 & VAR_3) {
 case 134:
  break;
 case 135:
  VAR_16 |= VAR_5;
  break;
 case 136:
  VAR_17 |= VAR_7;
  break;
 case 137:
  VAR_16 |= VAR_5;
  VAR_17 |= VAR_7;
  break;
 default:
  FUNC_0(VAR_15->dev, "Unsupported master mode %d\n",
   VAR_14 & VAR_3);
  return -VAR_0;
 }

 switch (VAR_14 & VAR_2) {
 case 128:
  break;
 case 131:
  VAR_17 |= VAR_6;
  VAR_16 |= VAR_4;
  break;
 case 130:
  VAR_17 |= VAR_6;
  break;
 case 129:
  VAR_16 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_15, VAR_9, VAR_7 |
       VAR_6, VAR_17);
 FUNC_1(VAR_15, VAR_10,
       VAR_5 | VAR_4,
       VAR_16);
 FUNC_1(VAR_15, VAR_11,
       VAR_5 | VAR_4,
       VAR_16);
 FUNC_1(VAR_15, VAR_12,
       VAR_8, VAR_18);

 return 0;
}
