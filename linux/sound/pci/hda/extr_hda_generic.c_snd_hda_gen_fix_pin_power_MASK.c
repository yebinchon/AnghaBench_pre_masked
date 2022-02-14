
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int active; int pin_fixed; int stream_enabled; int * path; } ;
struct hda_gen_spec {int paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct nid_path*,int ,int) ;
 struct nid_path* FUNC_1 (int *) ;

int FUNC_2(struct hda_codec *VAR_1, hda_nid_t VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_1->spec;
 struct nid_path *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->paths);
 if (!VAR_4)
  return -VAR_0;
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->depth = 1;
 VAR_4->path[0] = VAR_2;
 VAR_4->active = 1;
 VAR_4->pin_fixed = 1;
 VAR_4->stream_enabled = 1;
 return 0;
}
