
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int hp_automute_hook; } ;
struct alc_spec {TYPE_1__ gen; int parse_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_3,
         const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;
 if (VAR_5 == VAR_0) {
  VAR_6->parse_flags |= VAR_1;
  VAR_6->gen.hp_automute_hook = VAR_2;
 }
}
