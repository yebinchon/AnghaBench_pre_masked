
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm8994_priv {int* channels; struct wm8994* wm8994; } ;
struct wm8994 {int type; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (TYPE_1__*) ;






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
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;
 TYPE_1__* VAR_20 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_21,
        struct snd_kcontrol *VAR_22, int VAR_23)
{
 struct snd_soc_component *VAR_24 = FUNC_5(VAR_21->dapm);
 struct wm8994_priv *VAR_25 = FUNC_1(VAR_24);
 struct wm8994 *VAR_26 = VAR_25->wm8994;
 int VAR_27 = VAR_6 | VAR_7;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;

 switch (VAR_26->type) {
 case 128:
 case 129:
  VAR_27 |= VAR_8 | VAR_9;
  break;
 default:
  break;
 }

 switch (VAR_23) {
 case 130:

  if (VAR_25->channels[0] <= 2)
   VAR_27 &= ~(VAR_8 | VAR_9);

  VAR_31 = FUNC_2(VAR_24, VAR_13);
  if ((VAR_31 & VAR_4) &&
      (VAR_31 & VAR_5))
   VAR_30 = VAR_1 | VAR_3;
  else if (!(VAR_31 & VAR_4) &&
    !(VAR_31 & VAR_5))
   VAR_30 = VAR_0 | VAR_2;
  else
   VAR_30 = VAR_1 | VAR_3 |
    VAR_0 | VAR_2;

  VAR_31 = FUNC_2(VAR_24, VAR_14);
  if ((VAR_31 & VAR_10) &&
      (VAR_31 & VAR_11))
   VAR_29 = VAR_7 | VAR_9;
  else if (!(VAR_31 & VAR_10) &&
    !(VAR_31 & VAR_11))
   VAR_29 = VAR_6 | VAR_8;
  else
   VAR_29 = VAR_7 | VAR_9 |
    VAR_6 | VAR_8;

  FUNC_3(VAR_24, VAR_17,
        VAR_27, VAR_30);
  FUNC_3(VAR_24, VAR_18,
        VAR_27, VAR_29);
  FUNC_3(VAR_24, VAR_16,
        VAR_12 |
        VAR_19,
        VAR_12 |
        VAR_19);
  FUNC_3(VAR_24, VAR_17, VAR_27,
        VAR_1 |
        VAR_0 |
        VAR_3 |
        VAR_2);
  FUNC_3(VAR_24, VAR_18, VAR_27,
        VAR_7 |
        VAR_6 |
        VAR_9 |
        VAR_8);
  break;

 case 132:
  for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_20); VAR_28++)
   FUNC_4(VAR_24, VAR_20[VAR_28].reg,
          FUNC_2(VAR_24,
         VAR_20[VAR_28].reg));
  break;

 case 131:
 case 133:
  FUNC_3(VAR_24, VAR_18,
        VAR_27, 0);
  FUNC_3(VAR_24, VAR_17,
        VAR_27, 0);

  VAR_31 = FUNC_2(VAR_24, VAR_16);
  if (VAR_31 & VAR_15)
   VAR_31 = VAR_19;
  else
   VAR_31 = 0;
  FUNC_3(VAR_24, VAR_16,
        VAR_19 |
        VAR_12, VAR_31);
  break;
 }

 return 0;
}
