
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nid_path {int active; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_3__ {int dig_outs; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct ad198x_spec {int * smux_paths; TYPE_2__ gen; } ;


 int FUNC_0 (struct hda_codec*,struct nid_path*,int ,int) ;
 int FUNC_1 (struct hda_codec*) ;
 struct nid_path* FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0)
{
 struct ad198x_spec *VAR_1 = VAR_0->spec;
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 if (!VAR_1->gen.autocfg.dig_outs)
  return 0;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  struct nid_path *VAR_4;
  VAR_4 = FUNC_2(VAR_0, VAR_1->smux_paths[VAR_2]);
  if (VAR_4)
   FUNC_0(VAR_0, VAR_4, VAR_4->active, 0);
 }

 return 0;
}
