
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;




 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int (*) (struct hda_codec*,int *)) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0,
     const struct hda_fixup *VAR_1, int VAR_2)
{

 if (!FUNC_1(VAR_0, 0x1b))
  return;

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_0, 0x1b,
    FUNC_0);
  break;
 case 129:



  FUNC_0(VAR_0, ((void*)0));
  break;
 }
}
