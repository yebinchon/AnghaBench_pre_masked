
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {scalar_t__ dc_enable; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,struct hda_jack_callback*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0,
       struct hda_jack_callback *VAR_1)
{
 struct conexant_spec *VAR_2 = VAR_0->spec;


 if (!VAR_2->dc_enable)
  FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 if (VAR_2->dc_enable)
  FUNC_0(VAR_0);
}
