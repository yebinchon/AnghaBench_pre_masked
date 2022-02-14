
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas571x_private {int mclk; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct snd_soc_component*) ;
 struct tas571x_private* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_0,
      enum snd_soc_bias_level VAR_1)
{
 struct tas571x_private *VAR_2 = FUNC_5(VAR_0);
 int VAR_3;

 switch (VAR_1) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (FUNC_4(VAR_0) == 131) {
   if (!FUNC_0(VAR_2->mclk)) {
    VAR_3 = FUNC_2(VAR_2->mclk);
    if (VAR_3) {
     FUNC_3(VAR_0->dev,
      "Failed to enable master clock: %d\n",
      VAR_3);
     return VAR_3;
    }
   }
  }
  break;
 case 131:
  if (!FUNC_0(VAR_2->mclk))
   FUNC_1(VAR_2->mclk);
  break;
 }

 return 0;
}
