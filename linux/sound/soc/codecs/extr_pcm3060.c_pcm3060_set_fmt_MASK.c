
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct pcm3060_priv {int regmap; TYPE_1__* dai; } ;
struct TYPE_2__ {int is_master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;


 unsigned int VAR_8 ;

 unsigned int VAR_9 ;

 unsigned int VAR_10 ;
 unsigned int VAR_11 ;

 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,unsigned int,int ,unsigned int) ;
 struct pcm3060_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_12, unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 struct pcm3060_priv *VAR_15 = FUNC_2(VAR_14);
 unsigned int VAR_16;
 unsigned int VAR_17;

 if ((VAR_13 & VAR_9) != VAR_11) {
  FUNC_0(VAR_14->dev, "unsupported DAI polarity: 0x%x\n", VAR_13);
  return -VAR_0;
 }

 switch (VAR_13 & VAR_10) {
 case 132:
  VAR_15->dai[VAR_12->id].is_master = 1;
  break;
 case 131:
  VAR_15->dai[VAR_12->id].is_master = 0;
  break;
 default:
  FUNC_0(VAR_14->dev, "unsupported DAI master mode: 0x%x\n", VAR_13);
  return -VAR_0;
 }

 switch (VAR_13 & VAR_8) {
 case 130:
  VAR_17 = VAR_4;
  break;
 case 128:
  VAR_17 = VAR_6;
  break;
 case 129:
  VAR_17 = VAR_5;
  break;
 default:
  FUNC_0(VAR_14->dev, "unsupported DAI format: 0x%x\n", VAR_13);
  return -VAR_0;
 }

 if (VAR_12->id == VAR_1)
  VAR_16 = VAR_2;
 else
  VAR_16 = VAR_3;

 FUNC_1(VAR_15->regmap, VAR_16, VAR_7, VAR_17);

 return 0;
}
