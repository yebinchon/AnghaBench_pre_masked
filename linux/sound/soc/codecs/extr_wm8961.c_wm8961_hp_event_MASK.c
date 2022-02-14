
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_21,
      struct snd_kcontrol *VAR_22, int VAR_23)
{
 struct snd_soc_component *VAR_24 = FUNC_6(VAR_21->dapm);
 u16 VAR_25 = FUNC_4(VAR_24, VAR_2);
 u16 VAR_26 = FUNC_4(VAR_24, VAR_3);
 u16 VAR_27 = FUNC_4(VAR_24, VAR_19);
 u16 VAR_28 = FUNC_4(VAR_24, VAR_9);
 int VAR_29 = 500;

 if (VAR_23 & VAR_0) {

  VAR_25 &= ~(VAR_17 | VAR_13);
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_26 |= VAR_4;
  FUNC_5(VAR_24, VAR_3, VAR_26);
  FUNC_2(5);


  VAR_27 |= VAR_18 | VAR_20;
  FUNC_5(VAR_24, VAR_19, VAR_27);


  VAR_25 |= VAR_14 | VAR_10;
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_25 |= VAR_15 | VAR_11;
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_28 |=
   VAR_6 | VAR_8 |
   VAR_5 | VAR_7;
  FUNC_0(VAR_24->dev, "Enabling DC servo\n");

  FUNC_5(VAR_24, VAR_9, VAR_28);
  do {
   FUNC_3(1);
   VAR_28 = FUNC_4(VAR_24, VAR_9);
  } while (--VAR_29 &&
    VAR_28 & (VAR_8 |
    VAR_7));
  if (VAR_28 & (VAR_8 |
          VAR_7))
   FUNC_1(VAR_24->dev, "DC servo timed out\n");
  else
   FUNC_0(VAR_24->dev, "DC servo startup complete\n");


  VAR_25 |= VAR_16 | VAR_12;
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_25 |= VAR_17 | VAR_13;
  FUNC_5(VAR_24, VAR_2, VAR_25);
 }

 if (VAR_23 & VAR_1) {

  VAR_25 &= ~(VAR_17 | VAR_13);
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_25 &= ~(VAR_16 | VAR_12);
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_28 &= ~(VAR_6 |
        VAR_5);
  FUNC_5(VAR_24, VAR_9, VAR_28);


  VAR_25 &= ~(VAR_15 | VAR_14 |
       VAR_11 | VAR_10);
  FUNC_5(VAR_24, VAR_2, VAR_25);


  VAR_27 &= ~(VAR_18 | VAR_20);
  FUNC_5(VAR_24, VAR_19, VAR_27);


  FUNC_0(VAR_24->dev, "Disabling charge pump\n");
  FUNC_5(VAR_24, VAR_3,
        VAR_26 & ~VAR_4);
 }

 return 0;
}
