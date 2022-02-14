
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int num_all_dacs; int * all_dacs; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static hda_nid_t FUNC_3(struct hda_codec *VAR_1, hda_nid_t VAR_2,
         bool VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_1->spec;
 bool VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_all_dacs; VAR_6++) {
  hda_nid_t VAR_7 = VAR_4->all_dacs[VAR_6];
  if (!VAR_7 || FUNC_1(VAR_1, VAR_7))
   continue;
  VAR_5 = !!(FUNC_0(VAR_1, VAR_7) & VAR_0);
  if (VAR_3 != VAR_5)
   continue;
  if (FUNC_2(VAR_1, VAR_7, VAR_2))
   return VAR_7;
 }
 return 0;
}
