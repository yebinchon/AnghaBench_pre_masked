
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5659_priv {int* master; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;




 unsigned int VAR_12 ;


 unsigned int VAR_13 ;

 unsigned int VAR_14 ;

 int FUNC_0 (int ,char*,int) ;
 struct rt5659_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_15->component;
 struct rt5659_priv *VAR_18 = FUNC_1(VAR_17);
 unsigned int VAR_19 = 0;

 switch (VAR_16 & VAR_14) {
 case 135:
  VAR_18->master[VAR_15->id] = 1;
  break;
 case 134:
  VAR_19 |= VAR_11;
  VAR_18->master[VAR_15->id] = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_16 & VAR_13) {
 case 128:
  break;
 case 130:
  VAR_19 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_16 & VAR_12) {
 case 131:
  break;
 case 129:
  VAR_19 |= VAR_6;
  break;
 case 133:
  VAR_19 |= VAR_8;
  break;
 case 132:
  VAR_19 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15->id) {
 case 138:
  FUNC_2(VAR_17, VAR_1,
   VAR_10 | VAR_5 |
   VAR_7, VAR_19);
  break;
 case 137:
  FUNC_2(VAR_17, VAR_2,
   VAR_10 | VAR_5 |
   VAR_7, VAR_19);
  break;
 case 136:
  FUNC_2(VAR_17, VAR_3,
   VAR_10 | VAR_5 |
   VAR_7, VAR_19);
  break;
 default:
  FUNC_0(VAR_17->dev, "Invalid dai->id: %d\n", VAR_15->id);
  return -VAR_0;
 }
 return 0;
}
