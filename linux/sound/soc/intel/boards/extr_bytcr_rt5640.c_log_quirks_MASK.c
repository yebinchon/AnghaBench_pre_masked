
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,...) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_6(struct device *VAR_10)
{
 int VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;

 VAR_11 = FUNC_1(VAR_8);
 switch (VAR_11) {
 case 131:
  FUNC_5(VAR_10, "quirk DMIC1_MAP enabled\n");
  break;
 case 130:
  FUNC_5(VAR_10, "quirk DMIC2_MAP enabled\n");
  break;
 case 129:
  FUNC_5(VAR_10, "quirk IN1_MAP enabled\n");
  break;
 case 128:
  FUNC_5(VAR_10, "quirk IN3_MAP enabled\n");
  break;
 default:
  FUNC_4(VAR_10, "quirk map 0x%x is not supported, microphone input will not work\n", VAR_11);
  break;
 }
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_10, "quirk realtek,jack-detect-source %ld\n",
    FUNC_0(VAR_8));
  FUNC_5(VAR_10, "quirk realtek,over-current-threshold-microamp %ld\n",
    FUNC_3(VAR_8) * 100);
  FUNC_5(VAR_10, "quirk realtek,over-current-scale-factor %ld\n",
    FUNC_2(VAR_8));
 }
 if (VAR_8 & VAR_1)
  FUNC_5(VAR_10, "quirk JD_NOT_INV enabled\n");
 if (VAR_8 & VAR_4)
  FUNC_5(VAR_10, "quirk MONO_SPEAKER enabled\n");
 if (VAR_8 & VAR_0)
  FUNC_5(VAR_10, "quirk DIFF_MIC enabled\n");
 if (VAR_8 & VAR_5) {
  FUNC_5(VAR_10, "quirk SSP0_AIF1 enabled\n");
  VAR_13 = 1;
  VAR_14 = 1;
 }
 if (VAR_8 & VAR_6) {
  FUNC_5(VAR_10, "quirk SSP0_AIF2 enabled\n");
  VAR_13 = 1;
  VAR_15 = 1;
 }
 if (VAR_8 & VAR_7) {
  FUNC_5(VAR_10, "quirk SSP2_AIF2 enabled\n");
  VAR_16 = 1;
 }
 if (VAR_9 && !VAR_13)
  FUNC_4(VAR_10, "Invalid routing, bytcr detected but no SSP0-based quirk, audio cannot work with SSP2 on bytcr\n");
 if (VAR_14 && VAR_15)
  FUNC_4(VAR_10, "Invalid routing, SSP0 cannot be connected to both AIF1 and AIF2\n");
 if (VAR_13 && VAR_16)
  FUNC_4(VAR_10, "Invalid routing, cannot have both SSP0 and SSP2 connected to codec\n");

 if (VAR_8 & VAR_3) {
  FUNC_5(VAR_10, "quirk MCLK_EN enabled\n");
  VAR_12 = 1;
 }
 if (VAR_8 & VAR_2) {
  if (VAR_12)
   FUNC_5(VAR_10, "quirk MCLK_25MHZ enabled\n");
  else
   FUNC_4(VAR_10, "quirk MCLK_25MHZ enabled but quirk MCLK not selected, will be ignored\n");
 }
}
