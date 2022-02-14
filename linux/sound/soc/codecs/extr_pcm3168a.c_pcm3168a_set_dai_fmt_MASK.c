
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct pcm3168a_priv {int regmap; TYPE_1__* io_params; } ;
struct TYPE_2__ {int master_mode; int fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 unsigned int VAR_13 ;

 unsigned int VAR_14 ;

 unsigned int VAR_15 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int,int) ;
 struct pcm3168a_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_16, unsigned int VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_16->component;
 struct pcm3168a_priv *VAR_19 = FUNC_2(VAR_18);
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 bool VAR_24;

 switch (VAR_17 & VAR_13) {
 case 130:
  VAR_20 = VAR_11;
  break;
 case 131:
  VAR_20 = VAR_10;
  break;
 case 128:
  VAR_20 = VAR_12;
  break;
 case 133:
  VAR_20 = VAR_8;
  break;
 case 132:
  VAR_20 = VAR_9;
  break;
 default:
  FUNC_0(VAR_18->dev, "unsupported dai format\n");
  return -VAR_0;
 }

 switch (VAR_17 & VAR_15) {
 case 134:
  VAR_24 = 0;
  break;
 case 135:
  VAR_24 = 1;
  break;
 default:
  FUNC_0(VAR_18->dev, "unsupported master/slave mode\n");
  return -VAR_0;
 }

 switch (VAR_17 & VAR_14) {
 case 129:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_16->id == VAR_7) {
  VAR_21 = VAR_6;
  VAR_22 = VAR_4;
  VAR_23 = VAR_5;
 } else {
  VAR_21 = VAR_3;
  VAR_22 = VAR_1;
  VAR_23 = VAR_2;
 }

 VAR_19->io_params[VAR_16->id].master_mode = VAR_24;
 VAR_19->io_params[VAR_16->id].fmt = VAR_20;

 FUNC_1(VAR_19->regmap, VAR_21, VAR_22, VAR_20 << VAR_23);

 return 0;
}
