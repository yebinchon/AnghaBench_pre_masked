
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {scalar_t__* path; } ;
struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 struct nid_path* FUNC_0 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, int VAR_1,
          hda_nid_t *VAR_2, int *VAR_3)
{
 struct nid_path *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5])
   continue;
  VAR_4 = FUNC_0(VAR_0, VAR_3[VAR_5]);
  if (!VAR_4)
   continue;
  VAR_2[VAR_5] = VAR_4->path[0];
 }
}
