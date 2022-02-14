
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* hp_out_nid; scalar_t__* dac_nids; } ;
struct TYPE_4__ {scalar_t__ line_out_type; } ;
struct hda_gen_spec {int indep_hp_enabled; scalar_t__ alt_dac_nid; scalar_t__ indep_hp; TYPE_1__ multiout; TYPE_2__ autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_gen_spec*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_3->spec;
 hda_nid_t VAR_5;

 if (!VAR_4->indep_hp)
  return 0;
 if (VAR_4->autocfg.line_out_type == VAR_0)
  VAR_5 = VAR_4->multiout.dac_nids[0];
 else
  VAR_5 = VAR_4->multiout.hp_out_nid[0];
 if (!VAR_5) {
  VAR_4->indep_hp = 0;
  return 0;
 }

 VAR_4->indep_hp_enabled = 0;
 VAR_4->alt_dac_nid = VAR_5;
 if (!FUNC_0(VAR_4, ((void*)0), &VAR_2))
  return -VAR_1;
 return 0;
}
