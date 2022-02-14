
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
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int ,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4,
            const struct hda_fixup *VAR_5,
            int VAR_6)
{
 if (VAR_6 != VAR_2)
  return;

 FUNC_1(VAR_4, 0x1a, VAR_3, 0, VAR_1, 1);
 FUNC_2(VAR_4, 0x1a, FUNC_0(VAR_4, 0x1a) & ~VAR_0);
}
