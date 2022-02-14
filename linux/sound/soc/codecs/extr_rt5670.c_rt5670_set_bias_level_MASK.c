
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int jd_mode; } ;
struct rt5670_priv {TYPE_1__ pdata; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


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



 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct rt5670_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_14,
   enum snd_soc_bias_level VAR_15)
{
 struct rt5670_priv *VAR_16 = FUNC_2(VAR_14);

 switch (VAR_15) {
 case 129:
  if (128 == FUNC_1(VAR_14)) {
   FUNC_3(VAR_14, VAR_7,
    VAR_12 | VAR_11 |
    VAR_8 | VAR_13,
    VAR_12 | VAR_11 |
    VAR_8 | VAR_13);
   FUNC_0(10);
   FUNC_3(VAR_14, VAR_7,
    VAR_9 | VAR_10,
    VAR_9 | VAR_10);
   FUNC_3(VAR_14, VAR_0,
    VAR_4 | VAR_6,
    VAR_3 | VAR_5);
   FUNC_3(VAR_14, VAR_1, 0x1, 0x1);
   FUNC_3(VAR_14, VAR_7,
    VAR_2, 0x5);
  }
  break;
 case 128:
  FUNC_3(VAR_14, VAR_7,
    VAR_12 | VAR_13 |
    VAR_9 | VAR_10, 0);
  FUNC_3(VAR_14, VAR_7,
    VAR_2, 0x3);
  break;
 case 130:
  if (VAR_16->pdata.jd_mode)
   FUNC_3(VAR_14, VAR_7,
    VAR_12 | VAR_11 |
    VAR_8 | VAR_13 |
    VAR_9 | VAR_10,
    VAR_11 | VAR_8);
  else
   FUNC_3(VAR_14, VAR_7,
    VAR_12 | VAR_11 |
    VAR_8 | VAR_13 |
    VAR_9 | VAR_10, 0);

  FUNC_3(VAR_14, VAR_1, 0x1, 0x0);
  break;

 default:
  break;
 }

 return 0;
}
