
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8916_wcd_analog_priv {int hphl_jack_type_normally_open; int gnd_jack_type_normally_open; int mbhc_btn_enabled; int * vref_btn_micb; int * vref_btn_cs; int micbias_mv; void* micbias2_cap_mode; void* micbias1_cap_mode; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,char*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
           struct pm8916_wcd_analog_priv *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_3->of_node, "qcom,micbias1-ext-cap"))
  VAR_4->micbias1_cap_mode = VAR_1;
 else
  VAR_4->micbias1_cap_mode = VAR_2;

 if (FUNC_1(VAR_3->of_node, "qcom,micbias2-ext-cap"))
  VAR_4->micbias2_cap_mode = VAR_1;
 else
  VAR_4->micbias2_cap_mode = VAR_2;

 FUNC_2(VAR_3->of_node, "qcom,micbias-lvl",
        &VAR_4->micbias_mv);

 if (FUNC_1(VAR_3->of_node,
      "qcom,hphl-jack-type-normally-open"))
  VAR_4->hphl_jack_type_normally_open = 1;
 else
  VAR_4->hphl_jack_type_normally_open = 0;

 if (FUNC_1(VAR_3->of_node,
      "qcom,gnd-jack-type-normally-open"))
  VAR_4->gnd_jack_type_normally_open = 1;
 else
  VAR_4->gnd_jack_type_normally_open = 0;

 VAR_4->mbhc_btn_enabled = 1;
 VAR_5 = FUNC_3(VAR_3->of_node,
       "qcom,mbhc-vthreshold-low",
       &VAR_4->vref_btn_cs[0],
       VAR_0);
 if (VAR_5 < 0) {
  VAR_4->mbhc_btn_enabled = 0;
 } else {
  VAR_5 = FUNC_3(VAR_3->of_node,
        "qcom,mbhc-vthreshold-high",
        &VAR_4->vref_btn_micb[0],
        VAR_0);
  if (VAR_5 < 0)
   VAR_4->mbhc_btn_enabled = 0;
 }

 if (!VAR_4->mbhc_btn_enabled)
  FUNC_0(VAR_3,
   "DT property missing, MBHC btn detection disabled\n");


 return 0;
}
