
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigmatel_spec {int num_pwrs; int power_map_bits; scalar_t__* pwr_nids; } ;
struct hda_jack_callback {scalar_t__ nid; } ;
struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1,
         struct hda_jack_callback *VAR_2)
{
 struct sigmatel_spec *VAR_3 = VAR_1->spec;
 int VAR_4;

 if (!VAR_3->num_pwrs)
  return;

 if (VAR_2 && VAR_2->nid) {
  FUNC_3(VAR_1, VAR_2->nid,
          FUNC_1(VAR_1, VAR_2->nid),
          1);
  return;
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->num_pwrs; VAR_4++) {
  hda_nid_t VAR_5 = VAR_3->pwr_nids[VAR_4];
  if (!FUNC_2(VAR_1, VAR_5))
   continue;
  FUNC_3(VAR_1, VAR_5,
          FUNC_1(VAR_1, VAR_5),
          0);
 }

 FUNC_0(VAR_1, VAR_1->core.afg, 0,
       VAR_0,
       VAR_3->power_map_bits);
}
