
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct da7219_priv {int wakeup_source; int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int const FUNC_3 (struct snd_soc_component*) ;
 struct da7219_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 struct da7219_priv *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 130:
  break;
 case 129:

  if (FUNC_3(VAR_2) == 128) {
   if (VAR_4->mclk) {
    VAR_5 = FUNC_1(VAR_4->mclk);
    if (VAR_5) {
     FUNC_2(VAR_2->dev,
      "Failed to enable mclk\n");
     return VAR_5;
    }
   }
  }

  break;
 case 128:
  if (FUNC_3(VAR_2) == 131)

   FUNC_5(VAR_2, VAR_1,
         VAR_0,
         VAR_0);

  if (FUNC_3(VAR_2) == 129) {

   if (VAR_4->mclk)
    FUNC_0(VAR_4->mclk);
  }
  break;
 case 131:

  if (!VAR_4->wakeup_source)
   FUNC_5(VAR_2, VAR_1,
         VAR_0, 0);

  break;
 }

 return 0;
}
