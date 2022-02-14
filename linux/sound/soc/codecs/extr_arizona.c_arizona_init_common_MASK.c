
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_pdata {int* spk_mute; int* spk_fmt; unsigned int* dmic_ref; int* inmode; scalar_t__* out_mono; } ;
struct arizona {int type; int regmap; int notifier; struct arizona_pdata pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (int ,scalar_t__,unsigned int,unsigned int) ;

int FUNC_2(struct arizona *VAR_25)
{
 struct arizona_pdata *VAR_26 = &VAR_25->pdata;
 unsigned int VAR_27, VAR_28;
 int VAR_29;

 FUNC_0(&VAR_25->notifier);

 for (VAR_29 = 0; VAR_29 < VAR_16; ++VAR_29) {

  if (VAR_26->out_mono[VAR_29])
   VAR_27 = VAR_18;
  else
   VAR_27 = 0;

  FUNC_1(VAR_25->regmap,
       VAR_19 + (VAR_29 * 8),
       VAR_18, VAR_27);
 }

 for (VAR_29 = 0; VAR_29 < VAR_17; VAR_29++) {
  if (VAR_26->spk_mute[VAR_29])
   FUNC_1(VAR_25->regmap,
        VAR_20 + (VAR_29 * 2),
        VAR_23 |
        VAR_24,
        VAR_26->spk_mute[VAR_29]);

  if (VAR_26->spk_fmt[VAR_29])
   FUNC_1(VAR_25->regmap,
        VAR_21 + (VAR_29 * 2),
        VAR_22,
        VAR_26->spk_fmt[VAR_29]);
 }

 for (VAR_29 = 0; VAR_29 < VAR_15; VAR_29++) {

  VAR_27 = VAR_26->dmic_ref[VAR_29] << VAR_8;
  if (VAR_26->inmode[VAR_29] & VAR_13)
   VAR_27 |= 1 << VAR_10;

  switch (VAR_25->type) {
  case 128:
  case 129:
   FUNC_1(VAR_25->regmap,
    VAR_0 + (VAR_29 * 8),
    VAR_3,
    (VAR_26->inmode[VAR_29] & VAR_14)
     << VAR_4);

   FUNC_1(VAR_25->regmap,
    VAR_1 + (VAR_29 * 8),
    VAR_5,
    (VAR_26->inmode[VAR_29] & VAR_14)
     << VAR_6);

   VAR_28 = VAR_7 |
          VAR_9;
   break;
  default:
   if (VAR_26->inmode[VAR_29] & VAR_14)
    VAR_27 |= 1 << VAR_12;

   VAR_28 = VAR_7 |
          VAR_9 |
          VAR_11;
   break;
  }

  FUNC_1(VAR_25->regmap,
       VAR_2 + (VAR_29 * 8),
       VAR_28, VAR_27);
 }

 return 0;
}
