
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int depth; scalar_t__* path; int active; int pin_fixed; } ;
struct TYPE_2__ {scalar_t__* hp_out_nid; scalar_t__* extra_out_nid; } ;
struct hda_gen_spec {scalar_t__* private_dac_nids; int mixer_nid; TYPE_1__ multiout; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ FUNC_0 (struct nid_path*,int ) ;
 struct nid_path* FUNC_1 (struct hda_codec*,scalar_t__,scalar_t__,int ) ;
 struct nid_path* FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 struct nid_path *VAR_3;
 hda_nid_t VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_3 || !VAR_3->depth ||
     FUNC_0(VAR_3, VAR_2->mixer_nid))
  return 0;
 VAR_4 = VAR_3->path[0];
 VAR_5 = VAR_2->private_dac_nids[0];
 VAR_6 = VAR_3->path[VAR_3->depth - 1];
 VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_6, VAR_2->mixer_nid);
 if (!VAR_3) {
  if (VAR_5 != VAR_4)
   VAR_5 = VAR_4;
  else if (VAR_2->multiout.hp_out_nid[0])
   VAR_5 = VAR_2->multiout.hp_out_nid[0];
  else if (VAR_2->multiout.extra_out_nid[0])
   VAR_5 = VAR_2->multiout.extra_out_nid[0];
  else
   VAR_5 = 0;
  if (VAR_5)
   VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_6,
          VAR_2->mixer_nid);
 }
 if (!VAR_3)
  return 0;

 VAR_3->active = 0;
 VAR_3->pin_fixed = 1;
 return FUNC_3(VAR_0, VAR_3);
}
