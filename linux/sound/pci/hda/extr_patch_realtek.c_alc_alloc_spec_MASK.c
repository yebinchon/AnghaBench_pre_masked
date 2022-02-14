
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int single_adc_amp; int spdif_status_reset; int patch_ops; struct alc_spec* spec; } ;
struct TYPE_2__ {int own_eapd_ctl; int mixer_nid; } ;
struct alc_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_2 ;
 int FUNC_1 (struct alc_spec*) ;
 struct alc_spec* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 struct alc_spec *VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;
 VAR_3->spec = VAR_5;
 FUNC_3(&VAR_5->gen);
 VAR_5->gen.mixer_nid = VAR_4;
 VAR_5->gen.own_eapd_ctl = 1;
 VAR_3->single_adc_amp = 1;

 VAR_3->spdif_status_reset = 1;
 VAR_3->patch_ops = VAR_2;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5);
  return VAR_6;
 }
 return 0;
}
