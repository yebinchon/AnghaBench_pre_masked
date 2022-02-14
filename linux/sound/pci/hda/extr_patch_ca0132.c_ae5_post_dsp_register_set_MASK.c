
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ mem_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_3->spec;

 FUNC_1(VAR_3, 0x93, 0x10);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_0, 0x44);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_1, 0xc2);

 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0x00, VAR_4->mem_base + 0x100);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0x00, VAR_4->mem_base + 0x100);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0x00, VAR_4->mem_base + 0x100);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);
 FUNC_3(0x00, VAR_4->mem_base + 0x100);
 FUNC_3(0xff, VAR_4->mem_base + 0x304);

 FUNC_0(VAR_3, 0x30, 0x2b, 0x3f);
 FUNC_0(VAR_3, 0x30, 0x2d, 0x3f);
 FUNC_0(VAR_3, 0x48, 0x07, 0x83);
}
