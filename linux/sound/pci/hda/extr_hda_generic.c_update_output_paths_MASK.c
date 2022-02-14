
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int active; } ;
struct hda_gen_spec {int aamix_mode; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,struct nid_path*,int ,int ) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int const) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, int VAR_1,
    const int *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_0->spec;
 struct nid_path *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_0, VAR_2[VAR_5]);
  if (VAR_4)
   FUNC_0(VAR_0, VAR_4, VAR_4->active,
           VAR_3->aamix_mode);
 }
}
