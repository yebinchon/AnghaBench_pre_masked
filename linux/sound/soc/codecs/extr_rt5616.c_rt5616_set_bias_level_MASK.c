
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5616_priv {int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_soc_component*) ;
 struct rt5616_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_14,
     enum snd_soc_bias_level VAR_15)
{
 struct rt5616_priv *VAR_16 = FUNC_5(VAR_14);
 int VAR_17;

 switch (VAR_15) {

 case 130:
  break;

 case 129:







  if (FUNC_0(VAR_16->mclk))
   break;

  if (FUNC_4(VAR_14) == 130) {
   FUNC_1(VAR_16->mclk);
  } else {
   VAR_17 = FUNC_2(VAR_16->mclk);
   if (VAR_17)
    return VAR_17;
  }
  break;

 case 128:
  if (FUNC_4(VAR_14) == 131) {
   FUNC_6(VAR_14, VAR_2,
         VAR_12 | VAR_9 |
         VAR_4 | VAR_13,
         VAR_12 | VAR_9 |
         VAR_4 | VAR_13);
   FUNC_3(10);
   FUNC_6(VAR_14, VAR_2,
         VAR_7 | VAR_8,
         VAR_7 | VAR_8);
   FUNC_6(VAR_14, VAR_1,
         VAR_0,
         VAR_0);
  }
  break;

 case 131:
  FUNC_6(VAR_14, VAR_1, VAR_0, 0);
  FUNC_7(VAR_14, VAR_5, 0x0000);
  FUNC_7(VAR_14, VAR_6, 0x0000);
  FUNC_7(VAR_14, VAR_11, 0x0000);
  FUNC_7(VAR_14, VAR_10, 0x0000);
  FUNC_7(VAR_14, VAR_2, 0x0000);
  FUNC_7(VAR_14, VAR_3, 0x0000);
  break;

 default:
  break;
 }

 return 0;
}
