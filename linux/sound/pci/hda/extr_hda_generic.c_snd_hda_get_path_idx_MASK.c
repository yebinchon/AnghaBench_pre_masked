
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int dummy; } ;
struct TYPE_2__ {int used; struct nid_path* list; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int ssize_t ;



int FUNC_0(struct hda_codec *VAR_0, struct nid_path *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 struct nid_path *VAR_3 = VAR_2->paths.list;
 ssize_t VAR_4;

 if (!VAR_2->paths.used)
  return 0;
 VAR_4 = VAR_1 - VAR_3;
 if (VAR_4 < 0 || VAR_4 >= VAR_2->paths.used)
  return 0;
 return VAR_4 + 1;
}
