
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {size_t depth; int * path; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,int ,int ,int,struct nid_path*,int) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1,
       hda_nid_t VAR_2, int VAR_3,
       struct nid_path *VAR_4)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1)) {
  VAR_4->path[VAR_4->depth] = VAR_2;
  VAR_4->depth++;
  return 1;
 }
 return 0;
}
