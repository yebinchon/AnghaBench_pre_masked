
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int registered; } ;


 int FUNC_0 (struct hda_codec*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hda_codec*) ;

void FUNC_5(struct hda_codec *VAR_0)
{
 if (VAR_0->registered)
  return;
 if (FUNC_1(FUNC_2(VAR_0))) {
  FUNC_0(VAR_0, 1);
  FUNC_3(FUNC_2(VAR_0));

  FUNC_4(VAR_0);
  VAR_0->registered = 1;
 }
}
