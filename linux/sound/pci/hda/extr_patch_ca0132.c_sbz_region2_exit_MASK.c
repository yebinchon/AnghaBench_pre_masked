
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ mem_base; } ;


 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  FUNC_1(0x0, VAR_1->mem_base + 0x100);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_1(0xb3, VAR_1->mem_base + 0x304);

 FUNC_0(VAR_0, 0, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 4, 1);
 FUNC_0(VAR_0, 5, 0);
 FUNC_0(VAR_0, 7, 0);
}
