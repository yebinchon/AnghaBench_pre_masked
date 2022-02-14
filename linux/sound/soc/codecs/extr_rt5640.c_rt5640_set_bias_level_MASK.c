
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5640_priv {int mclk; } ;
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
 int VAR_14 ;
 int VAR_15 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct rt5640_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_16,
   enum snd_soc_bias_level VAR_17)
{
 struct rt5640_priv *VAR_18 = FUNC_4(VAR_16);
 int VAR_19;

 switch (VAR_17) {
 case 130:
  break;

 case 129:







  if (FUNC_0(VAR_18->mclk))
   break;

  if (FUNC_3(VAR_16) == 130) {
   FUNC_1(VAR_18->mclk);
  } else {
   VAR_19 = FUNC_2(VAR_18->mclk);
   if (VAR_19)
    return VAR_19;
  }
  break;

 case 128:
  if (131 == FUNC_3(VAR_16)) {
   FUNC_5(VAR_16, VAR_4,
    VAR_14 | VAR_11 |
    VAR_6 | VAR_15,
    VAR_14 | VAR_11 |
    VAR_6 | VAR_15);
   FUNC_7(10000, 15000);
   FUNC_5(VAR_16, VAR_4,
    VAR_9 | VAR_10,
    VAR_9 | VAR_10);
   FUNC_5(VAR_16, VAR_2,
      0x0301, 0x0301);
   FUNC_5(VAR_16, VAR_3,
      0x0030, 0x0030);
  }
  break;

 case 131:
  FUNC_6(VAR_16, VAR_0, 0x0004);
  FUNC_6(VAR_16, VAR_1, 0x1100);
  FUNC_5(VAR_16, VAR_2, 0x1, 0);
  FUNC_6(VAR_16, VAR_7, 0x0000);
  FUNC_6(VAR_16, VAR_8, 0x0000);
  FUNC_6(VAR_16, VAR_13, 0x0000);
  FUNC_6(VAR_16, VAR_12, 0x0000);
  FUNC_6(VAR_16, VAR_4, 0x0000);
  FUNC_6(VAR_16, VAR_5, 0x0000);
  break;

 default:
  break;
 }

 return 0;
}
