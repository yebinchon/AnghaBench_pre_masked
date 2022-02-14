
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sample_type; int interleaving_style; int ch_map; int ch_cfg; int valid_bit_depth; int bit_depth; int s_freq; int channels; } ;
struct skl_module_pin_fmt {TYPE_1__ fmt; } ;
struct skl_dfw_v4_module_fmt {int sample_type; int interleaving_style; int ch_map; int ch_cfg; int valid_bit_depth; int bit_depth; int freq; int channels; } ;



__attribute__((used)) static void FUNC_0(struct skl_module_pin_fmt *VAR_0,
     struct skl_dfw_v4_module_fmt *VAR_1,
     int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_0[VAR_3].fmt.channels = VAR_1[VAR_3].channels;
  VAR_0[VAR_3].fmt.s_freq = VAR_1[VAR_3].freq;
  VAR_0[VAR_3].fmt.bit_depth = VAR_1[VAR_3].bit_depth;
  VAR_0[VAR_3].fmt.valid_bit_depth = VAR_1[VAR_3].valid_bit_depth;
  VAR_0[VAR_3].fmt.ch_cfg = VAR_1[VAR_3].ch_cfg;
  VAR_0[VAR_3].fmt.ch_map = VAR_1[VAR_3].ch_map;
  VAR_0[VAR_3].fmt.interleaving_style =
      VAR_1[VAR_3].interleaving_style;
  VAR_0[VAR_3].fmt.sample_type = VAR_1[VAR_3].sample_type;
 }
}
