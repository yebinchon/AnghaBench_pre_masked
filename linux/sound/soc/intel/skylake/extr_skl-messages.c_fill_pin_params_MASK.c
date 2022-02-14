
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_module_fmt {int interleaving_style; int ch_map; int sample_type; int ch_cfg; int valid_bit_depth; int bit_depth; int s_freq; int channels; } ;
struct skl_audio_data_format {int interleaving; int channel_map; int sample_type; int ch_cfg; int valid_bit_depth; int bit_depth; int s_freq; int number_of_channels; } ;



__attribute__((used)) static void FUNC_0(struct skl_audio_data_format *VAR_0,
    struct skl_module_fmt *VAR_1)
{
 VAR_0->number_of_channels = VAR_1->channels;
 VAR_0->s_freq = VAR_1->s_freq;
 VAR_0->bit_depth = VAR_1->bit_depth;
 VAR_0->valid_bit_depth = VAR_1->valid_bit_depth;
 VAR_0->ch_cfg = VAR_1->ch_cfg;
 VAR_0->sample_type = VAR_1->sample_type;
 VAR_0->channel_map = VAR_1->ch_map;
 VAR_0->interleaving = VAR_1->interleaving_style;
}
