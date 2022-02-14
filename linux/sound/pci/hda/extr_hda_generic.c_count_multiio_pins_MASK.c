
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int type; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_codec*,unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 struct auto_pin_cfg *VAR_5 = &VAR_4->autocfg;
 unsigned int VAR_6 = FUNC_2(VAR_2, VAR_3);
 unsigned int VAR_7 = FUNC_1(VAR_6);
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 for (VAR_8 = VAR_0; VAR_8 >= VAR_1; VAR_8--) {
  for (VAR_9 = 0; VAR_9 < VAR_5->num_inputs; VAR_9++) {
   if (VAR_5->inputs[VAR_9].type != VAR_8)
    continue;
   if (FUNC_0(VAR_2, VAR_7,
            VAR_5->inputs[VAR_9].pin))
    VAR_10++;
  }
 }
 return VAR_10;
}
