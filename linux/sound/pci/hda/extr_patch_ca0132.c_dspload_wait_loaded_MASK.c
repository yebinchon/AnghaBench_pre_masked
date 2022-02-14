
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,char*) ;
 scalar_t__ FUNC_2 (struct hda_codec*) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct hda_codec *VAR_1)
{
 unsigned long VAR_2 = VAR_0 + FUNC_3(2000);

 do {
  if (FUNC_2(VAR_1)) {
   FUNC_1(VAR_1, "ca0132 DSP downloaded and running\n");
   return 1;
  }
  FUNC_4(20);
 } while (FUNC_5(VAR_0, VAR_2));

 FUNC_0(VAR_1, "ca0132 failed to download DSP\n");
 return 0;
}
