
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_13)
{
 if (FUNC_1(VAR_12) == VAR_1)
  FUNC_4(VAR_13, "quirk DMIC_MAP enabled");
 if (FUNC_1(VAR_12) == VAR_3)
  FUNC_4(VAR_13, "quirk IN1_MAP enabled");
 if (FUNC_1(VAR_12) == VAR_4)
  FUNC_4(VAR_13, "quirk IN2_MAP enabled");
 if (FUNC_1(VAR_12) == VAR_2)
  FUNC_4(VAR_13, "quirk IN1_IN2_MAP enabled");
 if (FUNC_0(VAR_12)) {
  FUNC_4(VAR_13, "quirk realtek,jack-detect-source %ld\n",
    FUNC_0(VAR_12));
  FUNC_4(VAR_13, "quirk realtek,over-current-threshold-microamp %ld\n",
    FUNC_3(VAR_12) * 100);
  FUNC_4(VAR_13, "quirk realtek,over-current-scale-factor %ld\n",
    FUNC_2(VAR_12));
 }
 if (VAR_12 & VAR_0)
  FUNC_4(VAR_13, "quirk DMIC enabled");
 if (VAR_12 & VAR_7)
  FUNC_4(VAR_13, "quirk MCLK_EN enabled");
 if (VAR_12 & VAR_6)
  FUNC_4(VAR_13, "quirk MCLK_25MHZ enabled");
 if (VAR_12 & VAR_11)
  FUNC_4(VAR_13, "quirk SSP2_AIF2 enabled\n");
 if (VAR_12 & VAR_9)
  FUNC_4(VAR_13, "quirk SSP0_AIF1 enabled\n");
 if (VAR_12 & VAR_10)
  FUNC_4(VAR_13, "quirk SSP0_AIF2 enabled\n");
 if (VAR_12 & VAR_8)
  FUNC_4(VAR_13, "quirk MONO_SPEAKER enabled\n");
 if (VAR_12 & VAR_5)
  FUNC_4(VAR_13, "quirk JD_NOT_INV enabled\n");
}
