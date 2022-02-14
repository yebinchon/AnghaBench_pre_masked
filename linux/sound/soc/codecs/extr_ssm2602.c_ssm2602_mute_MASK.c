
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int regmap; } ;
struct snd_soc_dai {int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct ssm2602_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct ssm2602_priv *VAR_4 = FUNC_1(VAR_2->component);

 if (VAR_3)
  FUNC_0(VAR_4->regmap, VAR_1,
        VAR_0,
        VAR_0);
 else
  FUNC_0(VAR_4->regmap, VAR_1,
        VAR_0, 0);
 return 0;
}
