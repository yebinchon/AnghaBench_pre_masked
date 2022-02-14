
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8731_priv {int regmap; int supplies; int mclk; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_soc_component*) ;
 struct wm8731_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ) ;
 int FUNC_10 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_1,
     enum snd_soc_bias_level VAR_2)
{
 struct wm8731_priv *VAR_3 = FUNC_8(VAR_1);
 int VAR_4;
 u16 VAR_5;

 switch (VAR_2) {
 case 130:
  if (VAR_3->mclk) {
   VAR_4 = FUNC_2(VAR_3->mclk);
   if (VAR_4)
    return VAR_4;
  }
  break;
 case 129:
  break;
 case 128:
  if (FUNC_7(VAR_1) == 131) {
   VAR_4 = FUNC_6(FUNC_0(VAR_3->supplies),
          VAR_3->supplies);
   if (VAR_4 != 0)
    return VAR_4;

   FUNC_4(VAR_3->regmap);
  }


  VAR_5 = FUNC_9(VAR_1, VAR_0) & 0xff7f;
  FUNC_10(VAR_1, VAR_0, VAR_5 | 0x0040);
  break;
 case 131:
  if (VAR_3->mclk)
   FUNC_1(VAR_3->mclk);
  FUNC_10(VAR_1, VAR_0, 0xffff);
  FUNC_5(FUNC_0(VAR_3->supplies),
           VAR_3->supplies);
  FUNC_3(VAR_3->regmap);
  break;
 }
 return 0;
}
