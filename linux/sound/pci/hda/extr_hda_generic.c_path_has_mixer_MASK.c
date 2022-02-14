
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {scalar_t__* ctls; } ;
struct hda_codec {int dummy; } ;


 struct nid_path* FUNC_0 (struct hda_codec*,int) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_0, int VAR_1, int VAR_2)
{
 struct nid_path *VAR_3 = FUNC_0(VAR_0, VAR_1);
 return VAR_3 && VAR_3->ctls[VAR_2];
}
