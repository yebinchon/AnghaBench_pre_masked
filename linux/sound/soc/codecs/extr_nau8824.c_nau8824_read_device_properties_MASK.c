
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8824 {int jkdet_polarity; int micbias_voltage; int vref_impedance; int sar_threshold_num; int* sar_threshold; int sar_hysteresis; int sar_voltage; int sar_compare_time; int sar_sampling_time; int key_debounce; int jack_eject_debounce; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int*) ;
 int FUNC_1 (struct device*,char*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
 struct nau8824 *VAR_1) {
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "nuvoton,jkdet-polarity",
  &VAR_1->jkdet_polarity);
 if (VAR_2)
  VAR_1->jkdet_polarity = 1;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,micbias-voltage",
  &VAR_1->micbias_voltage);
 if (VAR_2)
  VAR_1->micbias_voltage = 6;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,vref-impedance",
  &VAR_1->vref_impedance);
 if (VAR_2)
  VAR_1->vref_impedance = 2;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,sar-threshold-num",
  &VAR_1->sar_threshold_num);
 if (VAR_2)
  VAR_1->sar_threshold_num = 4;
 VAR_2 = FUNC_1(VAR_0, "nuvoton,sar-threshold",
  VAR_1->sar_threshold, VAR_1->sar_threshold_num);
 if (VAR_2) {
  VAR_1->sar_threshold[0] = 0x0a;
  VAR_1->sar_threshold[1] = 0x14;
  VAR_1->sar_threshold[2] = 0x26;
  VAR_1->sar_threshold[3] = 0x73;
 }
 VAR_2 = FUNC_0(VAR_0, "nuvoton,sar-hysteresis",
  &VAR_1->sar_hysteresis);
 if (VAR_2)
  VAR_1->sar_hysteresis = 0;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,sar-voltage",
  &VAR_1->sar_voltage);
 if (VAR_2)
  VAR_1->sar_voltage = 6;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,sar-compare-time",
  &VAR_1->sar_compare_time);
 if (VAR_2)
  VAR_1->sar_compare_time = 1;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,sar-sampling-time",
  &VAR_1->sar_sampling_time);
 if (VAR_2)
  VAR_1->sar_sampling_time = 1;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,short-key-debounce",
  &VAR_1->key_debounce);
 if (VAR_2)
  VAR_1->key_debounce = 0;
 VAR_2 = FUNC_0(VAR_0, "nuvoton,jack-eject-debounce",
  &VAR_1->jack_eject_debounce);
 if (VAR_2)
  VAR_1->jack_eject_debounce = 1;

 return 0;
}
