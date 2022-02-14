
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int* path; } ;
struct hda_gen_spec {int out_vol_mask; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int,int ) ;

__attribute__((used)) static hda_nid_t FUNC_1(struct hda_codec *VAR_1,
          struct nid_path *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_1->spec;
 int VAR_4;

 for (VAR_4 = VAR_2->depth - 1; VAR_4 >= 0; VAR_4--) {
  hda_nid_t VAR_5 = VAR_2->path[VAR_4];
  if ((VAR_3->out_vol_mask >> VAR_5) & 1)
   continue;
  if (FUNC_0(VAR_1, VAR_5, VAR_0))
   return VAR_5;
 }
 return 0;
}
