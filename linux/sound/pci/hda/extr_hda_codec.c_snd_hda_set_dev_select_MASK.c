
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dp_mst; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

int FUNC_2(struct hda_codec *VAR_2, hda_nid_t VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;


 if (!VAR_2->dp_mst)
  return 0;


 VAR_6 = FUNC_1(VAR_2, VAR_3) + 1;




 if (VAR_6 == 1)
  return 0;




 if (VAR_6 <= VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, 0,
   VAR_0, VAR_4);

 return VAR_5;
}
