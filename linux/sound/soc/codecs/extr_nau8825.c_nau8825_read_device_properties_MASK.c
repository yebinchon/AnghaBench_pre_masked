
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int jkdet_polarity; int micbias_voltage; int vref_impedance; int sar_threshold_num; int* sar_threshold; int sar_hysteresis; int sar_voltage; int sar_compare_time; int sar_sampling_time; int key_debounce; int jack_insert_debounce; int jack_eject_debounce; int * mclk; void* xtalk_enable; void* jkdet_pull_up; void* jkdet_pull_enable; void* jkdet_enable; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int*) ;
 int FUNC_5 (struct device*,char*,int*,int) ;
 int * FUNC_6 (struct device*,char*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3,
 struct nau8825 *VAR_4) {
 int VAR_5;

 VAR_4->jkdet_enable = FUNC_3(VAR_3,
  "nuvoton,jkdet-enable");
 VAR_4->jkdet_pull_enable = FUNC_3(VAR_3,
  "nuvoton,jkdet-pull-enable");
 VAR_4->jkdet_pull_up = FUNC_3(VAR_3,
  "nuvoton,jkdet-pull-up");
 VAR_5 = FUNC_4(VAR_3, "nuvoton,jkdet-polarity",
  &VAR_4->jkdet_polarity);
 if (VAR_5)
  VAR_4->jkdet_polarity = 1;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,micbias-voltage",
  &VAR_4->micbias_voltage);
 if (VAR_5)
  VAR_4->micbias_voltage = 6;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,vref-impedance",
  &VAR_4->vref_impedance);
 if (VAR_5)
  VAR_4->vref_impedance = 2;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,sar-threshold-num",
  &VAR_4->sar_threshold_num);
 if (VAR_5)
  VAR_4->sar_threshold_num = 4;
 VAR_5 = FUNC_5(VAR_3, "nuvoton,sar-threshold",
  VAR_4->sar_threshold, VAR_4->sar_threshold_num);
 if (VAR_5) {
  VAR_4->sar_threshold[0] = 0x08;
  VAR_4->sar_threshold[1] = 0x12;
  VAR_4->sar_threshold[2] = 0x26;
  VAR_4->sar_threshold[3] = 0x73;
 }
 VAR_5 = FUNC_4(VAR_3, "nuvoton,sar-hysteresis",
  &VAR_4->sar_hysteresis);
 if (VAR_5)
  VAR_4->sar_hysteresis = 0;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,sar-voltage",
  &VAR_4->sar_voltage);
 if (VAR_5)
  VAR_4->sar_voltage = 6;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,sar-compare-time",
  &VAR_4->sar_compare_time);
 if (VAR_5)
  VAR_4->sar_compare_time = 1;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,sar-sampling-time",
  &VAR_4->sar_sampling_time);
 if (VAR_5)
  VAR_4->sar_sampling_time = 1;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,short-key-debounce",
  &VAR_4->key_debounce);
 if (VAR_5)
  VAR_4->key_debounce = 3;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,jack-insert-debounce",
  &VAR_4->jack_insert_debounce);
 if (VAR_5)
  VAR_4->jack_insert_debounce = 7;
 VAR_5 = FUNC_4(VAR_3, "nuvoton,jack-eject-debounce",
  &VAR_4->jack_eject_debounce);
 if (VAR_5)
  VAR_4->jack_eject_debounce = 0;
 VAR_4->xtalk_enable = FUNC_3(VAR_3,
  "nuvoton,crosstalk-enable");

 VAR_4->mclk = FUNC_6(VAR_3, "mclk");
 if (FUNC_1(VAR_4->mclk) == -VAR_2) {
  return -VAR_2;
 } else if (FUNC_1(VAR_4->mclk) == -VAR_1) {

  VAR_4->mclk = ((void*)0);
  FUNC_2(VAR_3, "No 'mclk' clock found, assume MCLK is managed externally");
 } else if (FUNC_0(VAR_4->mclk)) {
  return -VAR_0;
 }

 return 0;
}
