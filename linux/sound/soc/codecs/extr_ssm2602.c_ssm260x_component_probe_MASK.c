
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int type; int regmap; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct ssm2602_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_8)
{
 struct ssm2602_priv *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9->regmap, VAR_6, 0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_8->dev, "Failed to issue reset: %d\n", VAR_10);
  return VAR_10;
 }


 FUNC_1(VAR_9->regmap, VAR_5,
       VAR_2, VAR_2);
 FUNC_1(VAR_9->regmap, VAR_7,
       VAR_3, VAR_3);

 FUNC_2(VAR_9->regmap, VAR_4, VAR_1 |
   VAR_0);

 switch (VAR_9->type) {
 case 129:
  VAR_10 = FUNC_4(VAR_8);
  break;
 case 128:
  VAR_10 = FUNC_5(VAR_8);
  break;
 }

 return VAR_10;
}
