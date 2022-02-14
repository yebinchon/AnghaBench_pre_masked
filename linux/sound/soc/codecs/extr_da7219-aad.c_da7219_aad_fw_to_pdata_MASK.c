
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
struct snd_soc_component {struct device* dev; } ;
struct i2c_client {int irq; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct da7219_aad_pdata {int a_d_btn_thr; int d_b_btn_thr; int b_c_btn_thr; int c_mic_btn_thr; int adc_1bit_rpt; int btn_avg; int jack_rem_deb; int jack_det_rate; int jack_ins_deb; int mic_det_thr; int btn_cfg; scalar_t__ micbias_pulse_time; int micbias_pulse_lvl; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_3 (struct snd_soc_component*,char const*) ;
 int FUNC_4 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_5 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_6 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_7 (struct snd_soc_component*,scalar_t__) ;
 struct fwnode_handle* FUNC_8 (struct device*,char*) ;
 struct da7219_aad_pdata* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct fwnode_handle*,char*,char const**) ;
 scalar_t__ FUNC_11 (struct fwnode_handle*,char*,scalar_t__*) ;
 struct i2c_client* FUNC_12 (struct device*) ;

__attribute__((used)) static struct da7219_aad_pdata *FUNC_13(struct snd_soc_component *VAR_9)
{
 struct device *VAR_10 = VAR_9->dev;
 struct i2c_client *VAR_11 = FUNC_12(VAR_10);
 struct fwnode_handle *VAR_12;
 struct da7219_aad_pdata *VAR_13;
 const char *VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_8(VAR_10, "da7219_aad");
 if (!VAR_12)
  return ((void*)0);

 VAR_13 = FUNC_9(VAR_10, sizeof(*VAR_13), VAR_8);
 if (!VAR_13)
  return ((void*)0);

 VAR_13->irq = VAR_11->irq;

 if (FUNC_11(VAR_12, "dlg,micbias-pulse-lvl",
         &VAR_15) >= 0)
  VAR_13->micbias_pulse_lvl =
   FUNC_7(VAR_9, VAR_15);
 else
  VAR_13->micbias_pulse_lvl = VAR_6;

 if (FUNC_11(VAR_12, "dlg,micbias-pulse-time",
         &VAR_15) >= 0)
  VAR_13->micbias_pulse_time = VAR_15;

 if (FUNC_11(VAR_12, "dlg,btn-cfg", &VAR_15) >= 0)
  VAR_13->btn_cfg = FUNC_2(VAR_9, VAR_15);
 else
  VAR_13->btn_cfg = VAR_2;

 if (FUNC_11(VAR_12, "dlg,mic-det-thr", &VAR_15) >= 0)
  VAR_13->mic_det_thr =
   FUNC_6(VAR_9, VAR_15);
 else
  VAR_13->mic_det_thr = VAR_7;

 if (FUNC_11(VAR_12, "dlg,jack-ins-deb", &VAR_15) >= 0)
  VAR_13->jack_ins_deb =
   FUNC_4(VAR_9, VAR_15);
 else
  VAR_13->jack_ins_deb = VAR_4;

 if (!FUNC_10(VAR_12, "dlg,jack-det-rate", &VAR_14))
  VAR_13->jack_det_rate =
   FUNC_3(VAR_9, VAR_14);
 else
  VAR_13->jack_det_rate = VAR_3;

 if (FUNC_11(VAR_12, "dlg,jack-rem-deb", &VAR_15) >= 0)
  VAR_13->jack_rem_deb =
   FUNC_5(VAR_9, VAR_15);
 else
  VAR_13->jack_rem_deb = VAR_5;

 if (FUNC_11(VAR_12, "dlg,a-d-btn-thr", &VAR_15) >= 0)
  VAR_13->a_d_btn_thr = (u8) VAR_15;
 else
  VAR_13->a_d_btn_thr = 0xA;

 if (FUNC_11(VAR_12, "dlg,d-b-btn-thr", &VAR_15) >= 0)
  VAR_13->d_b_btn_thr = (u8) VAR_15;
 else
  VAR_13->d_b_btn_thr = 0x16;

 if (FUNC_11(VAR_12, "dlg,b-c-btn-thr", &VAR_15) >= 0)
  VAR_13->b_c_btn_thr = (u8) VAR_15;
 else
  VAR_13->b_c_btn_thr = 0x21;

 if (FUNC_11(VAR_12, "dlg,c-mic-btn-thr", &VAR_15) >= 0)
  VAR_13->c_mic_btn_thr = (u8) VAR_15;
 else
  VAR_13->c_mic_btn_thr = 0x3E;

 if (FUNC_11(VAR_12, "dlg,btn-avg", &VAR_15) >= 0)
  VAR_13->btn_avg = FUNC_1(VAR_9, VAR_15);
 else
  VAR_13->btn_avg = VAR_1;

 if (FUNC_11(VAR_12, "dlg,adc-1bit-rpt", &VAR_15) >= 0)
  VAR_13->adc_1bit_rpt =
   FUNC_0(VAR_9, VAR_15);
 else
  VAR_13->adc_1bit_rpt = VAR_0;

 return VAR_13;
}
