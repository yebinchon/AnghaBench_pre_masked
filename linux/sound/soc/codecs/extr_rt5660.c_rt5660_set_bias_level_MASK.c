
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5660_priv {int mclk; } ;
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




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct rt5660_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_9,
   enum snd_soc_bias_level VAR_10)
{
 struct rt5660_priv *VAR_11 = FUNC_4(VAR_9);
 int VAR_12;

 switch (VAR_10) {
 case 130:
  break;

 case 129:
  FUNC_5(VAR_9, VAR_1,
   VAR_0, VAR_0);

  if (FUNC_0(VAR_11->mclk))
   break;

  if (FUNC_3(VAR_9) == 130) {
   FUNC_1(VAR_11->mclk);
  } else {
   VAR_12 = FUNC_2(VAR_11->mclk);
   if (VAR_12)
    return VAR_12;
  }
  break;

 case 128:
  if (FUNC_3(VAR_9) == 131) {
   FUNC_5(VAR_9, VAR_2,
    VAR_7 | VAR_6 |
    VAR_3 | VAR_8,
    VAR_7 | VAR_6 |
    VAR_3 | VAR_8);
   FUNC_6(10000, 15000);
   FUNC_5(VAR_9, VAR_2,
    VAR_4 | VAR_5,
    VAR_4 | VAR_5);
  }
  break;

 case 131:
  FUNC_5(VAR_9, VAR_1,
   VAR_0, 0);
  break;

 default:
  break;
 }

 return 0;
}
