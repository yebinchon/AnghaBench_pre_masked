
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5640_priv {int* master; } ;


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
 int VAR_11 ;
 int VAR_12 ;




 unsigned int VAR_13 ;


 unsigned int VAR_14 ;

 unsigned int VAR_15 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,size_t) ;
 struct rt5640_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_16, unsigned int VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_16->component;
 struct rt5640_priv *VAR_19 = FUNC_2(VAR_18);
 unsigned int VAR_20 = 0;
 int VAR_21;

 switch (VAR_17 & VAR_15) {
 case 135:
  VAR_19->master[VAR_16->id] = 1;
  break;
 case 134:
  VAR_20 |= VAR_10;
  VAR_19->master[VAR_16->id] = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17 & VAR_14) {
 case 128:
  break;
 case 130:
  VAR_20 |= VAR_3;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17 & VAR_13) {
 case 131:
  break;
 case 129:
  VAR_20 |= VAR_5;
  break;
 case 133:
  VAR_20 |= VAR_7;
  break;
 case 132:
  VAR_20 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_21 = FUNC_1(VAR_18, VAR_16->id);
 if (VAR_21 < 0) {
  FUNC_0(VAR_18->dev, "Failed to get sdp info: %d\n", VAR_21);
  return -VAR_0;
 }
 if (VAR_21 & VAR_11) {
  FUNC_3(VAR_18, VAR_1,
   VAR_9 | VAR_4 |
   VAR_6, VAR_20);
 }
 if (VAR_21 & VAR_12) {
  FUNC_3(VAR_18, VAR_2,
   VAR_9 | VAR_4 |
   VAR_6, VAR_20);
 }

 return 0;
}
