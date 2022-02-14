
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dig_in; scalar_t__ dig_out; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;
 int VAR_2 = 0;

 if (VAR_1->dig_out) {
  VAR_2 = FUNC_1(VAR_0, VAR_1->dig_out,
    VAR_1->dig_out);
  if (VAR_2 < 0)
   return VAR_2;
 }

 if (VAR_1->dig_in) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->dig_in);
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
