
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int active; scalar_t__* path; } ;
struct hda_gen_spec {int paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,scalar_t__,scalar_t__ const,int ) ;
 int FUNC_1 (struct nid_path*,int ,int) ;
 struct nid_path* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1, hda_nid_t VAR_2,
      int VAR_3, const hda_nid_t *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_1->spec;
 struct nid_path *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (!VAR_4[VAR_7])
   break;
  if (FUNC_0(VAR_1, VAR_2, VAR_4[VAR_7], 0))
   continue;
  VAR_6 = FUNC_2(&VAR_5->paths);
  if (!VAR_6)
   return -VAR_0;
  FUNC_1(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->depth = 2;
  VAR_6->path[0] = VAR_2;
  VAR_6->path[1] = VAR_4[VAR_7];
  VAR_6->active = 1;
 }
 return 0;
}
