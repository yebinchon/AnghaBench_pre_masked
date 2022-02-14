
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dummy; } ;
struct pm8916_wcd_analog_priv {int mbhc_btn0_released; int detect_accessory_type; scalar_t__ mbhc_btn_enabled; scalar_t__ gnd_jack_type_normally_open; scalar_t__ hphl_jack_type_normally_open; struct snd_soc_component* component; } ;


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
 int FUNC_0 (struct pm8916_wcd_analog_priv*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pm8916_wcd_analog_priv *VAR_24)
{
 struct snd_soc_component *VAR_25 = VAR_24->component;
 bool VAR_26 = 0;
 u32 VAR_27 = 0;
 u32 VAR_28;

 FUNC_3(VAR_25, VAR_5,
        VAR_10 |
        VAR_12 |
        VAR_13 |
        VAR_11);

 if (VAR_24->hphl_jack_type_normally_open)
  VAR_27 |= VAR_1;

 if (VAR_24->gnd_jack_type_normally_open)
  VAR_27 |= VAR_0;

 FUNC_3(VAR_25, VAR_6,
        VAR_9 |
        VAR_8 |
        VAR_27 |
        VAR_7);


 FUNC_3(VAR_25, VAR_2,
        VAR_4 |
        VAR_3);


 FUNC_2(VAR_25, VAR_16,
       VAR_20,
       VAR_19);

 if (FUNC_1(VAR_25, VAR_14) & VAR_15)
  VAR_26 = 1;

 FUNC_0(VAR_24, VAR_26);

 VAR_28 = VAR_23;
 if (VAR_24->mbhc_btn_enabled)
  VAR_28 |= VAR_21 | VAR_22;

 FUNC_2(VAR_25, VAR_17, VAR_28, 0);
 FUNC_2(VAR_25, VAR_18, VAR_28, VAR_28);
 VAR_24->mbhc_btn0_released = 0;
 VAR_24->detect_accessory_type = 1;
}
