
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct da9055_priv {TYPE_1__* pdata; } ;
struct TYPE_2__ {int micbias; scalar_t__ micbias_source; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct da9055_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_24)
{
 struct da9055_priv *VAR_25 = FUNC_0(VAR_24);


 FUNC_1(VAR_24, VAR_2,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_3,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_13,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_15,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_0,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_1,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_4,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_5,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_7,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_8,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_9,
       VAR_6, VAR_6);
 FUNC_1(VAR_24, VAR_13,
       VAR_14, VAR_14);
 FUNC_1(VAR_24, VAR_15,
       VAR_16, VAR_16);

 FUNC_1(VAR_24, VAR_18,
       VAR_19, VAR_19);
 FUNC_1(VAR_24, VAR_20,
       VAR_21, VAR_21);


 FUNC_2(VAR_24, VAR_22, VAR_23);


 if (VAR_25->pdata) {

  if (VAR_25->pdata->micbias_source) {
   FUNC_1(VAR_24, VAR_17,
         VAR_10,
         VAR_10);
  } else {
   FUNC_1(VAR_24, VAR_17,
         VAR_10, 0);
  }

  switch (VAR_25->pdata->micbias) {
  case 128:
  case 129:
  case 130:
  case 131:
   FUNC_1(VAR_24, VAR_12,
         VAR_11,
         (VAR_25->pdata->micbias) << 4);
   break;
  }
 }
 return 0;
}
