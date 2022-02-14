
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct snd_efw* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_efw_hwinfo {unsigned short guid_hi; unsigned short guid_lo; unsigned short type; unsigned short version; unsigned short vendor_name; unsigned short model_name; unsigned short dsp_version; unsigned short arm_version; unsigned short fpga_version; unsigned short flags; unsigned short max_sample_rate; unsigned short min_sample_rate; unsigned short supported_clocks; unsigned short phys_out; unsigned short phys_in; unsigned short phys_in_grp_count; unsigned short phys_out_grp_count; unsigned short amdtp_rx_pcm_channels; unsigned short amdtp_tx_pcm_channels; unsigned short amdtp_rx_pcm_channels_2x; unsigned short amdtp_tx_pcm_channels_2x; unsigned short amdtp_rx_pcm_channels_4x; unsigned short amdtp_tx_pcm_channels_4x; unsigned short midi_out_ports; unsigned short midi_in_ports; unsigned short mixer_playback_channels; unsigned short mixer_capture_channels; TYPE_1__* phys_out_grps; } ;
struct snd_efw {int dummy; } ;
struct TYPE_2__ {int count; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_efw_hwinfo*) ;
 struct snd_efw_hwinfo* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct snd_efw*,struct snd_efw_hwinfo*) ;
 int FUNC_3 (struct snd_info_buffer*,char*,unsigned short,...) ;

__attribute__((used)) static void
FUNC_4(struct snd_info_entry *VAR_1, struct snd_info_buffer *VAR_2)
{
 struct snd_efw *VAR_3 = VAR_1->private_data;
 unsigned short VAR_4;
 struct snd_efw_hwinfo *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct snd_efw_hwinfo), VAR_0);
 if (VAR_5 == ((void*)0))
  return;

 if (FUNC_2(VAR_3, VAR_5) < 0)
  goto end;

 FUNC_3(VAR_2, "guid_hi: 0x%X\n", VAR_5->guid_hi);
 FUNC_3(VAR_2, "guid_lo: 0x%X\n", VAR_5->guid_lo);
 FUNC_3(VAR_2, "type: 0x%X\n", VAR_5->type);
 FUNC_3(VAR_2, "version: 0x%X\n", VAR_5->version);
 FUNC_3(VAR_2, "vendor_name: %s\n", VAR_5->vendor_name);
 FUNC_3(VAR_2, "model_name: %s\n", VAR_5->model_name);

 FUNC_3(VAR_2, "dsp_version: 0x%X\n", VAR_5->dsp_version);
 FUNC_3(VAR_2, "arm_version: 0x%X\n", VAR_5->arm_version);
 FUNC_3(VAR_2, "fpga_version: 0x%X\n", VAR_5->fpga_version);

 FUNC_3(VAR_2, "flags: 0x%X\n", VAR_5->flags);

 FUNC_3(VAR_2, "max_sample_rate: 0x%X\n", VAR_5->max_sample_rate);
 FUNC_3(VAR_2, "min_sample_rate: 0x%X\n", VAR_5->min_sample_rate);
 FUNC_3(VAR_2, "supported_clock: 0x%X\n",
      VAR_5->supported_clocks);

 FUNC_3(VAR_2, "phys out: 0x%X\n", VAR_5->phys_out);
 FUNC_3(VAR_2, "phys in: 0x%X\n", VAR_5->phys_in);

 FUNC_3(VAR_2, "phys in grps: 0x%X\n",
      VAR_5->phys_in_grp_count);
 for (VAR_4 = 0; VAR_4 < VAR_5->phys_in_grp_count; VAR_4++) {
  FUNC_3(VAR_2,
       "phys in grp[%d]: type 0x%X, count 0x%X\n",
       VAR_4, VAR_5->phys_out_grps[VAR_4].type,
       VAR_5->phys_out_grps[VAR_4].count);
 }

 FUNC_3(VAR_2, "phys out grps: 0x%X\n",
      VAR_5->phys_out_grp_count);
 for (VAR_4 = 0; VAR_4 < VAR_5->phys_out_grp_count; VAR_4++) {
  FUNC_3(VAR_2,
       "phys out grps[%d]: type 0x%X, count 0x%X\n",
       VAR_4, VAR_5->phys_out_grps[VAR_4].type,
       VAR_5->phys_out_grps[VAR_4].count);
 }

 FUNC_3(VAR_2, "amdtp rx pcm channels 1x: 0x%X\n",
      VAR_5->amdtp_rx_pcm_channels);
 FUNC_3(VAR_2, "amdtp tx pcm channels 1x: 0x%X\n",
      VAR_5->amdtp_tx_pcm_channels);
 FUNC_3(VAR_2, "amdtp rx pcm channels 2x: 0x%X\n",
      VAR_5->amdtp_rx_pcm_channels_2x);
 FUNC_3(VAR_2, "amdtp tx pcm channels 2x: 0x%X\n",
      VAR_5->amdtp_tx_pcm_channels_2x);
 FUNC_3(VAR_2, "amdtp rx pcm channels 4x: 0x%X\n",
      VAR_5->amdtp_rx_pcm_channels_4x);
 FUNC_3(VAR_2, "amdtp tx pcm channels 4x: 0x%X\n",
      VAR_5->amdtp_tx_pcm_channels_4x);

 FUNC_3(VAR_2, "midi out ports: 0x%X\n", VAR_5->midi_out_ports);
 FUNC_3(VAR_2, "midi in ports: 0x%X\n", VAR_5->midi_in_ports);

 FUNC_3(VAR_2, "mixer playback channels: 0x%X\n",
      VAR_5->mixer_playback_channels);
 FUNC_3(VAR_2, "mixer capture channels: 0x%X\n",
      VAR_5->mixer_capture_channels);
end:
 FUNC_0(VAR_5);
}
