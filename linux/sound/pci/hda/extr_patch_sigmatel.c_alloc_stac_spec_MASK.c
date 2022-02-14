
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dac_min_mute; } ;
struct sigmatel_spec {TYPE_1__ gen; } ;
struct hda_codec {int no_trigger_sense; int patch_ops; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sigmatel_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_3)
{
 struct sigmatel_spec *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_1(&VAR_4->gen);
 VAR_3->spec = VAR_4;
 VAR_3->no_trigger_sense = 1;
 VAR_4->gen.dac_min_mute = 1;
 VAR_3->patch_ops = VAR_2;
 return 0;
}
