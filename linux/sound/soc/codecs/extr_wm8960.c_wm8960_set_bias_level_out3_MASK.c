
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8960_priv {int regmap; int mclk; int clk_id; } ;
struct snd_soc_component {int dev; } ;
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
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct wm8960_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_10 (struct snd_soc_component*,int ,int) ;
 int FUNC_11 (struct snd_soc_component*) ;
 int FUNC_12 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_9,
          enum snd_soc_bias_level VAR_10)
{
 struct wm8960_priv *VAR_11 = FUNC_7(VAR_9);
 u16 VAR_12 = FUNC_8(VAR_9, VAR_5);
 int VAR_13;

 switch (VAR_10) {
 case 130:
  break;

 case 129:
  switch (FUNC_6(VAR_9)) {
  case 128:
   if (!FUNC_0(VAR_11->mclk)) {
    VAR_13 = FUNC_2(VAR_11->mclk);
    if (VAR_13) {
     FUNC_3(VAR_9->dev,
      "Failed to enable MCLK: %d\n",
      VAR_13);
     return VAR_13;
    }
   }

   VAR_13 = FUNC_11(VAR_9);
   if (VAR_13)
    return VAR_13;


   FUNC_9(VAR_9, VAR_4, 0x180, 0x80);
   break;

  case 130:




   if (VAR_11->clk_id == VAR_7 && (VAR_12 & 0x1))
    FUNC_12(VAR_9, 0, 0);

   if (!FUNC_0(VAR_11->mclk))
    FUNC_1(VAR_11->mclk);
   break;

  default:
   break;
  }

  break;

 case 128:
  if (FUNC_6(VAR_9) == 131) {
   FUNC_5(VAR_11->regmap);


   FUNC_10(VAR_9, VAR_0,
          VAR_3 | VAR_6 |
          VAR_1 | VAR_2);


   FUNC_9(VAR_9, VAR_4, 0x80, 0x80);
   FUNC_4(100);


   FUNC_9(VAR_9, VAR_4, VAR_8,
         VAR_8);


   FUNC_10(VAR_9, VAR_0, VAR_2);
  }


  FUNC_9(VAR_9, VAR_4, 0x180, 0x100);
  break;

 case 131:

  FUNC_10(VAR_9, VAR_0,
        VAR_3 | VAR_6 |
        VAR_1 | VAR_2);


  FUNC_10(VAR_9, VAR_4, 0);
  FUNC_4(600);
  break;
 }

 return 0;
}
