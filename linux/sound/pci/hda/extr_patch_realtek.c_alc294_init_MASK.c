
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ event; } ;
struct TYPE_6__ {TYPE_1__ power_state; } ;
struct TYPE_7__ {TYPE_2__ power; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;
struct hda_codec {TYPE_4__ core; struct alc_spec* spec; } ;
struct alc_spec {int done_hp_init; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_1->spec;


 if (!VAR_2->done_hp_init ||
     VAR_1->core.dev.power.power_state.event == VAR_0) {
  FUNC_0(VAR_1);
  VAR_2->done_hp_init = 1;
 }
 FUNC_1(VAR_1);
}
