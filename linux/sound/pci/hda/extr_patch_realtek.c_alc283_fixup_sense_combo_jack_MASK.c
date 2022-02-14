
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int hp_automute_hook; } ;
struct alc_spec {TYPE_1__ gen; } ;




 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2, int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;

 switch (VAR_3) {
 case 128:
  VAR_4->gen.hp_automute_hook = VAR_0;
  break;
 case 129:


  FUNC_0(VAR_1, 0x06, 0x000c, 0);
  break;
 }
}
