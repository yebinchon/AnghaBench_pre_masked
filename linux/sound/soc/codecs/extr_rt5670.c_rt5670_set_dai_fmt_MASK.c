
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5670_priv {int* master; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;




 unsigned int VAR_11 ;


 unsigned int VAR_12 ;

 unsigned int VAR_13 ;

 int FUNC_0 (int ,char*,int) ;
 struct rt5670_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct rt5670_priv *VAR_17 = FUNC_1(VAR_16);
 unsigned int VAR_18 = 0;

 switch (VAR_15 & VAR_13) {
 case 135:
  VAR_17->master[VAR_14->id] = 1;
  break;
 case 134:
  VAR_18 |= VAR_10;
  VAR_17->master[VAR_14->id] = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_12) {
 case 128:
  break;
 case 130:
  VAR_18 |= VAR_3;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_11) {
 case 131:
  break;
 case 129:
  VAR_18 |= VAR_5;
  break;
 case 133:
  VAR_18 |= VAR_7;
  break;
 case 132:
  VAR_18 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_14->id) {
 case 137:
  FUNC_2(VAR_16, VAR_1,
   VAR_9 | VAR_4 |
   VAR_6, VAR_18);
  break;
 case 136:
  FUNC_2(VAR_16, VAR_2,
   VAR_9 | VAR_4 |
   VAR_6, VAR_18);
  break;
 default:
  FUNC_0(VAR_16->dev, "Invalid dai->id: %d\n", VAR_14->id);
  return -VAR_0;
 }
 return 0;
}
