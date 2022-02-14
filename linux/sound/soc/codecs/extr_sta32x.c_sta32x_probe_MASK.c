
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta32x_priv {int* coef_shadow; int supplies; int watchdog_work; struct sta32x_platform_data* pdata; int regmap; scalar_t__ xti_clk; struct snd_soc_component* component; } ;
struct sta32x_platform_data {int drop_compensation_ns; int output_conf; int ch1_output_mapping; int ch2_output_mapping; int ch3_output_mapping; scalar_t__ needs_esd_watchdog; scalar_t__ invalid_input_detect_mute; scalar_t__ odd_pwm_speed_mode; scalar_t__ am_reduction_mode; scalar_t__ max_power_correction; scalar_t__ max_power_use_mpcc; int fault_detect_recovery; int thermal_warning_adjustment; int thermal_warning_recovery; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
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
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 struct sta32x_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct sta32x_priv*) ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_23)
{
 struct sta32x_priv *VAR_24 = FUNC_8(VAR_23);
 struct sta32x_platform_data *VAR_25 = VAR_24->pdata;
 int VAR_26, VAR_27 = 0, VAR_28 = 0;

 VAR_24->component = VAR_23;

 if (VAR_24->xti_clk) {
  VAR_27 = FUNC_2(VAR_24->xti_clk);
  if (VAR_27 != 0) {
   FUNC_3(VAR_23->dev,
    "Failed to enable clock: %d\n", VAR_27);
   return VAR_27;
  }
 }

 VAR_27 = FUNC_6(FUNC_0(VAR_24->supplies),
        VAR_24->supplies);
 if (VAR_27 != 0) {
  FUNC_3(VAR_23->dev, "Failed to enable supplies: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_9(VAR_24);
 if (VAR_27 < 0) {
  FUNC_3(VAR_23->dev, "Failed to startup device\n");
  return VAR_27;
 }


 if (!VAR_25->thermal_warning_recovery)
  VAR_28 |= VAR_6;
 if (!VAR_25->thermal_warning_adjustment)
  VAR_28 |= VAR_7;
 if (!VAR_25->fault_detect_recovery)
  VAR_28 |= VAR_5;
 FUNC_4(VAR_24->regmap, VAR_4,
      VAR_6 | VAR_7 |
      VAR_5,
      VAR_28);


 FUNC_4(VAR_24->regmap, VAR_8,
      VAR_9,
      VAR_25->drop_compensation_ns
    << VAR_10);


 FUNC_4(VAR_24->regmap, VAR_11,
      VAR_14,
      VAR_25->max_power_use_mpcc ?
    VAR_14 : 0);
 FUNC_4(VAR_24->regmap, VAR_11,
      VAR_13,
      VAR_25->max_power_correction ?
    VAR_13 : 0);
 FUNC_4(VAR_24->regmap, VAR_11,
      VAR_12,
      VAR_25->am_reduction_mode ?
    VAR_12 : 0);
 FUNC_4(VAR_24->regmap, VAR_11,
      VAR_15,
      VAR_25->odd_pwm_speed_mode ?
    VAR_15 : 0);


 FUNC_4(VAR_24->regmap, VAR_16,
      VAR_17,
      VAR_25->invalid_input_detect_mute ?
    VAR_17 : 0);


 FUNC_4(VAR_24->regmap, VAR_16,
      VAR_18,
      VAR_25->output_conf
    << VAR_19);


 FUNC_4(VAR_24->regmap, VAR_1,
      VAR_20,
      VAR_25->ch1_output_mapping
    << VAR_21);
 FUNC_4(VAR_24->regmap, VAR_2,
      VAR_20,
      VAR_25->ch2_output_mapping
    << VAR_21);
 FUNC_4(VAR_24->regmap, VAR_3,
      VAR_20,
      VAR_25->ch3_output_mapping
    << VAR_21);


 for (VAR_26 = 4; VAR_26 <= 49; VAR_26 += 5)
  VAR_24->coef_shadow[VAR_26] = 0x400000;
 for (VAR_26 = 50; VAR_26 <= 54; VAR_26++)
  VAR_24->coef_shadow[VAR_26] = 0x7fffff;
 VAR_24->coef_shadow[55] = 0x5a9df7;
 VAR_24->coef_shadow[56] = 0x7fffff;
 VAR_24->coef_shadow[59] = 0x7fffff;
 VAR_24->coef_shadow[60] = 0x400000;
 VAR_24->coef_shadow[61] = 0x400000;

 if (VAR_24->pdata->needs_esd_watchdog)
  FUNC_1(&VAR_24->watchdog_work, VAR_22);

 FUNC_7(VAR_23, VAR_0);

 FUNC_5(FUNC_0(VAR_24->supplies), VAR_24->supplies);

 return 0;
}
