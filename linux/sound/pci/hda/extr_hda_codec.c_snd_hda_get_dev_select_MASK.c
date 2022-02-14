
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dp_mst; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;

int FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2)
{

 if (!VAR_1->dp_mst)
  return 0;

 return FUNC_0(VAR_1, VAR_2, 0, VAR_0, 0);
}
