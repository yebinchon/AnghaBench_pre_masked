
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef unsigned int u16 ;
struct snd_soc_component {int dev; } ;
struct cs43130_private {unsigned int* hpload_dc; unsigned int** hpload_ac; int * ac_freq; int regmap; struct snd_soc_component* component; } ;



 unsigned int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_6, int VAR_7,
     struct cs43130_private *VAR_8)
{
 bool VAR_9 = 1;
 unsigned int VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 struct snd_soc_component *VAR_13 = VAR_8->component;

 switch (VAR_6) {
 case 128:
 case 129:
  break;
 default:
  return 0;
 }

 FUNC_1(VAR_8->regmap, VAR_3, &VAR_10);
 if (VAR_10 & VAR_0)
  VAR_9 = 0;

 if (VAR_6 == 128)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_1;

 FUNC_1(VAR_8->regmap, VAR_11, &VAR_10);
 VAR_12 = VAR_10 >> 3;
 FUNC_1(VAR_8->regmap, VAR_11 + 1, &VAR_10);
 VAR_12 |= VAR_10 << 5;

 if (VAR_6 == 128) {
  if (VAR_9)
   VAR_8->hpload_dc[VAR_4] = VAR_12;
  else
   VAR_8->hpload_dc[VAR_5] = VAR_12;

  FUNC_0(VAR_13->dev, "HP DC impedance (Ch %u): %u\n", !VAR_9,
   VAR_12);
 } else {
  if (VAR_9)
   VAR_8->hpload_ac[VAR_7][VAR_4] = VAR_12;
  else
   VAR_8->hpload_ac[VAR_7][VAR_5] = VAR_12;

  FUNC_0(VAR_13->dev, "HP AC (%u Hz) impedance (Ch %u): %u\n",
   VAR_8->ac_freq[VAR_7], !VAR_9, VAR_12);
 }

 return 0;
}
