
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__* preferred_dacs; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ const hda_nid_t ;



__attribute__((used)) static hda_nid_t FUNC_0(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 const hda_nid_t *VAR_3 = VAR_2->preferred_dacs;

 if (!VAR_3)
  return 0;
 for (; *VAR_3; VAR_3 += 2)
  if (*VAR_3 == VAR_1)
   return VAR_3[1];
 return 0;
}
