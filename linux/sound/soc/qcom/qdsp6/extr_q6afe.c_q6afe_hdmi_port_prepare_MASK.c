
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bit_width; int sample_rate; int channel_allocation; int datatype; int hdmi_cfg_minor_version; } ;
union afe_port_config {TYPE_1__ hdmi_multi_ch; } ;
struct q6afe_port {union afe_port_config port_cfg; } ;
struct q6afe_hdmi_cfg {int bit_width; int sample_rate; int channel_allocation; int datatype; } ;


 int VAR_0 ;

void FUNC_0(struct q6afe_port *VAR_1,
        struct q6afe_hdmi_cfg *VAR_2)
{
 union afe_port_config *VAR_3 = &VAR_1->port_cfg;

 VAR_3->hdmi_multi_ch.hdmi_cfg_minor_version =
     VAR_0;
 VAR_3->hdmi_multi_ch.datatype = VAR_2->datatype;
 VAR_3->hdmi_multi_ch.channel_allocation = VAR_2->channel_allocation;
 VAR_3->hdmi_multi_ch.sample_rate = VAR_2->sample_rate;
 VAR_3->hdmi_multi_ch.bit_width = VAR_2->bit_width;
}
