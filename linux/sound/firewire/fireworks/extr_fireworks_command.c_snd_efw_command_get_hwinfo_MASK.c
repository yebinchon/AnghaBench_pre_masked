
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw_hwinfo {char* vendor_name; char* model_name; int amdtp_tx_pcm_channels_4x; int amdtp_rx_pcm_channels_4x; int amdtp_tx_pcm_channels_2x; int amdtp_rx_pcm_channels_2x; int fpga_version; int mixer_capture_channels; int mixer_playback_channels; int arm_version; int dsp_version; int min_sample_rate; int max_sample_rate; int midi_in_ports; int midi_out_ports; int phys_in_grp_count; int phys_out_grp_count; int phys_in; int phys_out; int amdtp_tx_pcm_channels; int amdtp_rx_pcm_channels; int supported_clocks; int version; int type; int guid_lo; int guid_hi; int flags; } ;
struct snd_efw {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_efw*,int ,int ,int *,int ,int *,int) ;

int FUNC_2(struct snd_efw *VAR_3,
          struct snd_efw_hwinfo *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0,
          VAR_1,
          ((void*)0), 0, (__be32 *)VAR_4, sizeof(*VAR_4));
 if (VAR_5 < 0)
  goto end;

 FUNC_0(&VAR_4->flags);
 FUNC_0(&VAR_4->guid_hi);
 FUNC_0(&VAR_4->guid_lo);
 FUNC_0(&VAR_4->type);
 FUNC_0(&VAR_4->version);
 FUNC_0(&VAR_4->supported_clocks);
 FUNC_0(&VAR_4->amdtp_rx_pcm_channels);
 FUNC_0(&VAR_4->amdtp_tx_pcm_channels);
 FUNC_0(&VAR_4->phys_out);
 FUNC_0(&VAR_4->phys_in);
 FUNC_0(&VAR_4->phys_out_grp_count);
 FUNC_0(&VAR_4->phys_in_grp_count);
 FUNC_0(&VAR_4->midi_out_ports);
 FUNC_0(&VAR_4->midi_in_ports);
 FUNC_0(&VAR_4->max_sample_rate);
 FUNC_0(&VAR_4->min_sample_rate);
 FUNC_0(&VAR_4->dsp_version);
 FUNC_0(&VAR_4->arm_version);
 FUNC_0(&VAR_4->mixer_playback_channels);
 FUNC_0(&VAR_4->mixer_capture_channels);
 FUNC_0(&VAR_4->fpga_version);
 FUNC_0(&VAR_4->amdtp_rx_pcm_channels_2x);
 FUNC_0(&VAR_4->amdtp_tx_pcm_channels_2x);
 FUNC_0(&VAR_4->amdtp_rx_pcm_channels_4x);
 FUNC_0(&VAR_4->amdtp_tx_pcm_channels_4x);


 VAR_4->vendor_name[VAR_2 - 1] = '\0';
 VAR_4->model_name[VAR_2 - 1] = '\0';
end:
 return VAR_5;
}
