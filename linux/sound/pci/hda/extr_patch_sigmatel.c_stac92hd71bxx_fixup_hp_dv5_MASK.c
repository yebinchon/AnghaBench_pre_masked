
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct hda_codec*,int,int) ;
 unsigned int FUNC_1 (struct hda_codec*,int,int ) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2,
           const struct hda_fixup *VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_2, 0x0d, 0x90170010);
  break;

 case 128:

  VAR_5 = FUNC_1(VAR_2, 0x1, VAR_1);
  VAR_5 &= VAR_0;
  if (VAR_5 >= 6)
   FUNC_2(VAR_2);
  break;
 }
}
