
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int hp_jack_present; } ;
struct alc_spec {TYPE_1__ gen; } ;


 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (struct hda_codec*,struct hda_jack_callback*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
       struct hda_jack_callback *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_0->spec;

 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0, 0x10, !VAR_2->gen.hp_jack_present);
}
