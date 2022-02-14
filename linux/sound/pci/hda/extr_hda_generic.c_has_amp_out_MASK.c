
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int * path; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_2, struct nid_path *VAR_3, int VAR_4)
{
 hda_nid_t VAR_5 = VAR_3->path[VAR_4];
 unsigned int VAR_6 = FUNC_0(VAR_2, VAR_5);
 unsigned int VAR_7 = FUNC_1(VAR_6);

 if (!(VAR_6 & VAR_0))
  return 0;
 if (VAR_7 == VAR_1 && !VAR_4)
  return 0;
 return 1;
}
