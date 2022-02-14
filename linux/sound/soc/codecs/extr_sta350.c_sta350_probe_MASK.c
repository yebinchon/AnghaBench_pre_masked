
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta350_priv {int* coef_shadow; int supplies; int regmap; struct sta350_platform_data* pdata; } ;
struct sta350_platform_data {int ffx_power_output_mode; int drop_compensation_ns; int output_conf; int ch1_output_mapping; int ch2_output_mapping; int ch3_output_mapping; int powerdown_delay_divider; scalar_t__ powerdown_master_vol; scalar_t__ noise_shape_dc_cut; scalar_t__ bridge_immediate_off; scalar_t__ activate_mute_output; scalar_t__ invalid_input_detect_mute; scalar_t__ distortion_compensation; scalar_t__ odd_pwm_speed_mode; scalar_t__ am_reduction_mode; scalar_t__ max_power_correction; scalar_t__ max_power_use_mpcc; scalar_t__ oc_warning_adjustment; int fault_detect_recovery; int thermal_warning_adjustment; int thermal_warning_recovery; } ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 struct sta350_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct sta350_priv*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_34)
{
 struct sta350_priv *VAR_35 = FUNC_6(VAR_34);
 struct sta350_platform_data *VAR_36 = VAR_35->pdata;
 int VAR_37, VAR_38 = 0, VAR_39 = 0;

 VAR_38 = FUNC_4(FUNC_0(VAR_35->supplies),
        VAR_35->supplies);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34->dev, "Failed to enable supplies: %d\n", VAR_38);
  return VAR_38;
 }

 VAR_38 = FUNC_7(VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34->dev, "Failed to startup device\n");
  return VAR_38;
 }


 if (!VAR_36->thermal_warning_recovery)
  VAR_39 |= VAR_6;
 if (!VAR_36->thermal_warning_adjustment)
  VAR_39 |= VAR_7;
 if (!VAR_36->fault_detect_recovery)
  VAR_39 |= VAR_5;
 FUNC_2(VAR_35->regmap, VAR_4,
      VAR_6 | VAR_7 |
      VAR_5,
      VAR_39);


 FUNC_2(VAR_35->regmap, VAR_8,
      VAR_12,
      VAR_36->ffx_power_output_mode
    << VAR_13);
 FUNC_2(VAR_35->regmap, VAR_8,
      VAR_9,
      VAR_36->drop_compensation_ns
    << VAR_10);
 FUNC_2(VAR_35->regmap,
      VAR_8,
      VAR_11,
      VAR_36->oc_warning_adjustment ?
    VAR_11 : 0);


 FUNC_2(VAR_35->regmap, VAR_14,
      VAR_18,
      VAR_36->max_power_use_mpcc ?
    VAR_18 : 0);
 FUNC_2(VAR_35->regmap, VAR_14,
      VAR_17,
      VAR_36->max_power_correction ?
    VAR_17 : 0);
 FUNC_2(VAR_35->regmap, VAR_14,
      VAR_15,
      VAR_36->am_reduction_mode ?
    VAR_15 : 0);
 FUNC_2(VAR_35->regmap, VAR_14,
      VAR_19,
      VAR_36->odd_pwm_speed_mode ?
    VAR_19 : 0);
 FUNC_2(VAR_35->regmap, VAR_14,
      VAR_16,
      VAR_36->distortion_compensation ?
    VAR_16 : 0);

 FUNC_2(VAR_35->regmap, VAR_20,
      VAR_21,
      VAR_36->invalid_input_detect_mute ?
    VAR_21 : 0);
 FUNC_2(VAR_35->regmap, VAR_20,
      VAR_22,
      VAR_36->output_conf
    << VAR_23);


 FUNC_2(VAR_35->regmap, VAR_1,
      VAR_24,
      VAR_36->ch1_output_mapping
    << VAR_25);
 FUNC_2(VAR_35->regmap, VAR_2,
      VAR_24,
      VAR_36->ch2_output_mapping
    << VAR_25);
 FUNC_2(VAR_35->regmap, VAR_3,
      VAR_24,
      VAR_36->ch3_output_mapping
    << VAR_25);


 FUNC_2(VAR_35->regmap, VAR_26,
      VAR_28,
      VAR_36->activate_mute_output ?
    VAR_28 : 0);
 FUNC_2(VAR_35->regmap, VAR_26,
      VAR_27,
      VAR_36->bridge_immediate_off ?
    VAR_27 : 0);
 FUNC_2(VAR_35->regmap, VAR_26,
      VAR_29,
      VAR_36->noise_shape_dc_cut ?
    VAR_29 : 0);
 FUNC_2(VAR_35->regmap, VAR_26,
      VAR_30,
      VAR_36->powerdown_master_vol ?
    VAR_30: 0);

 FUNC_2(VAR_35->regmap, VAR_31,
      VAR_32,
      VAR_36->powerdown_delay_divider
    << VAR_33);


 for (VAR_37 = 4; VAR_37 <= 49; VAR_37 += 5)
  VAR_35->coef_shadow[VAR_37] = 0x400000;
 for (VAR_37 = 50; VAR_37 <= 54; VAR_37++)
  VAR_35->coef_shadow[VAR_37] = 0x7fffff;
 VAR_35->coef_shadow[55] = 0x5a9df7;
 VAR_35->coef_shadow[56] = 0x7fffff;
 VAR_35->coef_shadow[59] = 0x7fffff;
 VAR_35->coef_shadow[60] = 0x400000;
 VAR_35->coef_shadow[61] = 0x400000;

 FUNC_5(VAR_34, VAR_0);

 FUNC_3(FUNC_0(VAR_35->supplies), VAR_35->supplies);

 return 0;
}
