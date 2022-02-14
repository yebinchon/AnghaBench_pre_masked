
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int active; } ;
struct hda_gen_spec {int mixer_nid; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,scalar_t__ const) ;
 struct nid_path* FUNC_1 (struct hda_codec*,scalar_t__,scalar_t__ const,int ) ;
 int FUNC_2 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static bool FUNC_3(struct hda_codec *VAR_0, int VAR_1,
   const hda_nid_t *VAR_2, hda_nid_t *VAR_3, int *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_0->spec;
 int VAR_6;
 bool VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct nid_path *VAR_8;
  hda_nid_t VAR_9;
  if (VAR_3[VAR_6])
   continue;
  VAR_9 = FUNC_0(VAR_0, VAR_2[VAR_6]);
  if (!VAR_9)
   continue;
  VAR_8 = FUNC_1(VAR_0, VAR_9, VAR_2[VAR_6],
         -VAR_5->mixer_nid);
  if (!VAR_8 && !VAR_6 && VAR_5->mixer_nid)
   VAR_8 = FUNC_1(VAR_0, VAR_9, VAR_2[VAR_6], 0);
  if (VAR_8) {
   VAR_3[VAR_6] = VAR_9;
   VAR_7 = 1;

   VAR_8->active = 1;
   VAR_4[VAR_6] = FUNC_2(VAR_0, VAR_8);
  }
 }
 return VAR_7;
}
