
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int jd_src; } ;
struct rt5665_priv {struct snd_soc_jack* hs_jack; int regmap; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct rt5665_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_7,
 struct snd_soc_jack *VAR_8, void *VAR_9)
{
 struct rt5665_priv *VAR_10 = FUNC_2(VAR_7);

 switch (VAR_10->pdata.jd_src) {
 case 129:
  FUNC_1(VAR_10->regmap, VAR_2,
   VAR_1, VAR_0);
  FUNC_1(VAR_10->regmap, VAR_6,
    0xc000, 0xc000);
  FUNC_1(VAR_10->regmap, VAR_4,
   VAR_5, VAR_5);
  FUNC_1(VAR_10->regmap, VAR_3, 0x8, 0x8);
  break;

 case 128:
  break;

 default:
  FUNC_0(VAR_7->dev, "Wrong JD source\n");
  break;
 }

 VAR_10->hs_jack = VAR_8;

 return 0;
}
