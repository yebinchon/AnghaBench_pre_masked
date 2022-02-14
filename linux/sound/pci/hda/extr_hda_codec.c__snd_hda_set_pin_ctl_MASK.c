
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_3 (struct hda_codec*,int ,unsigned int) ;

int FUNC_4(struct hda_codec *VAR_1, hda_nid_t VAR_2,
    unsigned int VAR_3, bool VAR_4)
{
 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return FUNC_2(VAR_1, VAR_2, 0,
    VAR_0, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, 0,
        VAR_0, VAR_3);
}
