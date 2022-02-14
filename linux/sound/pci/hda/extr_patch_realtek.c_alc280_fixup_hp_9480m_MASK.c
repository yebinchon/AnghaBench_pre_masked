
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int hp_automute_hook; } ;
struct alc_spec {int gpio_mask; int gpio_dir; TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
      const struct hda_fixup *VAR_3,
      int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;

 FUNC_0(VAR_2, VAR_4, 0x08, 0);
 if (VAR_4 == VAR_0) {

  VAR_5->gpio_mask |= 0x10;
  VAR_5->gpio_dir |= 0x10;
  VAR_5->gen.hp_automute_hook = VAR_1;
 }
}
