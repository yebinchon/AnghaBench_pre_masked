
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_2 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1,
      unsigned int VAR_2, bool VAR_3)
{
 if (!VAR_1)
  return;
 VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_0, VAR_1, VAR_2);
}
