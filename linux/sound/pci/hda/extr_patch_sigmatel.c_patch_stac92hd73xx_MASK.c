
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mixer_nid; int beep_nid; int own_eapd_ctl; int power_down_unused; } ;
struct sigmatel_spec {int have_spdif_mux; int aloopback_mask; int aloopback_shift; int eapd_mask; int gpio_mask; int gpio_dir; int gpio_data; int eapd_switch; int volknob_init; TYPE_2__ gen; int pwr_nids; int num_pwrs; int * aloopback_ctl; scalar_t__ linear_tone_beep; } ;
struct TYPE_3__ {int vendor_id; } ;
struct hda_codec {int power_save_node; int proc_widget_hook; TYPE_1__ core; struct sigmatel_spec* spec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,char*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int) ;
 int FUNC_7 (struct hda_codec*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_11)
{
 struct sigmatel_spec *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = VAR_11->spec;



 if ((VAR_11->core.vendor_id & 0xfffffff0) != 0x111d7670)
  VAR_11->power_save_node = 1;
 VAR_12->linear_tone_beep = 0;
 VAR_12->gen.mixer_nid = 0x1d;
 VAR_12->have_spdif_mux = 1;

 VAR_14 = FUNC_6(VAR_11, 0x0a) - 1;
 if (VAR_14 < 3 || VAR_14 > 5) {
  FUNC_2(VAR_11,
      "Could not determine number of channels defaulting to DAC count\n");
  VAR_14 = 5;
 }

 switch (VAR_14) {
 case 0x3:
  VAR_12->aloopback_ctl = &VAR_3;
  break;
 case 0x4:
  VAR_12->aloopback_ctl = &VAR_4;
  break;
 case 0x5:
  VAR_12->aloopback_ctl = &VAR_2;
  break;
 }

 VAR_12->aloopback_mask = 0x01;
 VAR_12->aloopback_shift = 8;

 VAR_12->gen.beep_nid = 0x1c;


 VAR_12->eapd_mask = VAR_12->gpio_mask = VAR_12->gpio_dir = 0x1;
 VAR_12->gpio_data = 0x01;

 VAR_12->eapd_switch = 1;

 VAR_12->num_pwrs = FUNC_0(VAR_9);
 VAR_12->pwr_nids = VAR_9;

 VAR_12->gen.own_eapd_ctl = 1;
 VAR_12->gen.power_down_unused = 1;

 FUNC_7(VAR_11, VAR_8, VAR_6,
      VAR_7);
 FUNC_5(VAR_11, VAR_0);

 if (!VAR_12->volknob_init)
  FUNC_4(VAR_11, VAR_5);

 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13 < 0) {
  FUNC_8(VAR_11);
  return VAR_13;
 }




 if (VAR_12->eapd_switch && !FUNC_3(VAR_11))
  VAR_12->eapd_switch = 0;

 VAR_11->proc_widget_hook = VAR_10;

 FUNC_5(VAR_11, VAR_1);

 return 0;
}
