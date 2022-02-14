
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int jd_src; } ;
struct rt5668_priv {struct snd_soc_jack* hs_jack; int regmap; int jack_detect_work; TYPE_1__ pdata; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct rt5668_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_27,
 struct snd_soc_jack *VAR_28, void *VAR_29)
{
 struct rt5668_priv *VAR_30 = FUNC_4(VAR_27);

 switch (VAR_30->pdata.jd_src) {
 case 129:
  FUNC_5(VAR_27, VAR_1,
   VAR_4, VAR_5);
  FUNC_6(VAR_27, VAR_0, 0xd002);
  FUNC_5(VAR_27, VAR_2,
   VAR_3, VAR_3);
  FUNC_5(VAR_27, VAR_23,
   VAR_25, VAR_24);
  FUNC_3(VAR_30->regmap, VAR_8,
   VAR_7, VAR_6);
  FUNC_3(VAR_30->regmap, VAR_22,
    VAR_16 | VAR_17 |
    VAR_15, VAR_16 |
    VAR_17 | VAR_15);
  FUNC_3(VAR_30->regmap, VAR_19,
   VAR_20 | VAR_21,
   VAR_20 | VAR_21);
  FUNC_3(VAR_30->regmap, VAR_9,
   VAR_12 | VAR_13,
   VAR_11 | VAR_14);
  FUNC_1(VAR_26,
      &VAR_30->jack_detect_work, FUNC_2(250));
  break;

 case 128:
  FUNC_3(VAR_30->regmap, VAR_9,
   VAR_12, VAR_10);
  FUNC_3(VAR_30->regmap, VAR_22,
    VAR_17 | VAR_18, 0);
  break;

 default:
  FUNC_0(VAR_27->dev, "Wrong JD source\n");
  break;
 }

 VAR_30->hs_jack = VAR_28;

 return 0;
}
