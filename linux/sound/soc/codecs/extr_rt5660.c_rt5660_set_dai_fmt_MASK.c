
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5660_priv {int* master; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;




 unsigned int VAR_10 ;


 unsigned int VAR_11 ;

 unsigned int VAR_12 ;

 int FUNC_0 (int ,char*,int) ;
 struct rt5660_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_13, unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 struct rt5660_priv *VAR_16 = FUNC_1(VAR_15);
 unsigned int VAR_17 = 0;

 switch (VAR_14 & VAR_12) {
 case 135:
  VAR_16->master[VAR_13->id] = 1;
  break;

 case 134:
  VAR_17 |= VAR_9;
  VAR_16->master[VAR_13->id] = 0;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_14 & VAR_11) {
 case 128:
  break;

 case 130:
  VAR_17 |= VAR_2;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_14 & VAR_10) {
 case 131:
  break;

 case 129:
  VAR_17 |= VAR_4;
  break;

 case 133:
  VAR_17 |= VAR_6;
  break;

 case 132:
  VAR_17 |= VAR_7;
  break;

 default:
  return -VAR_0;
 }

 switch (VAR_13->id) {
 case 136:
  FUNC_2(VAR_15, VAR_1,
   VAR_8 | VAR_3 |
   VAR_5, VAR_17);
  break;

 default:
  FUNC_0(VAR_15->dev, "Invalid dai->id: %d\n", VAR_13->id);
  return -VAR_0;
 }

 return 0;
}
