
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int jkdet_enable; int jkdet_pull_enable; int jkdet_pull_up; int jkdet_polarity; int micbias_voltage; int vref_impedance; int sar_threshold_num; int sar_hysteresis; int sar_voltage; int sar_compare_time; int sar_sampling_time; int key_debounce; int jack_insert_debounce; int jack_eject_debounce; int xtalk_enable; int * sar_threshold; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct nau8825 *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = VAR_0->dev;

 FUNC_0(VAR_2, "jkdet-enable:         %d\n", VAR_0->jkdet_enable);
 FUNC_0(VAR_2, "jkdet-pull-enable:    %d\n", VAR_0->jkdet_pull_enable);
 FUNC_0(VAR_2, "jkdet-pull-up:        %d\n", VAR_0->jkdet_pull_up);
 FUNC_0(VAR_2, "jkdet-polarity:       %d\n", VAR_0->jkdet_polarity);
 FUNC_0(VAR_2, "micbias-voltage:      %d\n", VAR_0->micbias_voltage);
 FUNC_0(VAR_2, "vref-impedance:       %d\n", VAR_0->vref_impedance);

 FUNC_0(VAR_2, "sar-threshold-num:    %d\n", VAR_0->sar_threshold_num);
 for (VAR_1 = 0; VAR_1 < VAR_0->sar_threshold_num; VAR_1++)
  FUNC_0(VAR_2, "sar-threshold[%d]=%d\n", VAR_1,
    VAR_0->sar_threshold[VAR_1]);

 FUNC_0(VAR_2, "sar-hysteresis:       %d\n", VAR_0->sar_hysteresis);
 FUNC_0(VAR_2, "sar-voltage:          %d\n", VAR_0->sar_voltage);
 FUNC_0(VAR_2, "sar-compare-time:     %d\n", VAR_0->sar_compare_time);
 FUNC_0(VAR_2, "sar-sampling-time:    %d\n", VAR_0->sar_sampling_time);
 FUNC_0(VAR_2, "short-key-debounce:   %d\n", VAR_0->key_debounce);
 FUNC_0(VAR_2, "jack-insert-debounce: %d\n",
   VAR_0->jack_insert_debounce);
 FUNC_0(VAR_2, "jack-eject-debounce:  %d\n",
   VAR_0->jack_eject_debounce);
 FUNC_0(VAR_2, "crosstalk-enable:     %d\n",
   VAR_0->xtalk_enable);
}
