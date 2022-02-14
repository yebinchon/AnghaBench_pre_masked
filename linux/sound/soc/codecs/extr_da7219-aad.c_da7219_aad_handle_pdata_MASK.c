
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {struct da7219_pdata* pdata; struct da7219_aad_priv* aad; } ;
struct da7219_pdata {struct da7219_aad_pdata* aad_pdata; } ;
struct da7219_aad_priv {int micbias_pulse_lvl; int btn_cfg; int micbias_pulse_time; int irq; } ;
struct da7219_aad_pdata {int micbias_pulse_lvl; int btn_cfg; int mic_det_thr; int jack_ins_deb; int jack_det_rate; int jack_rem_deb; int btn_avg; int adc_1bit_rpt; int c_mic_btn_thr; int b_c_btn_thr; int d_b_btn_thr; int a_d_btn_thr; int micbias_pulse_time; int irq; } ;
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
 struct da7219_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_21)
{
 struct da7219_priv *VAR_22 = FUNC_0(VAR_21);
 struct da7219_aad_priv *VAR_23 = VAR_22->aad;
 struct da7219_pdata *VAR_24 = VAR_22->pdata;

 if ((VAR_24) && (VAR_24->aad_pdata)) {
  struct da7219_aad_pdata *VAR_25 = VAR_24->aad_pdata;
  u8 VAR_26, VAR_27;

  VAR_23->irq = VAR_25->irq;

  switch (VAR_25->micbias_pulse_lvl) {
  case 133:
  case 132:
   VAR_23->micbias_pulse_lvl =
    (VAR_25->micbias_pulse_lvl <<
     VAR_18);
   break;
  default:
   break;
  }

  VAR_23->micbias_pulse_time = VAR_25->micbias_pulse_time;

  switch (VAR_25->btn_cfg) {
  case 153:
  case 150:
  case 155:
  case 151:
  case 156:
  case 154:
  case 152:
   VAR_23->btn_cfg = (VAR_25->btn_cfg <<
      VAR_11);
  }

  VAR_26 = 0;
  VAR_27 = 0;
  switch (VAR_25->mic_det_thr) {
  case 130:
  case 129:
  case 128:
  case 131:
   VAR_26 |= (VAR_25->mic_det_thr <<
    VAR_20);
   VAR_27 |= VAR_19;
  }
  FUNC_1(VAR_21, VAR_0, VAR_27, VAR_26);

  VAR_26 = 0;
  VAR_27 = 0;
  switch (VAR_25->jack_ins_deb) {
  case 138:
  case 144:
  case 141:
  case 139:
  case 145:
  case 142:
  case 140:
  case 143:
   VAR_26 |= (VAR_25->jack_ins_deb <<
    VAR_13);
   VAR_27 |= VAR_12;
  }
  switch (VAR_25->jack_det_rate) {
  case 147:
  case 146:
  case 149:
  case 148:
   VAR_26 |= (VAR_25->jack_det_rate <<
    VAR_17);
   VAR_27 |= VAR_16;
  }
  switch (VAR_25->jack_rem_deb) {
  case 136:
  case 134:
  case 137:
  case 135:
   VAR_26 |= (VAR_25->jack_rem_deb <<
    VAR_15);
   VAR_27 |= VAR_14;
  }
  FUNC_1(VAR_21, VAR_1, VAR_27, VAR_26);

  FUNC_2(VAR_21, VAR_2,
         VAR_25->a_d_btn_thr);
  FUNC_2(VAR_21, VAR_3,
         VAR_25->d_b_btn_thr);
  FUNC_2(VAR_21, VAR_4,
         VAR_25->b_c_btn_thr);
  FUNC_2(VAR_21, VAR_5,
         VAR_25->c_mic_btn_thr);

  VAR_26 = 0;
  VAR_27 = 0;
  switch (VAR_25->btn_avg) {
  case 160:
  case 159:
  case 158:
  case 157:
   VAR_26 |= (VAR_25->btn_avg <<
    VAR_10);
   VAR_27 |= VAR_9;
  }
  switch (VAR_25->adc_1bit_rpt) {
  case 164:
  case 163:
  case 162:
  case 161:
   VAR_26 |= (VAR_25->adc_1bit_rpt <<
          VAR_8);
   VAR_27 |= VAR_7;
  }
  FUNC_1(VAR_21, VAR_6, VAR_27, VAR_26);
 }
}
