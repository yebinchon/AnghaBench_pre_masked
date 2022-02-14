
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {scalar_t__ active; } ;
struct hda_gen_spec {scalar_t__ power_down_unused; } ;
struct hda_codec {scalar_t__ power_save_node; struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,struct nid_path*,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, struct nid_path *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;

 if (!(VAR_2->power_down_unused || VAR_0->power_save_node) || VAR_1->active)
  return;
 FUNC_1(VAR_0, FUNC_0(VAR_0, VAR_1, 1));
}
