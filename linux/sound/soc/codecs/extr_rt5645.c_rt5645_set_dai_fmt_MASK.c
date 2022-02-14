
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5645_priv {int codec_type; int* master; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;




 unsigned int VAR_9 ;


 unsigned int VAR_10 ;

 unsigned int VAR_11 ;

 int FUNC_0 (int ,char*,int) ;
 struct rt5645_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_12, unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 struct rt5645_priv *VAR_15 = FUNC_1(VAR_14);
 unsigned int VAR_16 = 0, VAR_17;

 switch (VAR_15->codec_type) {
 case 138:
  VAR_17 = 8;
  break;
 default:
  VAR_17 = 7;
  break;
 }

 switch (VAR_13 & VAR_11) {
 case 135:
  VAR_15->master[VAR_12->id] = 1;
  break;
 case 134:
  VAR_16 |= VAR_8;
  VAR_15->master[VAR_12->id] = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13 & VAR_10) {
 case 128:
  break;
 case 130:
  VAR_16 |= (1 << VAR_17);
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13 & VAR_9) {
 case 131:
  break;
 case 129:
  VAR_16 |= VAR_3;
  break;
 case 133:
  VAR_16 |= VAR_5;
  break;
 case 132:
  VAR_16 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }
 switch (VAR_12->id) {
 case 137:
  FUNC_2(VAR_14, VAR_1,
   VAR_7 | (1 << VAR_17) |
   VAR_4, VAR_16);
  break;
 case 136:
  FUNC_2(VAR_14, VAR_2,
   VAR_7 | (1 << VAR_17) |
   VAR_4, VAR_16);
  break;
 default:
  FUNC_0(VAR_14->dev, "Invalid dai->id: %d\n", VAR_12->id);
  return -VAR_0;
 }
 return 0;
}
