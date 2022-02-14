
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
struct clk_bulk_data {char* id; int clk; } ;
struct aic32x4_priv {int power_cfg; int micpga_routing; scalar_t__ setup; int rstn_gpio; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct clk_bulk_data*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,struct clk_bulk_data*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct aic32x4_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ) ;
 int FUNC_10 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_27)
{
 struct aic32x4_priv *VAR_28 = FUNC_8(VAR_27);
 u32 VAR_29;
 int VAR_30;

 struct clk_bulk_data VAR_31[] = {
  { .id = "codec_clkin" },
  { .id = "pll" },
  { .id = "bdiv" },
  { .id = "mdac" },
 };

 VAR_30 = FUNC_3(VAR_27->dev, FUNC_0(VAR_31), VAR_31);
 if (VAR_30)
  return VAR_30;

 if (FUNC_4(VAR_28->rstn_gpio)) {
  FUNC_7(10);
  FUNC_5(VAR_28->rstn_gpio, 1);
  FUNC_6(1);
 }

 FUNC_10(VAR_27, VAR_23, 0x01);

 if (VAR_28->setup)
  FUNC_1(VAR_27);

 FUNC_2(VAR_31[0].clk, VAR_31[1].clk);
 FUNC_2(VAR_31[2].clk, VAR_31[3].clk);


 if (VAR_28->power_cfg & VAR_21) {
  FUNC_10(VAR_27, VAR_11,
    VAR_13 | VAR_12);
 }
 if (VAR_28->power_cfg & VAR_18)
  FUNC_10(VAR_27, VAR_16, VAR_1);

 VAR_29 = (VAR_28->power_cfg & VAR_17) ?
   VAR_5 : 0;
 FUNC_10(VAR_27, VAR_4, VAR_29);

 VAR_29 = FUNC_9(VAR_27, VAR_2);
 if (VAR_28->power_cfg & VAR_20)
  VAR_29 |= VAR_7;
 if (VAR_28->power_cfg & VAR_19)
  VAR_29 |= VAR_6;
 FUNC_10(VAR_27, VAR_2, VAR_29);


 if (VAR_28->micpga_routing & VAR_14)
  FUNC_10(VAR_27, VAR_8,
    VAR_10);
 else
  FUNC_10(VAR_27, VAR_8,
    VAR_9);
 if (VAR_28->micpga_routing & VAR_15)
  FUNC_10(VAR_27, VAR_24,
    VAR_26);
 else
  FUNC_10(VAR_27, VAR_24,
    VAR_25);






 VAR_29 = FUNC_9(VAR_27, VAR_0);
 FUNC_10(VAR_27, VAR_0, VAR_29 |
    VAR_3 | VAR_22);
 FUNC_10(VAR_27, VAR_0, VAR_29);

 return 0;
}
