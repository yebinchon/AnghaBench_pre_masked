
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct TYPE_2__ {int* gpio_defaults; } ;
struct arizona {int type; TYPE_1__ pdata; } ;


 int VAR_0 ;


 int FUNC_0 (int*) ;


 int FUNC_1 (struct snd_soc_component*,char*) ;
 int FUNC_2 (struct snd_soc_component*,char*) ;
 struct arizona_priv* FUNC_3 (struct snd_soc_component*) ;

int FUNC_4(struct snd_soc_component *VAR_1)
{
 struct arizona_priv *VAR_2 = FUNC_3(VAR_1);
 struct arizona *VAR_3 = VAR_2->arizona;
 int VAR_4;

 switch (VAR_3->type) {
 case 129:
 case 128:
  FUNC_1(VAR_1,
           "DRC2 Signal Activity");
  break;
 default:
  break;
 }

 FUNC_1(VAR_1, "DRC1 Signal Activity");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->pdata.gpio_defaults); VAR_4++) {
  switch (VAR_3->pdata.gpio_defaults[VAR_4] & VAR_0) {
  case 131:
   FUNC_2(VAR_1,
           "DRC1 Signal Activity");
   break;
  case 130:
   FUNC_2(VAR_1,
           "DRC2 Signal Activity");
   break;
  default:
   break;
  }
 }

 return 0;
}
