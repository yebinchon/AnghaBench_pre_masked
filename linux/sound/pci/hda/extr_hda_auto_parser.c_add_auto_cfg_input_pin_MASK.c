
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
struct auto_pin_cfg {size_t num_inputs; TYPE_1__* inputs; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int type; int has_boost_on_pin; int pin; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2, struct auto_pin_cfg *VAR_3,
       hda_nid_t VAR_4, int VAR_5)
{
 if (VAR_3->num_inputs < VAR_0) {
  VAR_3->inputs[VAR_3->num_inputs].pin = VAR_4;
  VAR_3->inputs[VAR_3->num_inputs].type = VAR_5;
  VAR_3->inputs[VAR_3->num_inputs].has_boost_on_pin =
   FUNC_0(VAR_2, VAR_4, VAR_1);
  VAR_3->num_inputs++;
 }
}
