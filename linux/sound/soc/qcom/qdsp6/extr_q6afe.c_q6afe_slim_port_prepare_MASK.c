
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * shared_ch_mapping; int data_format; int num_channels; int bit_width; int sample_rate; int sb_cfg_minor_version; } ;
union afe_port_config {TYPE_1__ slim_cfg; } ;
struct q6afe_slim_cfg {int * ch_mapping; int data_format; int num_channels; int bit_width; int sample_rate; } ;
struct q6afe_port {union afe_port_config port_cfg; } ;


 int VAR_0 ;

void FUNC_0(struct q6afe_port *VAR_1,
        struct q6afe_slim_cfg *VAR_2)
{
 union afe_port_config *VAR_3 = &VAR_1->port_cfg;

 VAR_3->slim_cfg.sb_cfg_minor_version = VAR_0;
 VAR_3->slim_cfg.sample_rate = VAR_2->sample_rate;
 VAR_3->slim_cfg.bit_width = VAR_2->bit_width;
 VAR_3->slim_cfg.num_channels = VAR_2->num_channels;
 VAR_3->slim_cfg.data_format = VAR_2->data_format;
 VAR_3->slim_cfg.shared_ch_mapping[0] = VAR_2->ch_mapping[0];
 VAR_3->slim_cfg.shared_ch_mapping[1] = VAR_2->ch_mapping[1];
 VAR_3->slim_cfg.shared_ch_mapping[2] = VAR_2->ch_mapping[2];
 VAR_3->slim_cfg.shared_ch_mapping[3] = VAR_2->ch_mapping[3];

}
