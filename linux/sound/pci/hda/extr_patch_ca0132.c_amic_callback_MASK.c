
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 scalar_t__ FUNC_2 (struct ca0132_spec*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, struct hda_jack_callback *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_0->spec;

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
