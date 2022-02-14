
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct da7218_priv {int master; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct da7218_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_19,
       struct snd_kcontrol *VAR_20, int VAR_21)
{
 struct snd_soc_component *VAR_22 = FUNC_6(VAR_19->dapm);
 struct da7218_priv *VAR_23 = FUNC_2(VAR_22);
 u8 VAR_24, VAR_25, VAR_26;
 int VAR_27;
 bool VAR_28;

 switch (VAR_21) {
 case 128:
  if (VAR_23->master)

   FUNC_4(VAR_22, VAR_1,
         VAR_0,
         VAR_0);


  FUNC_5(VAR_22, VAR_8,
         VAR_10);
  FUNC_5(VAR_22, VAR_8,
         VAR_10 |
         VAR_9);


  VAR_27 = 0;
  VAR_28 = 0;
  do {
   VAR_26 = FUNC_3(VAR_22, VAR_8);
   if (!(VAR_26 & VAR_10)) {
    VAR_28 = 1;
   } else {
    ++VAR_27;
    FUNC_7(VAR_14,
          VAR_13);
   }
  } while ((VAR_27 < VAR_15) && (!VAR_28));

  if (!VAR_28)
   FUNC_0(VAR_22->dev,
     "Reference oscillator failed calibration\n");


  FUNC_5(VAR_22, VAR_2,
         VAR_4);


  VAR_24 = FUNC_3(VAR_22, VAR_5);
  if ((VAR_24 & VAR_6) != VAR_7)
   return 0;


  VAR_27 = 0;
  VAR_28 = 0;
  do {
   VAR_25 = FUNC_3(VAR_22, VAR_12);
   if (VAR_25 & VAR_11) {
    VAR_28 = 1;
   } else {
    ++VAR_27;
    FUNC_1(VAR_16);
   }
  } while ((VAR_27 < VAR_17) && (!VAR_28));

  if (!VAR_28)
   FUNC_0(VAR_22->dev, "SRM failed to lock\n");

  return 0;
 case 129:

  FUNC_5(VAR_22, VAR_2, VAR_3);

  if (VAR_23->master)

   FUNC_4(VAR_22, VAR_1,
         VAR_0, 0);

  return 0;
 default:
  return -VAR_18;
 }
}
