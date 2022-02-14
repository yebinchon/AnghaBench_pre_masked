
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ mem_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_0->spec;
 unsigned int VAR_5;

 FUNC_2(0x0000007e, VAR_4->mem_base + 0x210);
 FUNC_1(VAR_4->mem_base + 0x210);
 FUNC_2(0x0000005a, VAR_4->mem_base + 0x210);
 FUNC_1(VAR_4->mem_base + 0x210);
 FUNC_1(VAR_4->mem_base + 0x210);

 FUNC_2(0x00800005, VAR_4->mem_base + 0x20c);
 FUNC_2(VAR_1, VAR_4->mem_base + 0x804);

 FUNC_2(0x00800005, VAR_4->mem_base + 0x20c);
 VAR_5 = (VAR_2 & 0xff);
 VAR_5 |= (VAR_3 << 8);


 FUNC_2(VAR_5, VAR_4->mem_base + 0x204);



 FUNC_0(20);

 FUNC_1(VAR_4->mem_base + 0x860);
 FUNC_1(VAR_4->mem_base + 0x854);
 FUNC_1(VAR_4->mem_base + 0x840);

 FUNC_2(0x00800004, VAR_4->mem_base + 0x20c);
 FUNC_2(0x00000000, VAR_4->mem_base + 0x210);
 FUNC_1(VAR_4->mem_base + 0x210);
 FUNC_1(VAR_4->mem_base + 0x210);
}
