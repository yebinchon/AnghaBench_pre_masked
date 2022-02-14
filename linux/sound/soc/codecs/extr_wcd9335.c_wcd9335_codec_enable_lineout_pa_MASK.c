
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ reg; int shift; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_13,
      struct snd_kcontrol *VAR_14,
      int VAR_15)
{
 struct snd_soc_component *VAR_16 = FUNC_2(VAR_13->dapm);
 int VAR_17 = 0, VAR_18 = 0;

 if (VAR_13->reg == VAR_1) {
  if (VAR_13->shift == 7) {
   VAR_17 = VAR_3;
   VAR_18 = VAR_4;
  } else if (VAR_13->shift == 6) {
   VAR_17 = VAR_5;
   VAR_18 = VAR_6;
  }
 } else if (VAR_13->reg == VAR_2) {
  if (VAR_13->shift == 7) {
   VAR_17 = VAR_7;
   VAR_18 = VAR_8;
  } else if (VAR_13->shift == 6) {
   VAR_17 = VAR_9;
   VAR_18 = VAR_10;
  }
 } else {
  FUNC_0(VAR_16->dev, "Error enabling lineout PA\n");
  return -VAR_0;
 }

 switch (VAR_15) {
 case 128:



  FUNC_3(5000, 5500);
  FUNC_1(VAR_16, VAR_17,
     VAR_12,
     VAR_11);


  if ((FUNC_0(VAR_16, VAR_18)) &
     VAR_12)
   FUNC_1(VAR_16, VAR_18,
     VAR_12,
     VAR_11);
  break;
 case 129:



  FUNC_3(5000, 5500);
  break;
 };

 return 0;
}
