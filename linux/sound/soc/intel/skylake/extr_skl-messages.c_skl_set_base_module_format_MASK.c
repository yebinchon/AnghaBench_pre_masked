
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_module_res {int is_pages; int obs; int ibs; int cpc; } ;
struct skl_module_iface {TYPE_1__* inputs; } ;
struct skl_module_fmt {int interleaving_style; int ch_map; int ch_cfg; int valid_bit_depth; int bit_depth; int sample_type; int s_freq; int channels; } ;
struct skl_module_cfg {size_t res_idx; size_t fmt_idx; struct skl_module* module; } ;
struct skl_module {struct skl_module_iface* formats; struct skl_module_res* resources; } ;
struct skl_dev {int dev; } ;
struct TYPE_4__ {int interleaving; int channel_map; int sample_type; int ch_cfg; int valid_bit_depth; int bit_depth; int s_freq; int number_of_channels; } ;
struct skl_base_cfg {int is_pages; int obs; int ibs; int cpc; TYPE_2__ audio_fmt; } ;
struct TYPE_3__ {struct skl_module_fmt fmt; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct skl_dev *VAR_0,
   struct skl_module_cfg *VAR_1,
   struct skl_base_cfg *VAR_2)
{
 struct skl_module *VAR_3 = VAR_1->module;
 struct skl_module_res *VAR_4 = &VAR_3->resources[VAR_1->res_idx];
 struct skl_module_iface *VAR_5 = &VAR_3->formats[VAR_1->fmt_idx];
 struct skl_module_fmt *VAR_6 = &VAR_5->inputs[0].fmt;

 VAR_2->audio_fmt.number_of_channels = VAR_6->channels;

 VAR_2->audio_fmt.s_freq = VAR_6->s_freq;
 VAR_2->audio_fmt.bit_depth = VAR_6->bit_depth;
 VAR_2->audio_fmt.valid_bit_depth = VAR_6->valid_bit_depth;
 VAR_2->audio_fmt.ch_cfg = VAR_6->ch_cfg;
 VAR_2->audio_fmt.sample_type = VAR_6->sample_type;

 FUNC_0(VAR_0->dev, "bit_depth=%x valid_bd=%x ch_config=%x\n",
   VAR_6->bit_depth, VAR_6->valid_bit_depth,
   VAR_6->ch_cfg);

 VAR_2->audio_fmt.channel_map = VAR_6->ch_map;

 VAR_2->audio_fmt.interleaving = VAR_6->interleaving_style;

 VAR_2->cpc = VAR_4->cpc;
 VAR_2->ibs = VAR_4->ibs;
 VAR_2->obs = VAR_4->obs;
 VAR_2->is_pages = VAR_4->is_pages;
}
