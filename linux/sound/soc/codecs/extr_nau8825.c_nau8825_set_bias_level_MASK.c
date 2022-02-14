
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct nau8825 {int mclk; int mclk_freq; int regmap; int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nau8825*) ;
 int FUNC_4 (struct nau8825*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct snd_soc_component*) ;
 struct nau8825* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_7,
       enum snd_soc_bias_level VAR_8)
{
 struct nau8825 *VAR_9 = FUNC_8(VAR_7);
 int VAR_10;

 switch (VAR_8) {
 case 130:
  break;

 case 129:
  break;

 case 128:
  if (FUNC_7(VAR_7) == 131) {
   if (VAR_9->mclk_freq) {
    VAR_10 = FUNC_1(VAR_9->mclk);
    if (VAR_10) {
     FUNC_2(VAR_9->dev, "Unable to prepare component mclk\n");
     return VAR_10;
    }
   }

   FUNC_3(VAR_9);
  }
  break;

 case 131:


  FUNC_5(VAR_9->regmap, VAR_6,
   VAR_2 | VAR_1, 0);

  FUNC_5(VAR_9->regmap,
   VAR_4, 0xf, 0xf);

  FUNC_4(VAR_9);



  FUNC_6(VAR_9->regmap,
   VAR_5, 0xffff);

  FUNC_5(VAR_9->regmap, VAR_3,
   VAR_0, 0);
  if (VAR_9->mclk_freq)
   FUNC_0(VAR_9->mclk);
  break;
 }
 return 0;
}
