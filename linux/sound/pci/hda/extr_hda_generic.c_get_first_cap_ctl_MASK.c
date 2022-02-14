
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {unsigned int* ctls; } ;
struct hda_codec {int dummy; } ;


 struct nid_path* FUNC_0 (struct hda_codec*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_0, int VAR_1, int VAR_2)
{
 struct nid_path *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_0, 0, VAR_1);
 if (!VAR_3)
  return 0;
 VAR_4 = VAR_3->ctls[VAR_2];
 if (!VAR_4)
  return 0;
 for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++) {
  VAR_3 = FUNC_0(VAR_0, 0, VAR_5);
  if (VAR_3 && VAR_3->ctls[VAR_2] == VAR_4)
   return 0;
 }
 return VAR_4;
}
