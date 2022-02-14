
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int active; int depth; int * idx; scalar_t__* multi; int * path; } ;
struct hda_gen_spec {scalar_t__ power_down_unused; } ;
struct hda_codec {scalar_t__ power_save_node; struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct nid_path*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,struct nid_path*,int,int) ;
 scalar_t__ FUNC_2 (struct hda_codec*,struct nid_path*,int) ;
 scalar_t__ FUNC_3 (struct hda_codec*,struct nid_path*,int) ;
 int FUNC_4 (struct hda_codec*,struct nid_path*,scalar_t__) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int ) ;

void FUNC_6(struct hda_codec *VAR_1, struct nid_path *VAR_2,
      bool VAR_3, bool VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_1->spec;
 int VAR_6;

 VAR_2->active = VAR_3;


 if (VAR_3 && (VAR_5->power_down_unused || VAR_1->power_save_node))
  FUNC_4(VAR_1, VAR_2, VAR_1->power_save_node);

 for (VAR_6 = VAR_2->depth - 1; VAR_6 >= 0; VAR_6--) {
  hda_nid_t VAR_7 = VAR_2->path[VAR_6];

  if (VAR_3 && VAR_2->multi[VAR_6])
   FUNC_5(VAR_1, VAR_7, 0,
         VAR_0,
         VAR_2->idx[VAR_6]);
  if (FUNC_2(VAR_1, VAR_2, VAR_6))
   FUNC_0(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4);
  if (FUNC_3(VAR_1, VAR_2, VAR_6))
   FUNC_1(VAR_1, VAR_2, VAR_6, VAR_3);
 }
}
