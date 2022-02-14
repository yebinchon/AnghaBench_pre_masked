
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int shared_out_nid; int shared_mic_nid; } ;
typedef int hda_nid_t ;





__attribute__((used)) static bool FUNC_0(struct hda_codec *VAR_0,
         hda_nid_t VAR_1,
         hda_nid_t *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_0->spec;
 hda_nid_t VAR_4;

 switch (VAR_1) {
 case 128:
  VAR_4 = VAR_3->shared_out_nid;
  break;
 case 129:
  VAR_4 = VAR_3->shared_mic_nid;
  break;
 default:
  return 0;
 }

 if (VAR_2)
  *VAR_2 = VAR_4;

 return 1;
}
