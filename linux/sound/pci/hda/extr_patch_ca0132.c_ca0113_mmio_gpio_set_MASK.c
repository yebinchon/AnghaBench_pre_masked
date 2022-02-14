
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ mem_base; } ;


 int FUNC_0 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, unsigned int VAR_1,
  bool VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_0->spec;
 unsigned short VAR_4;

 VAR_4 = VAR_1 & 0xF;
 VAR_4 |= ((VAR_2 << 8) & 0x100);

 FUNC_0(VAR_4, VAR_3->mem_base + 0x320);
}
