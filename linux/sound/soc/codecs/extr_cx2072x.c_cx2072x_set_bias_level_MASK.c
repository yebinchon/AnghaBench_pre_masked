
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cx2072x_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct cx2072x_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_3,
      enum snd_soc_bias_level VAR_4)
{
 struct cx2072x_priv *VAR_5 = FUNC_2(VAR_3);
 const enum snd_soc_bias_level VAR_6 =
  FUNC_1(VAR_3);

 if (VAR_4 == VAR_2 && VAR_6 == VAR_1)
  FUNC_0(VAR_5->regmap, VAR_0, 0);
 else if (VAR_4 == VAR_1 && VAR_6 != VAR_1)
  FUNC_0(VAR_5->regmap, VAR_0, 3);

 return 0;
}
