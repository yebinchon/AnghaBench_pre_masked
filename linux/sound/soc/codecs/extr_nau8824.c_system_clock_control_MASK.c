
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct regmap {int dummy; } ;
struct nau8824 {int dev; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct nau8824*,int ,int ) ;
 scalar_t__ FUNC_3 (struct nau8824*) ;
 int FUNC_4 (struct regmap*,int ,unsigned int*) ;
 int FUNC_5 (struct regmap*,int ,unsigned int,unsigned int) ;
 struct nau8824* FUNC_6 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_10,
  struct snd_kcontrol *VAR_11, int VAR_12)
{
 struct snd_soc_component *VAR_13 = FUNC_7(VAR_10->dapm);
 struct nau8824 *VAR_14 = FUNC_6(VAR_13);
 struct regmap *VAR_15 = VAR_14->regmap;
 unsigned int VAR_16;
 bool VAR_17, VAR_18;

 if (FUNC_0(VAR_12)) {
  FUNC_1(VAR_14->dev, "system clock control : POWER OFF\n");





  if (FUNC_3(VAR_14)) {
   FUNC_2(VAR_14,
    VAR_1, 0);
  } else {
   FUNC_2(VAR_14, VAR_0, 0);
  }
 } else {
  FUNC_1(VAR_14->dev, "system clock control : POWER ON\n");



  FUNC_4(VAR_15, VAR_8, &VAR_16);
  VAR_17 = VAR_16 & VAR_6;

  FUNC_4(VAR_15, VAR_9, &VAR_16);
  VAR_18 = VAR_16 & VAR_5;
  if (!VAR_18) {

   FUNC_4(VAR_15, VAR_7, &VAR_16);
   if (VAR_17)
    VAR_18 = !(VAR_16 & VAR_4);
   else
    VAR_18 = VAR_16 & VAR_4;
  }

  if (VAR_18) {
   if (VAR_17) {
    FUNC_5(VAR_15,
     VAR_9, VAR_5, 0);
    FUNC_5(VAR_15,
     VAR_7,
     VAR_3,
     VAR_4);
   } else {
    FUNC_2(VAR_14,
     VAR_2, 0);
   }
  }
 }

 return 0;
}
