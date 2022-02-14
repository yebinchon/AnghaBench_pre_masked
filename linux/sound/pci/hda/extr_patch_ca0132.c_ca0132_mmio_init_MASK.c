
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ mem_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_2->spec;

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_1(0x00000001, VAR_3->mem_base + 0x400);
 else
  FUNC_1(0x00000000, VAR_3->mem_base + 0x400);

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_1(0x00000001, VAR_3->mem_base + 0x408);
 else
  FUNC_1(0x00000000, VAR_3->mem_base + 0x408);

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_1(0x00000001, VAR_3->mem_base + 0x40c);
 else
  FUNC_1(0x00000000, VAR_3->mem_base + 0x40C);

 if (FUNC_0(VAR_3) == VAR_1)
  FUNC_1(0x00880640, VAR_3->mem_base + 0x01C);
 else
  FUNC_1(0x00880680, VAR_3->mem_base + 0x01C);

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_1(0x00000080, VAR_3->mem_base + 0xC0C);
 else
  FUNC_1(0x00000083, VAR_3->mem_base + 0xC0C);

 FUNC_1(0x00000030, VAR_3->mem_base + 0xC00);
 FUNC_1(0x00000000, VAR_3->mem_base + 0xC04);

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_1(0x00000000, VAR_3->mem_base + 0xC0C);
 else
  FUNC_1(0x00000003, VAR_3->mem_base + 0xC0C);

 FUNC_1(0x00000003, VAR_3->mem_base + 0xC0C);
 FUNC_1(0x00000003, VAR_3->mem_base + 0xC0C);
 FUNC_1(0x00000003, VAR_3->mem_base + 0xC0C);

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_1(0x00000001, VAR_3->mem_base + 0xC08);
 else
  FUNC_1(0x000000C1, VAR_3->mem_base + 0xC08);

 FUNC_1(0x000000F1, VAR_3->mem_base + 0xC08);
 FUNC_1(0x00000001, VAR_3->mem_base + 0xC08);
 FUNC_1(0x000000C7, VAR_3->mem_base + 0xC08);
 FUNC_1(0x000000C1, VAR_3->mem_base + 0xC08);
 FUNC_1(0x00000080, VAR_3->mem_base + 0xC04);

 if (FUNC_0(VAR_3) == VAR_0) {
  FUNC_1(0x00000000, VAR_3->mem_base + 0x42c);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x46c);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x4ac);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x4ec);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x43c);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x47c);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x4bc);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x4fc);
  FUNC_1(0x00000600, VAR_3->mem_base + 0x100);
  FUNC_1(0x00000014, VAR_3->mem_base + 0x410);
  FUNC_1(0x0000060f, VAR_3->mem_base + 0x100);
  FUNC_1(0x0000070f, VAR_3->mem_base + 0x100);
  FUNC_1(0x00000aff, VAR_3->mem_base + 0x830);
  FUNC_1(0x00000000, VAR_3->mem_base + 0x86c);
  FUNC_1(0x0000006b, VAR_3->mem_base + 0x800);
  FUNC_1(0x00000001, VAR_3->mem_base + 0x86c);
  FUNC_1(0x0000006b, VAR_3->mem_base + 0x800);
  FUNC_1(0x00000057, VAR_3->mem_base + 0x804);
  FUNC_1(0x00800000, VAR_3->mem_base + 0x20c);
 }
}
