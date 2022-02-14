
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int FUNC_0 (struct hda_codec*,int ,int,int,unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int,unsigned int,int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int) ;
 int FUNC_3 (struct hda_codec*,int ,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_0, hda_nid_t VAR_1, int VAR_2,
    int VAR_3, int VAR_4, bool VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);
 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6, VAR_5);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6);
 if (!VAR_7)
  return;

 VAR_8 &= VAR_7;
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_8);
}
