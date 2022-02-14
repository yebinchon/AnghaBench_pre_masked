
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_9, unsigned int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_9->component;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_15 = VAR_9->driver->base;

 VAR_12 = 0;
 VAR_13 = 0;

 switch (VAR_10 & VAR_1) {
 case 133:
  VAR_14 = 0;
  break;
 case 132:
  VAR_14 = 2;
  break;
 default:
  FUNC_0(VAR_11->dev, "Unsupported DAI format %d\n",
   VAR_10 & VAR_1);
  return -VAR_0;
 }

 switch (VAR_10 & VAR_3) {
 case 134:
  break;
 case 135:
  VAR_12 |= VAR_5;
  break;
 case 136:
  VAR_13 |= VAR_7;
  break;
 case 137:
  VAR_12 |= VAR_5;
  VAR_13 |= VAR_7;
  break;
 default:
  FUNC_0(VAR_11->dev, "Unsupported master mode %d\n",
   VAR_10 & VAR_3);
  return -VAR_0;
 }

 switch (VAR_10 & VAR_2) {
 case 128:
  break;
 case 131:
  VAR_13 |= VAR_6;
  VAR_12 |= VAR_4;
  break;
 case 130:
  VAR_13 |= VAR_6;
  break;
 case 129:
  VAR_12 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_11, VAR_15 + 1, VAR_7 |
       VAR_6, VAR_13);
 FUNC_1(VAR_11, VAR_15 + 2, VAR_5 |
       VAR_4, VAR_12);
 FUNC_1(VAR_11, VAR_15 + 3, VAR_5 |
       VAR_4, VAR_12);
 FUNC_1(VAR_11, VAR_15 + 5, VAR_8, VAR_14);

 return 0;
}
