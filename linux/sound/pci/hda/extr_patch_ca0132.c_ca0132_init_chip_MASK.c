
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int* vnode_lvol; int* vnode_rvol; int* effects_switch; int xbass_xover_freq; void* in_enum_val; scalar_t__ voicefx_val; int * fx_ctl_val; scalar_t__* vnode_rswitch; scalar_t__* vnode_lswitch; scalar_t__ cur_mic_boost; void* cur_mic_type; int cur_out_type; int chipio_mutex; } ;
struct TYPE_2__ {scalar_t__* reqs; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_0 (struct hda_codec*) ;
 scalar_t__ FUNC_1 (struct ca0132_spec*) ;
 scalar_t__ FUNC_2 (struct ca0132_spec*) ;
 int FUNC_3 (struct ca0132_spec*) ;
 int * VAR_12 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_13)
{
 struct ca0132_spec *VAR_14 = VAR_13->spec;
 int VAR_15;
 int VAR_16;
 unsigned int VAR_17;

 FUNC_4(&VAR_14->chipio_mutex);

 VAR_14->cur_out_type = VAR_9;
 if (!FUNC_3(VAR_14))
  VAR_14->cur_mic_type = VAR_1;
 else
  VAR_14->cur_mic_type = VAR_8;

 VAR_14->cur_mic_boost = 0;

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_14->vnode_lvol[VAR_16] = 0x5a;
  VAR_14->vnode_rvol[VAR_16] = 0x5a;
  VAR_14->vnode_lswitch[VAR_16] = 0;
  VAR_14->vnode_rswitch[VAR_16] = 0;
 }




 VAR_15 = VAR_5 + VAR_4;
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_17 = (unsigned int)VAR_11[VAR_16].reqs[0];
  VAR_14->effects_switch[VAR_16] = VAR_17 ? 1 : 0;
 }




 if (FUNC_2(VAR_14)) {
  VAR_14->xbass_xover_freq = 8;
  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
   VAR_14->fx_ctl_val[VAR_16] = VAR_12[VAR_16];
 }

 VAR_14->voicefx_val = 0;
 VAR_14->effects_switch[VAR_6 - VAR_3] = 1;
 VAR_14->effects_switch[VAR_0 - VAR_3] = 0;






 if (FUNC_1(VAR_14) == VAR_7)
  VAR_14->in_enum_val = VAR_8;




}
