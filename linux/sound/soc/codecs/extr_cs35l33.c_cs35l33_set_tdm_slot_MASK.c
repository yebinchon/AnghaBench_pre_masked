
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs35l33_private {int regmap; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,unsigned int,int,int) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_soc_component*) ;
 struct cs35l33_private* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int *,int) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_10, unsigned int VAR_11,
    unsigned int VAR_12, int VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_10->component;
 struct snd_soc_dapm_context *VAR_16 = FUNC_4(VAR_15);
 struct cs35l33_private *VAR_17 = FUNC_5(VAR_15);
 unsigned int VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;

 if (VAR_14 != 8)
  return -VAR_8;


 VAR_21 = FUNC_2(VAR_12) - 1;
 if (VAR_21 >= 0) {
  FUNC_3(VAR_17->regmap, VAR_0,
   VAR_6, VAR_21);
  FUNC_1(VAR_15->dev, "Audio starts from slots %d", VAR_21);
 }





 VAR_21 = FUNC_2(VAR_11) - 1;
 VAR_22 = 0;

 for (VAR_20 = 0; VAR_20 < 2 ; VAR_20++) {

  FUNC_3(VAR_17->regmap, VAR_5 + VAR_20,
   VAR_7 | VAR_6, VAR_7
   | VAR_6);
 }


 FUNC_7(VAR_16, VAR_9,
  FUNC_0(VAR_9));

 while (VAR_21 >= 0) {

  if (VAR_22 == 0) {
   FUNC_3(VAR_17->regmap, VAR_4,
    VAR_7 | VAR_6, VAR_21);
   FUNC_1(VAR_15->dev, "VMON enabled in slots %d-%d",
    VAR_21, VAR_21 + 1);
  }


  if (VAR_22 == 3) {
   FUNC_3(VAR_17->regmap, VAR_2,
    VAR_7 | VAR_6, VAR_21);
   FUNC_1(VAR_15->dev, "IMON enabled in slots %d-%d",
    VAR_21, VAR_21 + 1);
  }


  if (VAR_22 == 4) {
   FUNC_3(VAR_17->regmap, VAR_5,
    VAR_7 | VAR_6, VAR_21);
   FUNC_6(VAR_16,
    &VAR_9[0], 2);
   FUNC_1(VAR_15->dev, "VPMON enabled in slots %d", VAR_21);
  }


  if (VAR_22 == 5) {
   FUNC_3(VAR_17->regmap, VAR_3,
    VAR_7 | VAR_6, VAR_21);
   FUNC_6(VAR_16,
    &VAR_9[2], 2);
   FUNC_1(VAR_15->dev,
    "VBSTMON enabled in slots %d", VAR_21);
  }


  VAR_18 = VAR_1 - (VAR_21/8);
  VAR_19 = VAR_21 - ((VAR_21 / 8) * (8));
  FUNC_3(VAR_17->regmap, VAR_18,
   1 << VAR_19, 1 << VAR_19);

  VAR_11 &= ~(1 << VAR_21);
  VAR_21 = FUNC_2(VAR_11) - 1;
  VAR_22++;
 }

 return 0;
}
