
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {struct ca0132_spec* spec_init_verbs; } ;


 int FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1->spec_init_verbs);
 FUNC_0(VAR_0->spec);
}
