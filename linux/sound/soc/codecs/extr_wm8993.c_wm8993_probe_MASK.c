
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_retune_configs; scalar_t__ lineout2_diff; scalar_t__ lineout1_diff; int micbias2_lvl; int micbias1_lvl; int micbias2_delay; int micbias1_delay; int jd_thr; int jd_scthr; int lineout2fb; int lineout1fb; } ;
struct TYPE_3__ {int hp_startup_mode; int dcs_codes_l; int dcs_codes_r; int series_startup; } ;
struct wm8993_priv {TYPE_2__ pdata; TYPE_1__ hubs_data; } ;
struct snd_soc_dapm_context {int idle_bias_off; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int VAR_8 ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct wm8993_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct snd_soc_component*,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_12)
{
 struct wm8993_priv *VAR_13 = FUNC_4(VAR_12);
 struct snd_soc_dapm_context *VAR_14 = FUNC_3(VAR_12);

 VAR_13->hubs_data.hp_startup_mode = 1;
 VAR_13->hubs_data.dcs_codes_l = -2;
 VAR_13->hubs_data.dcs_codes_r = -2;
 VAR_13->hubs_data.series_startup = 1;


 FUNC_5(VAR_12, VAR_6,
       VAR_3, VAR_3);
 FUNC_5(VAR_12, VAR_5,
       VAR_0, VAR_0);



 FUNC_5(VAR_12, VAR_1,
       VAR_4, 0);


 FUNC_5(VAR_12, VAR_2, VAR_7, 0);

 FUNC_10(VAR_12, VAR_13->pdata.lineout1_diff,
          VAR_13->pdata.lineout2_diff,
          VAR_13->pdata.lineout1fb,
          VAR_13->pdata.lineout2fb,
          VAR_13->pdata.jd_scthr,
          VAR_13->pdata.jd_thr,
          VAR_13->pdata.micbias1_delay,
          VAR_13->pdata.micbias2_delay,
          VAR_13->pdata.micbias1_lvl,
          VAR_13->pdata.micbias2_lvl);

 FUNC_2(VAR_12, VAR_11,
        FUNC_0(VAR_11));
 if (VAR_13->pdata.num_retune_configs != 0) {
  FUNC_1(VAR_12->dev, "Using ReTune Mobile\n");
 } else {
  FUNC_1(VAR_12->dev, "No ReTune Mobile, using normal EQ\n");
  FUNC_2(VAR_12, VAR_10,
         FUNC_0(VAR_10));
 }

 FUNC_7(VAR_14, VAR_9,
      FUNC_0(VAR_9));
 FUNC_8(VAR_12);

 FUNC_6(VAR_14, VAR_8, FUNC_0(VAR_8));
 FUNC_9(VAR_12, VAR_13->pdata.lineout1_diff,
        VAR_13->pdata.lineout2_diff);




 if (VAR_13->pdata.lineout1_diff && VAR_13->pdata.lineout2_diff)
  VAR_14->idle_bias_off = 1;

 return 0;

}
