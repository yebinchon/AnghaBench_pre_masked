
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct rt5640_priv {int jd_src; int jd_inverted; int ovcd_sf; void* ovcd_th; struct snd_soc_component* component; int mclk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*,int*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (struct snd_soc_component*,int,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_8 (struct snd_soc_component*,int ,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ) ;
 struct snd_soc_dapm_context* FUNC_10 (struct snd_soc_component*) ;
 struct rt5640_priv* FUNC_11 (struct snd_soc_component*) ;
 int FUNC_12 (struct snd_soc_component*,int ) ;
 int FUNC_13 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_14 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_15 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct snd_soc_component *VAR_25)
{
 struct snd_soc_dapm_context *VAR_26 = FUNC_10(VAR_25);
 struct rt5640_priv *VAR_27 = FUNC_11(VAR_25);
 u32 VAR_28 = 0;
 u32 VAR_29 = 0;
 bool VAR_30 = 0;
 u32 VAR_31;


 VAR_27->mclk = FUNC_6(VAR_25->dev, "mclk");
 if (FUNC_1(VAR_27->mclk) == -VAR_1)
  return -VAR_1;

 VAR_27->component = VAR_25;

 FUNC_9(VAR_25, VAR_19);

 FUNC_13(VAR_25, VAR_3, 0x0301, 0x0301);
 FUNC_13(VAR_25, VAR_14, 0x0030, 0x0030);
 FUNC_13(VAR_25, VAR_2, 0xfc00, 0x0c00);

 switch (FUNC_12(VAR_25, VAR_18) & VAR_4) {
 case 129:
 case 128:
  FUNC_8(VAR_25,
   VAR_24,
   FUNC_0(VAR_24));
  FUNC_15(VAR_26,
   VAR_23,
   FUNC_0(VAR_23));
  FUNC_14(VAR_26,
   VAR_22,
   FUNC_0(VAR_22));
  break;
 case 130:
  FUNC_15(VAR_26,
   VAR_21,
   FUNC_0(VAR_21));
  FUNC_14(VAR_26,
   VAR_20,
   FUNC_0(VAR_20));
  break;
 default:
  FUNC_2(VAR_25->dev,
   "The driver is for RT5639 RT5640 or RT5642 only\n");
  return -VAR_0;
 }
 if (FUNC_4(VAR_25->dev, "realtek,in1-differential"))
  FUNC_13(VAR_25, VAR_5,
           VAR_7, VAR_7);

 if (FUNC_4(VAR_25->dev, "realtek,in2-differential"))
  FUNC_13(VAR_25, VAR_6,
           VAR_8, VAR_8);

 if (FUNC_4(VAR_25->dev, "realtek,in3-differential"))
  FUNC_13(VAR_25, VAR_5,
           VAR_8, VAR_8);

 if (FUNC_5(VAR_25->dev, "realtek,dmic1-data-pin",
         &VAR_31) == 0 && VAR_31) {
  VAR_28 = VAR_31 - 1;
  VAR_30 = 1;
 }

 if (FUNC_5(VAR_25->dev, "realtek,dmic2-data-pin",
         &VAR_31) == 0 && VAR_31) {
  VAR_29 = VAR_31 - 1;
  VAR_30 = 1;
 }

 if (VAR_30)
  FUNC_7(VAR_25, VAR_28, VAR_29);

 if (FUNC_5(VAR_25->dev,
         "realtek,jack-detect-source", &VAR_31) == 0) {
  if (VAR_31 <= VAR_10)
   VAR_27->jd_src = VAR_31 << VAR_9;
  else
   FUNC_3(VAR_25->dev, "Warning: Invalid jack-detect-source value: %d, leaving jack-detect disabled\n",
     VAR_31);
 }

 if (!FUNC_4(VAR_25->dev, "realtek,jack-detect-not-inverted"))
  VAR_27->jd_inverted = 1;






 VAR_27->ovcd_th = VAR_12;
 VAR_27->ovcd_sf = VAR_15;

 if (FUNC_5(VAR_25->dev,
   "realtek,over-current-threshold-microamp", &VAR_31) == 0) {
  switch (VAR_31) {
  case 600:
   VAR_27->ovcd_th = VAR_13;
   break;
  case 1500:
   VAR_27->ovcd_th = VAR_11;
   break;
  case 2000:
   VAR_27->ovcd_th = VAR_12;
   break;
  default:
   FUNC_3(VAR_25->dev, "Warning: Invalid over-current-threshold-microamp value: %d, defaulting to 2000uA\n",
     VAR_31);
  }
 }

 if (FUNC_5(VAR_25->dev,
   "realtek,over-current-scale-factor", &VAR_31) == 0) {
  if (VAR_31 <= VAR_17)
   VAR_27->ovcd_sf = VAR_31 << VAR_16;
  else
   FUNC_3(VAR_25->dev, "Warning: Invalid over-current-scale-factor value: %d, defaulting to 0.75\n",
     VAR_31);
 }

 return 0;
}
