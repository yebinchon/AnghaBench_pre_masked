
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct da7213_priv {int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct da7213_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 struct da7213_priv *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;

 switch (VAR_4) {
 case 130:
  break;
 case 129:

  if (FUNC_3(VAR_3) == 128) {
   if (VAR_5->mclk) {
    VAR_6 = FUNC_1(VAR_5->mclk);
    if (VAR_6) {
     FUNC_2(VAR_3->dev,
      "Failed to enable mclk\n");
     return VAR_6;
    }
   }
  }
  break;
 case 128:
  if (FUNC_3(VAR_3) == 131) {

   FUNC_5(VAR_3, VAR_1,
         VAR_2 | VAR_0,
         VAR_2 | VAR_0);
  } else {

   if (VAR_5->mclk)
    FUNC_0(VAR_5->mclk);
  }
  break;
 case 131:

  FUNC_5(VAR_3, VAR_1,
        VAR_2 | VAR_0, 0);
  break;
 }
 return 0;
}
