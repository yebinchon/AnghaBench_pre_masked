
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int hp_jack_present; } ;
struct alc_spec {TYPE_1__ gen; } ;


 int FUNC_0 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 FUNC_0(VAR_0, 0x01, VAR_1->gen.hp_jack_present);
}
