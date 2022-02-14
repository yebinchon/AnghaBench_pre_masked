
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int dev; } ;


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
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct wm5100_priv *VAR_14, int VAR_15)
{
 if (VAR_15 & VAR_5)
  FUNC_0(VAR_14->dev, "AIF3 configuration error\n");
 if (VAR_15 & VAR_3)
  FUNC_0(VAR_14->dev, "AIF2 configuration error\n");
 if (VAR_15 & VAR_1)
  FUNC_0(VAR_14->dev, "AIF1 configuration error\n");
 if (VAR_15 & VAR_8)
  FUNC_0(VAR_14->dev, "Control interface error\n");
 if (VAR_15 & VAR_12)
  FUNC_0(VAR_14->dev, "ISRC2 underclocked\n");
 if (VAR_15 & VAR_11)
  FUNC_0(VAR_14->dev, "ISRC1 underclocked\n");
 if (VAR_15 & VAR_10)
  FUNC_0(VAR_14->dev, "FX underclocked\n");
 if (VAR_15 & VAR_6)
  FUNC_0(VAR_14->dev, "AIF3 underclocked\n");
 if (VAR_15 & VAR_4)
  FUNC_0(VAR_14->dev, "AIF2 underclocked\n");
 if (VAR_15 & VAR_2)
  FUNC_0(VAR_14->dev, "AIF1 underclocked\n");
 if (VAR_15 & VAR_7)
  FUNC_0(VAR_14->dev, "ASRC underclocked\n");
 if (VAR_15 & VAR_9)
  FUNC_0(VAR_14->dev, "DAC underclocked\n");
 if (VAR_15 & VAR_0)
  FUNC_0(VAR_14->dev, "ADC underclocked\n");
 if (VAR_15 & VAR_13)
  FUNC_0(VAR_14->dev, "Mixer underclocked\n");
}
