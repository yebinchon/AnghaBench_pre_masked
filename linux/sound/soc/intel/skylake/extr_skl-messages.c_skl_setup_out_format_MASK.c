
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct skl_module_iface {TYPE_1__* outputs; } ;
struct skl_module_fmt {int bit_depth; int s_freq; int sample_type; int interleaving_style; int ch_map; int ch_cfg; int valid_bit_depth; scalar_t__ channels; } ;
struct skl_module_cfg {size_t fmt_idx; struct skl_module* module; } ;
struct skl_module {struct skl_module_iface* formats; } ;
struct skl_dev {int dev; } ;
struct skl_audio_data_format {scalar_t__ number_of_channels; int sample_type; int interleaving; int channel_map; int ch_cfg; int valid_bit_depth; int bit_depth; int s_freq; } ;
struct TYPE_2__ {struct skl_module_fmt fmt; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct skl_dev *VAR_0,
   struct skl_module_cfg *VAR_1,
   struct skl_audio_data_format *VAR_2)
{
 struct skl_module *VAR_3 = VAR_1->module;
 struct skl_module_iface *VAR_4 = &VAR_3->formats[VAR_1->fmt_idx];
 struct skl_module_fmt *VAR_5 = &VAR_4->outputs[0].fmt;

 VAR_2->number_of_channels = (u8)VAR_5->channels;
 VAR_2->s_freq = VAR_5->s_freq;
 VAR_2->bit_depth = VAR_5->bit_depth;
 VAR_2->valid_bit_depth = VAR_5->valid_bit_depth;
 VAR_2->ch_cfg = VAR_5->ch_cfg;

 VAR_2->channel_map = VAR_5->ch_map;
 VAR_2->interleaving = VAR_5->interleaving_style;
 VAR_2->sample_type = VAR_5->sample_type;

 FUNC_0(VAR_0->dev, "copier out format chan=%d fre=%d bitdepth=%d\n",
  VAR_2->number_of_channels, VAR_5->s_freq, VAR_5->bit_depth);
}
