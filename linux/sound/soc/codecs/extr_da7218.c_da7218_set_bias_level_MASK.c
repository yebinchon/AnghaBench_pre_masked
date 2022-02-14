
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct da7218_priv {int jack; int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct da7218_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct da7218_priv *VAR_6 = FUNC_4(VAR_4);
 int VAR_7;

 switch (VAR_5) {
 case 130:
  break;
 case 129:

  if (FUNC_3(VAR_4) == 128) {
   if (VAR_6->mclk) {
    VAR_7 = FUNC_1(VAR_6->mclk);
    if (VAR_7) {
     FUNC_2(VAR_4->dev, "Failed to enable mclk\n");
     return VAR_7;
    }
   }
  }

  break;
 case 128:
  if (FUNC_3(VAR_4) == 131) {

   FUNC_5(VAR_4, VAR_3,
         VAR_0,
         VAR_0);


   FUNC_5(VAR_4, VAR_1,
         VAR_2,
         VAR_2);
  } else {

   if (VAR_6->mclk)
    FUNC_0(VAR_6->mclk);
  }
  break;
 case 131:

  if (!VAR_6->jack) {

   FUNC_5(VAR_4, VAR_1,
         VAR_2, 0);


   FUNC_5(VAR_4, VAR_3,
         VAR_0, 0);
  }
  break;
 }

 return 0;
}
