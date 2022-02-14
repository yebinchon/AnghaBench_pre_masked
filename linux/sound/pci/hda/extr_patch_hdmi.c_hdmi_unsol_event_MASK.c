
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hda_codec*,char*,int) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,unsigned int) ;
 int FUNC_3 (struct hda_codec*,unsigned int) ;
 int FUNC_4 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = VAR_4 >> VAR_2;
 int VAR_6 = (VAR_4 & VAR_0) >> VAR_1;

 if (FUNC_1(VAR_3))
  return;

 if (!FUNC_4(VAR_3, VAR_5)) {
  FUNC_0(VAR_3, "Unexpected HDMI event tag 0x%x\n", VAR_5);
  return;
 }

 if (VAR_6 == 0)
  FUNC_2(VAR_3, VAR_4);
 else
  FUNC_3(VAR_3, VAR_4);
}
