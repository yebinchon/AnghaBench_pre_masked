
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3,
       const struct hda_fixup *VAR_4,
       int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_3, 0x21);
 unsigned int VAR_7 = FUNC_0(VAR_3, 0x19);

 if (VAR_6 && VAR_7 == 0x411111f0)
  FUNC_1(VAR_3, 0x19,
   (VAR_6 & ~VAR_0) |
   (VAR_2 << VAR_1));
}
