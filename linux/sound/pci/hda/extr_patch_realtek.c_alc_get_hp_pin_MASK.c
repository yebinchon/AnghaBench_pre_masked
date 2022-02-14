
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ line_out_type; scalar_t__* line_out_pins; scalar_t__* hp_pins; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct alc_spec {TYPE_2__ gen; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static hda_nid_t FUNC_0(struct alc_spec *VAR_1)
{
 if (VAR_1->gen.autocfg.hp_pins[0])
  return VAR_1->gen.autocfg.hp_pins[0];
 if (VAR_1->gen.autocfg.line_out_type == VAR_0)
  return VAR_1->gen.autocfg.line_out_pins[0];
 return 0;
}
