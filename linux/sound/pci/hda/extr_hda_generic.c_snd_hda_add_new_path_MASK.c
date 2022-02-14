
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int dummy; } ;
struct TYPE_2__ {int used; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 struct nid_path* FUNC_0 (struct hda_codec*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct nid_path*,int ,int) ;
 struct nid_path* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct hda_codec*,scalar_t__,scalar_t__,int,struct nid_path*) ;

struct nid_path *
FUNC_5(struct hda_codec *VAR_0, hda_nid_t VAR_1,
       hda_nid_t VAR_2, int VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_0->spec;
 struct nid_path *VAR_5;

 if (VAR_1 && VAR_2 && !FUNC_1(VAR_0, VAR_1, VAR_2))
  return ((void*)0);


 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(&VAR_4->paths);
 if (!VAR_5)
  return ((void*)0);
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 if (FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5))
  return VAR_5;

 VAR_4->paths.used--;
 return ((void*)0);
}
