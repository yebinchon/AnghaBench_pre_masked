
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct max9867_priv {int master; int dsp_a; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 unsigned int VAR_10 ;



 unsigned int VAR_11 ;
 unsigned int VAR_12 ;


 int FUNC_0 (int ,int ,int) ;
 struct max9867_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_13,
  unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 struct max9867_priv *VAR_16 = FUNC_1(VAR_15);
 u8 VAR_17, VAR_18;

 switch (VAR_14 & VAR_12) {
 case 135:
  VAR_16->master = 1;
  VAR_17 = VAR_6;
  VAR_18 = VAR_5;
  break;
 case 134:
  VAR_16->master = 0;
  VAR_17 = VAR_18 = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_14 & VAR_10) {
 case 132:
  VAR_16->dsp_a = 0;
  VAR_17 |= VAR_2;
  break;
 case 133:
  VAR_16->dsp_a = 1;
  VAR_17 |= VAR_8 | VAR_7;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_14 & VAR_11) {
 case 128:
  break;
 case 131:
  VAR_17 |= VAR_9 | VAR_1;
  break;
 case 130:
  VAR_17 |= VAR_1;
  break;
 case 129:
  VAR_17 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_16->regmap, VAR_3, VAR_17);
 FUNC_0(VAR_16->regmap, VAR_4, VAR_18);

 return 0;
}
