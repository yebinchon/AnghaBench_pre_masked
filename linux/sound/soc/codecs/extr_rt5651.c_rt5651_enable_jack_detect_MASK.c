
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct rt5651_priv {int jd_src; int ovcd_sf; int ovcd_th; int jack_detect_work; int irq; struct snd_soc_jack* hp_jack; int jd_active_high; struct gpio_desc* gpiod_hp_det; } ;
struct gpio_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;
 scalar_t__ FUNC_5 (struct rt5651_priv*) ;
 struct rt5651_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_8 (struct snd_soc_component*,scalar_t__,int) ;
 int VAR_30 ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_31,
          struct snd_soc_jack *VAR_32,
          struct gpio_desc *VAR_33)
{
 struct rt5651_priv *VAR_34 = FUNC_6(VAR_31);
 bool VAR_35 = 1;


 switch (VAR_34->jd_src) {
 case 128:
  VAR_34->gpiod_hp_det = VAR_33;
  if (!VAR_34->gpiod_hp_det)
   return;
  VAR_35 = 0;
  break;
 case 131:
  FUNC_7(VAR_31, VAR_12,
   VAR_16, VAR_13);

  if (VAR_34->jd_active_high)
   FUNC_7(VAR_31,
    VAR_4,
    VAR_7 | VAR_6,
    VAR_7 | VAR_6);
  else
   FUNC_7(VAR_31,
    VAR_4,
    VAR_7 | VAR_6,
    VAR_7);
  break;
 case 130:
  FUNC_7(VAR_31, VAR_12,
   VAR_16, VAR_14);

  if (VAR_34->jd_active_high)
   FUNC_7(VAR_31,
    VAR_4,
    VAR_9 | VAR_8,
    VAR_9 | VAR_8);
  else
   FUNC_7(VAR_31,
    VAR_4,
    VAR_9 | VAR_8,
    VAR_9);
  break;
 case 129:
  FUNC_7(VAR_31, VAR_12,
   VAR_16, VAR_15);

  if (VAR_34->jd_active_high)
   FUNC_7(VAR_31,
    VAR_4,
    VAR_11 | VAR_10,
    VAR_11 | VAR_10);
  else
   FUNC_7(VAR_31,
    VAR_4,
    VAR_11 | VAR_10,
    VAR_11);
  break;
 default:
  FUNC_0(VAR_31->dev, "Currently only JD1_1 / JD1_2 / JD2 are supported\n");
  return;
 }

 if (VAR_35) {

  FUNC_7(VAR_31, VAR_3,
   VAR_2, VAR_1);


  FUNC_7(VAR_31, VAR_24,
   VAR_27, VAR_27);
 }


 FUNC_8(VAR_31, VAR_23 + VAR_0,
    0xa800 | VAR_34->ovcd_sf);

 FUNC_7(VAR_31, VAR_22,
          VAR_20 |
          VAR_21 |
          VAR_25 |
          VAR_28,
          VAR_19 |
          VAR_34->ovcd_th |
          VAR_29 |
          VAR_26);
 FUNC_7(VAR_31, VAR_5,
  VAR_18, VAR_17);

 VAR_34->hp_jack = VAR_32;
 if (FUNC_5(VAR_34)) {
  FUNC_3(VAR_31);
  FUNC_4(VAR_31);
 }

 FUNC_1(VAR_34->irq);

 FUNC_2(VAR_30, &VAR_34->jack_detect_work);
}
