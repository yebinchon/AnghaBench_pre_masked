
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ mem_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;

 FUNC_2(0x00820680, VAR_2->mem_base + 0x01C);
 FUNC_2(0x00820680, VAR_2->mem_base + 0x01C);

 FUNC_0(VAR_1, 0x18b0a4, 0x000000c2);

 FUNC_1(VAR_1, 0x11, 0,
   VAR_0, 0x44);
}
