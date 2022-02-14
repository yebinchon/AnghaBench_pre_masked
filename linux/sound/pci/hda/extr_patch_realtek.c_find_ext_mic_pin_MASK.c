
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct TYPE_4__ {struct auto_pin_cfg autocfg; } ;
struct alc_spec {TYPE_2__ gen; } ;
typedef int hda_nid_t ;
struct TYPE_3__ {scalar_t__ type; int pin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 struct alc_spec *VAR_3 = VAR_2->spec;
 struct auto_pin_cfg *VAR_4 = &VAR_3->gen.autocfg;
 hda_nid_t VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_inputs; VAR_7++) {
  if (VAR_4->inputs[VAR_7].type != VAR_0)
   continue;
  VAR_5 = VAR_4->inputs[VAR_7].pin;
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (FUNC_1(VAR_6) == VAR_1)
   continue;
  return VAR_5;
 }

 return 0;
}
