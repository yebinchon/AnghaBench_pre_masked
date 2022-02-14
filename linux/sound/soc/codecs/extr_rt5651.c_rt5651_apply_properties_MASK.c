
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
struct rt5651_priv {int jd_src; int jd_active_high; int ovcd_sf; void* ovcd_th; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*,int*) ;
 struct rt5651_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_11)
{
 struct rt5651_priv *VAR_12 = FUNC_3(VAR_11);
 u32 VAR_13;

 if (FUNC_1(VAR_11->dev, "realtek,in2-differential"))
  FUNC_4(VAR_11, VAR_3,
    VAR_4, VAR_4);

 if (FUNC_1(VAR_11->dev, "realtek,dmic-en"))
  FUNC_4(VAR_11, VAR_2,
    VAR_1, VAR_0);

 if (FUNC_2(VAR_11->dev,
         "realtek,jack-detect-source", &VAR_13) == 0)
  VAR_12->jd_src = VAR_13;

 if (FUNC_1(VAR_11->dev, "realtek,jack-detect-not-inverted"))
  VAR_12->jd_active_high = 1;






 VAR_12->ovcd_th = VAR_6;
 VAR_12->ovcd_sf = VAR_8;

 if (FUNC_2(VAR_11->dev,
   "realtek,over-current-threshold-microamp", &VAR_13) == 0) {
  switch (VAR_13) {
  case 600:
   VAR_12->ovcd_th = VAR_7;
   break;
  case 1500:
   VAR_12->ovcd_th = VAR_5;
   break;
  case 2000:
   VAR_12->ovcd_th = VAR_6;
   break;
  default:
   FUNC_0(VAR_11->dev, "Warning: Invalid over-current-threshold-microamp value: %d, defaulting to 2000uA\n",
     VAR_13);
  }
 }

 if (FUNC_2(VAR_11->dev,
   "realtek,over-current-scale-factor", &VAR_13) == 0) {
  if (VAR_13 <= VAR_10)
   VAR_12->ovcd_sf = VAR_13 << VAR_9;
  else
   FUNC_0(VAR_11->dev, "Warning: Invalid over-current-scale-factor value: %d, defaulting to 0.75\n",
     VAR_13);
 }
}
