
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct da7219_priv {int master; struct clk** dai_clks; } ;
struct clk {int dummy; } ;


 size_t VAR_0 ;
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


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 struct da7219_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dapm_widget *VAR_12,
       struct snd_kcontrol *VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = FUNC_8(VAR_12->dapm);
 struct da7219_priv *VAR_16 = FUNC_5(VAR_15);
 struct clk *VAR_17 = VAR_16->dai_clks[VAR_0];
 u8 VAR_18, VAR_19;
 int VAR_20 = 0, VAR_21;
 bool VAR_22 = 0;

 switch (VAR_14) {
 case 128:
  if (VAR_16->master) {

   if (VAR_17) {
    VAR_21 = FUNC_1(VAR_17);
    if (VAR_21) {
     FUNC_2(VAR_15->dev,
      "Failed to enable DAI clks\n");
     return VAR_21;
    }
   } else {
    FUNC_7(VAR_15,
             VAR_2,
             VAR_1,
             VAR_1);
   }
  }


  FUNC_7(VAR_15, VAR_3,
        VAR_4, 0);


  VAR_18 = FUNC_6(VAR_15, VAR_5);
  if ((VAR_18 & VAR_6) != VAR_7)
   return 0;


  do {
   VAR_19 = FUNC_6(VAR_15, VAR_8);
   if (VAR_19 & VAR_9) {
    VAR_22 = 1;
   } else {
    ++VAR_20;
    FUNC_4(50);
   }
  } while ((VAR_20 < VAR_10) && (!VAR_22));

  if (!VAR_22)
   FUNC_3(VAR_15->dev, "SRM failed to lock\n");

  return 0;
 case 129:

  FUNC_7(VAR_15, VAR_3,
        VAR_4,
        VAR_4);


  if (VAR_16->master) {
   if (VAR_17)
    FUNC_0(VAR_17);
   else
    FUNC_7(VAR_15,
             VAR_2,
             VAR_1,
             0);
  }

  return 0;
 default:
  return -VAR_11;
 }
}
