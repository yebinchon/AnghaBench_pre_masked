
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


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
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 TYPE_1__* VAR_16 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_17,
        struct snd_kcontrol *VAR_18, int VAR_19)
{
 struct snd_soc_component *VAR_20 = FUNC_4(VAR_17->dapm);
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;

 switch (VAR_19) {
 case 128:
  VAR_24 = FUNC_1(VAR_20, VAR_10);
  if ((VAR_24 & VAR_2) &&
      (VAR_24 & VAR_4))
   VAR_23 = VAR_3;
  else if (!(VAR_24 & VAR_2) &&
    !(VAR_24 & VAR_4))
   VAR_23 = VAR_1;
  else
   VAR_23 = VAR_1 | VAR_3;


  VAR_24 = FUNC_1(VAR_20, VAR_11);
  if ((VAR_24 & VAR_6) &&
      (VAR_24 & VAR_8))
   VAR_22 = VAR_7;
  else if (!(VAR_24 & VAR_6) &&
    !(VAR_24 & VAR_8))
   VAR_22 = VAR_5;
  else
   VAR_22 = VAR_5 | VAR_7;

  FUNC_2(VAR_20, VAR_13,
        VAR_1 |
        VAR_3, VAR_23);
  FUNC_2(VAR_20, VAR_14,
        VAR_5 |
        VAR_7, VAR_22);
  FUNC_2(VAR_20, VAR_12,
        VAR_9 |
        VAR_15,
        VAR_9 |
        VAR_15);
  FUNC_2(VAR_20, VAR_13,
        VAR_1 |
        VAR_3,
        VAR_1 |
        VAR_3);
  FUNC_2(VAR_20, VAR_14,
        VAR_5 |
        VAR_7,
        VAR_5 |
        VAR_7);
  break;

 case 130:
  for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_16); VAR_21++)
   FUNC_3(VAR_20, VAR_16[VAR_21].reg,
          FUNC_1(VAR_20,
         VAR_16[VAR_21].reg));
  break;

 case 129:
 case 131:
  FUNC_2(VAR_20, VAR_14,
        VAR_5 |
        VAR_7, 0);
  FUNC_2(VAR_20, VAR_13,
        VAR_1 |
        VAR_3, 0);

  VAR_24 = FUNC_1(VAR_20, VAR_12);
  if (VAR_24 & VAR_0)
   VAR_24 = VAR_15;
  else
   VAR_24 = 0;
  FUNC_2(VAR_20, VAR_12,
        VAR_15 |
        VAR_9, VAR_24);
  break;
 }

 return 0;
}
