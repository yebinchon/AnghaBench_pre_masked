
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int * path; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static hda_nid_t FUNC_1(struct hda_codec *VAR_2,
           struct nid_path *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_3->depth - 1; VAR_4 >= 0; VAR_4--) {
  if (FUNC_0(VAR_2, VAR_3->path[VAR_4], VAR_1))
   return VAR_3->path[VAR_4];
  if (VAR_4 != VAR_3->depth - 1 && VAR_4 != 0 &&
      FUNC_0(VAR_2, VAR_3->path[VAR_4], VAR_0))
   return VAR_3->path[VAR_4];
 }
 return 0;
}
