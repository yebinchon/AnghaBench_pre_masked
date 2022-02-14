
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max9867_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct max9867_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2,
      enum snd_soc_bias_level VAR_3)
{
 int VAR_4;
 struct max9867_priv *VAR_5 = FUNC_4(VAR_2);

 switch (VAR_3) {
 case 128:
  if (FUNC_3(VAR_2) == 129) {
   VAR_4 = FUNC_1(VAR_5->regmap);
   if (VAR_4)
    return VAR_4;

   VAR_4 = FUNC_2(VAR_5->regmap, VAR_0,
       VAR_1, VAR_1);
   if (VAR_4)
    return VAR_4;
  }
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_5->regmap, VAR_0,
      VAR_1, 0);
  if (VAR_4)
   return VAR_4;

  FUNC_0(VAR_5->regmap);
  break;
 default:
  break;
 }

 return 0;
}
