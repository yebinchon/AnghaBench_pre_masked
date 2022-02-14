
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct auto_pin_cfg {int num_inputs; TYPE_2__* inputs; } ;
struct TYPE_3__ {struct auto_pin_cfg autocfg; } ;
struct alc_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {scalar_t__ type; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_8,
          const struct hda_fixup *VAR_9,
          int VAR_10)
{
 struct alc_spec *VAR_11 = VAR_8->spec;
 struct auto_pin_cfg *VAR_12 = &VAR_11->gen.autocfg;
 int VAR_13;





 if (VAR_10 != VAR_5)
  return;

 for (VAR_13 = 0; VAR_13 < VAR_12->num_inputs; VAR_13++) {
  hda_nid_t VAR_14 = VAR_12->inputs[VAR_13].pin;
  unsigned int VAR_15;
  if (VAR_12->inputs[VAR_13].type != VAR_4)
   continue;
  VAR_15 = FUNC_0(VAR_8, VAR_14);
  if (FUNC_1(VAR_15) != VAR_7)
   continue;

  FUNC_2(VAR_8, VAR_14, VAR_6,
       (0x00 << VAR_2) |
       (0x01 << VAR_1) |
       (0x2f << VAR_3) |
       (0 << VAR_0));
 }
}
