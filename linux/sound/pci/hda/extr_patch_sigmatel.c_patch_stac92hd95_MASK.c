
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int own_eapd_ctl; int power_down_unused; int beep_nid; } ;
struct sigmatel_spec {scalar_t__ default_polarity; int num_pwrs; int pwr_nids; TYPE_2__ gen; scalar_t__ linear_tone_beep; } ;
struct TYPE_3__ {int power_caps; } ;
struct hda_codec {int power_save_node; int proc_widget_hook; struct sigmatel_spec* spec; TYPE_1__ core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_8)
{
 struct sigmatel_spec *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_8->core.power_caps &= ~VAR_0;

 VAR_9 = VAR_8->spec;
 VAR_8->power_save_node = 1;
 VAR_9->linear_tone_beep = 0;
 VAR_9->gen.own_eapd_ctl = 1;
 VAR_9->gen.power_down_unused = 1;

 VAR_9->gen.beep_nid = 0x19;
 VAR_9->pwr_nids = VAR_6;
 VAR_9->num_pwrs = FUNC_0(VAR_6);
 VAR_9->default_polarity = 0;

 FUNC_3(VAR_8, VAR_5, VAR_3,
      VAR_4);
 FUNC_2(VAR_8, VAR_1);

 FUNC_6(VAR_8);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0) {
  FUNC_4(VAR_8);
  return VAR_10;
 }

 VAR_8->proc_widget_hook = VAR_7;

 FUNC_2(VAR_8, VAR_2);

 return 0;
}
