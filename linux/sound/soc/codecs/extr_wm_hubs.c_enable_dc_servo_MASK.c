
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wm_hubs_dcs_cache {int dcs_cfg; int right; int left; } ;
struct wm_hubs_data {int dcs_readback_mode; scalar_t__ dcs_codes_l; scalar_t__ dcs_codes_r; scalar_t__ series_startup; } ;
struct snd_soc_component {int dev; } ;
typedef scalar_t__ s8 ;


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
 int FUNC_0 (int ,char*,int,...) ;
 struct wm_hubs_data* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_3 (struct snd_soc_component*,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int) ;
 scalar_t__ FUNC_5 (struct snd_soc_component*) ;
 scalar_t__ FUNC_6 (struct snd_soc_component*,struct wm_hubs_dcs_cache**) ;
 int FUNC_7 (struct snd_soc_component*,int) ;
 scalar_t__ FUNC_8 (struct snd_soc_component*,int*,int*) ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_12)
{
 struct wm_hubs_data *VAR_13 = FUNC_1(VAR_12);
 struct wm_hubs_dcs_cache *VAR_14;
 s8 VAR_15;
 u16 VAR_16, VAR_17, VAR_18, VAR_19;

 switch (VAR_13->dcs_readback_mode) {
 case 2:
  VAR_19 = VAR_11;
  break;
 default:
  VAR_19 = VAR_10;
  break;
 }



 if (FUNC_5(VAR_12) &&
     FUNC_6(VAR_12, &VAR_14)) {
  FUNC_0(VAR_12->dev, "Using cached DCS offset %x for %d,%d\n",
   VAR_14->dcs_cfg, VAR_14->left, VAR_14->right);
  FUNC_3(VAR_12, VAR_19, VAR_14->dcs_cfg);
  FUNC_4(VAR_12,
      VAR_3 |
      VAR_4);
  return;
 }

 if (VAR_13->series_startup) {

  FUNC_2(VAR_12, VAR_9,
        VAR_1,
        32 << VAR_2);
  FUNC_4(VAR_12,
      VAR_5 |
      VAR_6);
 } else {
  FUNC_4(VAR_12,
      VAR_7 |
      VAR_8);
 }

 if (FUNC_8(VAR_12, &VAR_16, &VAR_17) < 0)
  return;

 FUNC_0(VAR_12->dev, "DCS input: %x %x\n", VAR_16, VAR_17);


 if (VAR_13->dcs_codes_l || VAR_13->dcs_codes_r) {
  FUNC_0(VAR_12->dev,
   "Applying %d/%d code DC servo correction\n",
   VAR_13->dcs_codes_l, VAR_13->dcs_codes_r);


  VAR_15 = (s8)VAR_17;
  FUNC_0(VAR_12->dev, "DCS right %d->%d\n", VAR_15,
   VAR_15 + VAR_13->dcs_codes_r);
  VAR_15 += VAR_13->dcs_codes_r;
  VAR_18 = (u8)VAR_15 << VAR_0;


  VAR_15 = (s8)VAR_16;
  FUNC_0(VAR_12->dev, "DCS left %d->%d\n", VAR_15,
   VAR_15 + VAR_13->dcs_codes_l);
  VAR_15 += VAR_13->dcs_codes_l;
  VAR_18 |= (u8)VAR_15;

  FUNC_0(VAR_12->dev, "DCS result: %x\n", VAR_18);


  FUNC_3(VAR_12, VAR_19, VAR_18);
  FUNC_4(VAR_12,
      VAR_3 |
      VAR_4);
 } else {
  VAR_18 = VAR_17 << VAR_0;
  VAR_18 |= VAR_16;
 }



 if (FUNC_5(VAR_12))
  FUNC_7(VAR_12, VAR_18);
}
