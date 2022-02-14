
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {int dummy; } ;
struct hda_gen_spec {int (* mic_autoswitch_hook ) (struct hda_codec*,struct hda_jack_callback*) ;} ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,struct hda_jack_callback*) ;
 int FUNC_1 (struct hda_codec*,struct hda_jack_callback*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
    struct hda_jack_callback *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 if (VAR_2->mic_autoswitch_hook)
  VAR_2->mic_autoswitch_hook(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
