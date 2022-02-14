
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int no_primary_hp; int no_multi_io; } ;
struct alc_spec {TYPE_1__ gen; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
           const struct hda_fixup *VAR_2, int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;
 if (VAR_3 == VAR_0) {
  VAR_4->gen.no_primary_hp = 1;
  VAR_4->gen.no_multi_io = 1;
 }
}
