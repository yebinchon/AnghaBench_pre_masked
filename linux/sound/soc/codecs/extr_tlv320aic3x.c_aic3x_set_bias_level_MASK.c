
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct aic3x_priv {int power; int master; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct snd_soc_component*,int) ;
 int const FUNC_1 (struct snd_soc_component*) ;
 struct aic3x_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2,
    enum snd_soc_bias_level VAR_3)
{
 struct aic3x_priv *VAR_4 = FUNC_2(VAR_2);

 switch (VAR_3) {
 case 130:
  break;
 case 129:
  if (FUNC_1(VAR_2) == 128 &&
      VAR_4->master) {

   FUNC_3(VAR_2, VAR_0,
         VAR_1, VAR_1);
  }
  break;
 case 128:
  if (!VAR_4->power)
   FUNC_0(VAR_2, 1);
  if (FUNC_1(VAR_2) == 129 &&
      VAR_4->master) {

   FUNC_3(VAR_2, VAR_0,
         VAR_1, 0);
  }
  break;
 case 131:
  if (VAR_4->power)
   FUNC_0(VAR_2, 0);
  break;
 }

 return 0;
}
