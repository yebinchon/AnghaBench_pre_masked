
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int* dcs_state; } ;
struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int,char*,int) ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 struct wm8904_priv* FUNC_4 (struct snd_soc_component*) ;
 void* FUNC_5 (struct snd_soc_component*,int) ;
 int FUNC_6 (struct snd_soc_component*,int,int,int) ;
 int FUNC_7 (struct snd_soc_component*,int,int) ;
 struct snd_soc_component* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dapm_widget *VAR_26,
    struct snd_kcontrol *VAR_27, int VAR_28)
{
 struct snd_soc_component *VAR_29 = FUNC_8(VAR_26->dapm);
 struct wm8904_priv *VAR_30 = FUNC_4(VAR_29);
 int VAR_31, VAR_32;
 int VAR_33;
 int VAR_34, VAR_35;
 int VAR_36, VAR_37;
 int VAR_38;
 int VAR_39;





 VAR_31 = VAR_26->shift;

 switch (VAR_31) {
 case 129:
  VAR_39 = VAR_24;
  VAR_33 = VAR_2 | VAR_3;
  VAR_37 = VAR_11;
  VAR_36 = VAR_12;
  VAR_34 = 0;
  VAR_35 = 1;
  break;
 case 128:
  VAR_39 = VAR_25;
  VAR_33 = VAR_4 | VAR_5;
  VAR_37 = VAR_9;
  VAR_36 = VAR_10;
  VAR_34 = 2;
  VAR_35 = 3;
  break;
 default:
  FUNC_0(1, "Invalid reg %d\n", VAR_31);
  return -VAR_0;
 }

 switch (VAR_28) {
 case 130:

  FUNC_6(VAR_29, VAR_39,
        VAR_17 | VAR_22,
        VAR_17 | VAR_22);


  FUNC_6(VAR_29, VAR_31,
        VAR_14 | VAR_19,
        VAR_14 | VAR_19);



  FUNC_6(VAR_29, VAR_31,
        VAR_15 | VAR_20,
        VAR_15 | VAR_20);


  FUNC_6(VAR_29, VAR_7,
        VAR_33, VAR_33);




  if (VAR_30->dcs_state[VAR_34] || VAR_30->dcs_state[VAR_35]) {
   FUNC_1(VAR_29->dev, "Restoring DC servo state\n");

   FUNC_7(VAR_29, VAR_36,
          VAR_30->dcs_state[VAR_34]);
   FUNC_7(VAR_29, VAR_37,
          VAR_30->dcs_state[VAR_35]);

   FUNC_7(VAR_29, VAR_8, VAR_33);

   VAR_38 = 20;
  } else {
   FUNC_1(VAR_29->dev, "Calibrating DC servo\n");

   FUNC_7(VAR_29, VAR_8,
    VAR_33 << VAR_6);

   VAR_38 = 500;
  }


  VAR_33 <<= VAR_1;
  do {
   VAR_32 = FUNC_5(VAR_29, VAR_13);
   if ((VAR_32 & VAR_33) == VAR_33)
    break;

   FUNC_3(1);
  } while (--VAR_38);

  if ((VAR_32 & VAR_33) != VAR_33)
   FUNC_2(VAR_29->dev, "DC servo timed out\n");
  else
   FUNC_1(VAR_29->dev, "DC servo ready\n");


  FUNC_6(VAR_29, VAR_31,
        VAR_16 | VAR_21,
        VAR_16 | VAR_21);
  break;

 case 132:

  FUNC_6(VAR_29, VAR_31,
        VAR_18 |
        VAR_23,
        VAR_18 |
        VAR_23);

  break;

 case 131:

  FUNC_6(VAR_29, VAR_31,
        VAR_18 |
        VAR_23, 0);
  break;

 case 133:


  VAR_30->dcs_state[VAR_34] = FUNC_5(VAR_29, VAR_36);
  VAR_30->dcs_state[VAR_35] = FUNC_5(VAR_29, VAR_37);

  FUNC_6(VAR_29, VAR_7,
        VAR_33, 0);


  FUNC_6(VAR_29, VAR_31,
        VAR_14 | VAR_19 |
        VAR_15 | VAR_20 |
        VAR_16 | VAR_21,
        0);


  FUNC_6(VAR_29, VAR_39,
        VAR_17 | VAR_22,
        0);
  break;
 }

 return 0;
}
