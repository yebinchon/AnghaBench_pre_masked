
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int slot_mask; int slot_width; int nslots_per_frame; int sync_src; int sync_mode; int data_format; int bit_width; int sample_rate; int num_channels; int tdm_cfg_minor_version; } ;
union afe_port_config {TYPE_1__ tdm_cfg; } ;
typedef int u16 ;
struct q6afe_tdm_cfg {int ch_mapping; int data_align_type; int bit_width; int num_channels; int slot_mask; int slot_width; int nslots_per_frame; int sync_src; int sync_mode; int data_format; int sample_rate; } ;
struct q6afe_port {TYPE_2__* scfg; union afe_port_config port_cfg; } ;
struct TYPE_4__ {int ch_mapping; int data_align_type; int bitwidth; int num_channels; int minor_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct q6afe_port *VAR_4,
        struct q6afe_tdm_cfg *VAR_5)
{
 union afe_port_config *VAR_6 = &VAR_4->port_cfg;

 VAR_6->tdm_cfg.tdm_cfg_minor_version = VAR_1;
 VAR_6->tdm_cfg.num_channels = VAR_5->num_channels;
 VAR_6->tdm_cfg.sample_rate = VAR_5->sample_rate;
 VAR_6->tdm_cfg.bit_width = VAR_5->bit_width;
 VAR_6->tdm_cfg.data_format = VAR_5->data_format;
 VAR_6->tdm_cfg.sync_mode = VAR_5->sync_mode;
 VAR_6->tdm_cfg.sync_src = VAR_5->sync_src;
 VAR_6->tdm_cfg.nslots_per_frame = VAR_5->nslots_per_frame;

 VAR_6->tdm_cfg.slot_width = VAR_5->slot_width;
 VAR_6->tdm_cfg.slot_mask = VAR_5->slot_mask;
 VAR_4->scfg = FUNC_0(sizeof(*VAR_4->scfg), VAR_3);
 if (!VAR_4->scfg)
  return;

 VAR_4->scfg->minor_version = VAR_0;
 VAR_4->scfg->num_channels = VAR_5->num_channels;
 VAR_4->scfg->bitwidth = VAR_5->bit_width;
 VAR_4->scfg->data_align_type = VAR_5->data_align_type;
 FUNC_1(VAR_4->scfg->ch_mapping, VAR_5->ch_mapping,
   sizeof(u16) * VAR_2);
}
