
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_jack_callback {int dummy; } ;
struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_3__ {int * dig_out_pins; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct cs_spec {scalar_t__ vendor_nid; int spdif_present; int spdif_detect; TYPE_2__ gen; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2,
      struct hda_jack_callback *VAR_3)
{
 struct cs_spec *VAR_4 = VAR_2->spec;
 bool VAR_5 = 0;
 hda_nid_t VAR_6 = VAR_4->gen.autocfg.dig_out_pins[0];


 if (!VAR_4->spdif_detect ||
     VAR_4->vendor_nid != VAR_0)
  return;

 VAR_5 = FUNC_1(VAR_2, VAR_6);
 if (VAR_5 == VAR_4->spdif_present)
  return;

 VAR_4->spdif_present = VAR_5;

 FUNC_2(VAR_2, VAR_6, VAR_5 ? VAR_1 : 0);

 FUNC_0(VAR_2);
}
