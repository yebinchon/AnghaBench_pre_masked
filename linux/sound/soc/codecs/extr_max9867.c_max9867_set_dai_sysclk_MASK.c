
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max9867_priv {unsigned int pclk; unsigned int sysclk; int regmap; int * constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct max9867_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_10,
  int VAR_11, unsigned int VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_10->component;
 struct max9867_priv *VAR_15 = FUNC_3(VAR_14);
 int VAR_16 = 0;


 if (VAR_12 >= 10000000 && VAR_12 <= 20000000) {
  VAR_16 |= VAR_2;
  VAR_15->pclk = VAR_12;
 } else if (VAR_12 >= 20000000 && VAR_12 <= 40000000) {
  VAR_16 |= VAR_3;
  VAR_15->pclk = VAR_12 / 2;
 } else if (VAR_12 >= 40000000 && VAR_12 <= 60000000) {
  VAR_16 |= VAR_4;
  VAR_15->pclk = VAR_12 / 4;
 } else {
  FUNC_0(VAR_14->dev,
   "Invalid clock frequency %uHz (required 10-60MHz)\n",
   VAR_12);
  return -VAR_0;
 }
 if (VAR_12 % 48000 == 0)
  VAR_15->constraints = &VAR_9;
 else if (VAR_12 % 44100 == 0)
  VAR_15->constraints = &VAR_8;
 else
  FUNC_1(VAR_14->dev,
    "Unable to set exact rate with %uHz clock frequency\n",
    VAR_12);
 VAR_15->sysclk = VAR_12;
 VAR_16 = VAR_16 << VAR_6;

 VAR_16 &= ~VAR_1;
 FUNC_2(VAR_15->regmap, VAR_7,
   VAR_5, VAR_16);
 return 0;
}
