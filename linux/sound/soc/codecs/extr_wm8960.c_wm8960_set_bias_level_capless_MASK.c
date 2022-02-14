
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wm8960_priv {int regmap; int mclk; int clk_id; TYPE_3__* out3; TYPE_2__* rout1; TYPE_1__* lout1; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_6__ {int power; } ;
struct TYPE_5__ {int power; } ;
struct TYPE_4__ {int power; } ;


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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct wm8960_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_10 (struct snd_soc_component*) ;
 int FUNC_11 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_15,
      enum snd_soc_bias_level VAR_16)
{
 struct wm8960_priv *VAR_17 = FUNC_7(VAR_15);
 u16 VAR_18 = FUNC_8(VAR_15, VAR_7);
 int VAR_19, VAR_20;

 switch (VAR_16) {
 case 130:
  break;

 case 129:
  switch (FUNC_6(VAR_15)) {
  case 128:

   FUNC_9(VAR_15, VAR_0,
         VAR_5 | VAR_11 |
         VAR_2,
         VAR_5 | VAR_11 |
         VAR_2);


   VAR_19 = 0;
   if (VAR_17->lout1 && VAR_17->lout1->power)
    VAR_19 |= VAR_8;
   if (VAR_17->rout1 && VAR_17->rout1->power)
    VAR_19 |= VAR_10;
   if (VAR_17->out3 && VAR_17->out3->power)
    VAR_19 |= VAR_9;
   FUNC_9(VAR_15, VAR_7,
         VAR_8 |
         VAR_10 |
         VAR_9, VAR_19);


   FUNC_9(VAR_15, VAR_6,
         VAR_13, 0x80);


   FUNC_4(100);


   FUNC_9(VAR_15, VAR_6,
         VAR_14, VAR_14);

   FUNC_4(100);

   if (!FUNC_0(VAR_17->mclk)) {
    VAR_20 = FUNC_2(VAR_17->mclk);
    if (VAR_20) {
     FUNC_3(VAR_15->dev,
      "Failed to enable MCLK: %d\n",
      VAR_20);
     return VAR_20;
    }
   }

   VAR_20 = FUNC_10(VAR_15);
   if (VAR_20)
    return VAR_20;

   break;

  case 130:




   if (VAR_17->clk_id == VAR_12 && (VAR_18 & 0x1))
    FUNC_11(VAR_15, 0, 0);

   if (!FUNC_0(VAR_17->mclk))
    FUNC_1(VAR_17->mclk);


   FUNC_9(VAR_15, VAR_0,
         VAR_5 | VAR_11 |
         VAR_2,
         VAR_5 | VAR_11 |
         VAR_2);


   FUNC_9(VAR_15, VAR_6,
         VAR_14 | VAR_13, 0);
   break;

  case 131:
   FUNC_5(VAR_17->regmap);
   break;
  default:
   break;
  }
  break;

 case 128:
  switch (FUNC_6(VAR_15)) {
  case 129:

   FUNC_9(VAR_15, VAR_1,
         VAR_3 | VAR_4,
         0);


   FUNC_9(VAR_15, VAR_0,
         VAR_5 | VAR_11 |
         VAR_2,
         VAR_5 | VAR_11 |
         VAR_2);
   break;

  default:
   break;
  }
  break;

 case 131:
  break;
 }

 return 0;
}
