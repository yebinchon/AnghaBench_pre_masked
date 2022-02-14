
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_5,
      const struct hda_fixup *VAR_6, int VAR_7)
{
 FUNC_0(VAR_5, 0x17, VAR_4,
      (0x14 << VAR_2) |
      (0x14 << VAR_1) |
      (0x05 << VAR_3) |
      (1 << VAR_0));
}
