
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct hda_alc298_mbxinit {int value_0x23; int value_0x25; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4,
      const struct hda_alc298_mbxinit *VAR_5,
      bool VAR_6)
{
 FUNC_1(VAR_4, 0x06, 0, VAR_2, 0x0);
 FUNC_0(VAR_4, 0x26, 0xb000);

 if (VAR_6)
  FUNC_1(VAR_4, 0x21, 0, VAR_0, 0x0);

 FUNC_1(VAR_4, 0x6, 0, VAR_2, 0x80);
 FUNC_0(VAR_4, 0x26, 0xf000);
 FUNC_0(VAR_4, 0x23, VAR_5->value_0x23);

 if (VAR_5->value_0x23 != 0x1e)
  FUNC_0(VAR_4, 0x25, VAR_5->value_0x25);

 FUNC_1(VAR_4, 0x20, 0, VAR_1, 0x26);
 FUNC_1(VAR_4, 0x20, 0, VAR_3, 0xb010);
}
