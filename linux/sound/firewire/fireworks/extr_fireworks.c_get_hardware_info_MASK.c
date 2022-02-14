
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int version ;
struct snd_efw_phys_grp {int dummy; } ;
struct snd_efw_hwinfo {int arm_version; char* model_name; char* vendor_name; int guid_hi; char* guid_lo; int flags; int min_sample_rate; int max_sample_rate; scalar_t__ midi_out_ports; scalar_t__ midi_in_ports; scalar_t__ amdtp_tx_pcm_channels; scalar_t__ amdtp_tx_pcm_channels_2x; scalar_t__ amdtp_tx_pcm_channels_4x; scalar_t__ amdtp_rx_pcm_channels; scalar_t__ amdtp_rx_pcm_channels_2x; scalar_t__ amdtp_rx_pcm_channels_4x; int phys_in_grp_count; int phys_out_grp_count; scalar_t__ type; int phys_out_grps; int phys_in_grps; int phys_out; int phys_in; } ;
struct snd_efw {int firmware_version; int resp_addr_changable; scalar_t__ midi_out_ports; scalar_t__ midi_in_ports; scalar_t__* pcm_capture_channels; scalar_t__* pcm_playback_channels; int phys_in_grp_count; int phys_out_grp_count; int is_af9; int is_fireworks3; int phys_out_grps; int phys_in_grps; int phys_out; int phys_in; int supported_sampling_rate; TYPE_2__* unit; TYPE_1__* card; } ;
struct fw_device {int max_speed; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int longname; int mixername; int shortname; int driver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int *) ;
 struct fw_device* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct snd_efw_hwinfo*) ;
 struct snd_efw_hwinfo* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct snd_efw*,struct snd_efw_hwinfo*) ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9(struct snd_efw *VAR_22)
{
 struct fw_device *VAR_23 = FUNC_2(VAR_22->unit);
 struct snd_efw_hwinfo *VAR_24;
 char VAR_25[12] = {0};
 int VAR_26;

 VAR_24 = FUNC_4(sizeof(struct snd_efw_hwinfo), VAR_5);
 if (VAR_24 == ((void*)0))
  return -VAR_2;

 VAR_26 = FUNC_6(VAR_22, VAR_24);
 if (VAR_26 < 0)
  goto end;


 FUNC_7(VAR_25, sizeof(VAR_25), "%u.%u",
   (VAR_24->arm_version >> 24) & 0xff,
   (VAR_24->arm_version >> 16) & 0xff);
 VAR_22->firmware_version = VAR_24->arm_version;

 FUNC_8(VAR_22->card->driver, "Fireworks");
 FUNC_8(VAR_22->card->shortname, VAR_24->model_name);
 FUNC_8(VAR_22->card->mixername, VAR_24->model_name);
 FUNC_7(VAR_22->card->longname, sizeof(VAR_22->card->longname),
   "%s %s v%s, GUID %08x%08x at %s, S%d",
   VAR_24->vendor_name, VAR_24->model_name, VAR_25,
   VAR_24->guid_hi, VAR_24->guid_lo,
   FUNC_1(&VAR_22->unit->device), 100 << VAR_23->max_speed);

 if (VAR_24->flags & FUNC_0(VAR_4))
  VAR_22->resp_addr_changable = 1;

 VAR_22->supported_sampling_rate = 0;
 if ((VAR_24->min_sample_rate <= 22050)
  && (22050 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_14;
 if ((VAR_24->min_sample_rate <= 32000)
  && (32000 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_15;
 if ((VAR_24->min_sample_rate <= 44100)
  && (44100 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_16;
 if ((VAR_24->min_sample_rate <= 48000)
  && (48000 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_17;
 if ((VAR_24->min_sample_rate <= 88200)
  && (88200 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_18;
 if ((VAR_24->min_sample_rate <= 96000)
  && (96000 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_19;
 if ((VAR_24->min_sample_rate <= 176400)
  && (176400 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_12;
 if ((VAR_24->min_sample_rate <= 192000)
  && (192000 <= VAR_24->max_sample_rate))
  VAR_22->supported_sampling_rate |= VAR_13;


 if (VAR_24->midi_out_ports > VAR_21 ||
     VAR_24->midi_in_ports > VAR_20) {
  VAR_26 = -VAR_1;
  goto end;
 }
 VAR_22->midi_out_ports = VAR_24->midi_out_ports;
 VAR_22->midi_in_ports = VAR_24->midi_in_ports;

 if (VAR_24->amdtp_tx_pcm_channels > VAR_0 ||
     VAR_24->amdtp_tx_pcm_channels_2x > VAR_0 ||
     VAR_24->amdtp_tx_pcm_channels_4x > VAR_0 ||
     VAR_24->amdtp_rx_pcm_channels > VAR_0 ||
     VAR_24->amdtp_rx_pcm_channels_2x > VAR_0 ||
     VAR_24->amdtp_rx_pcm_channels_4x > VAR_0) {
  VAR_26 = -VAR_3;
  goto end;
 }
 VAR_22->pcm_capture_channels[0] = VAR_24->amdtp_tx_pcm_channels;
 VAR_22->pcm_capture_channels[1] = VAR_24->amdtp_tx_pcm_channels_2x;
 VAR_22->pcm_capture_channels[2] = VAR_24->amdtp_tx_pcm_channels_4x;
 VAR_22->pcm_playback_channels[0] = VAR_24->amdtp_rx_pcm_channels;
 VAR_22->pcm_playback_channels[1] = VAR_24->amdtp_rx_pcm_channels_2x;
 VAR_22->pcm_playback_channels[2] = VAR_24->amdtp_rx_pcm_channels_4x;


 if (VAR_24->phys_in_grp_count > VAR_6 ||
     VAR_24->phys_out_grp_count > VAR_6) {
  VAR_26 = -VAR_1;
  goto end;
 }
 VAR_22->phys_in = VAR_24->phys_in;
 VAR_22->phys_out = VAR_24->phys_out;
 VAR_22->phys_in_grp_count = VAR_24->phys_in_grp_count;
 VAR_22->phys_out_grp_count = VAR_24->phys_out_grp_count;
 FUNC_5(&VAR_22->phys_in_grps, VAR_24->phys_in_grps,
        sizeof(struct snd_efw_phys_grp) * VAR_24->phys_in_grp_count);
 FUNC_5(&VAR_22->phys_out_grps, VAR_24->phys_out_grps,
        sizeof(struct snd_efw_phys_grp) * VAR_24->phys_out_grp_count);


 if (VAR_24->type == VAR_9)
  VAR_22->is_af9 = 1;

 if (VAR_24->type == VAR_7 ||
     VAR_24->type == VAR_8 ||
     VAR_24->type == VAR_9 ||
     VAR_24->type == VAR_11 ||
     VAR_24->type == VAR_10)
  VAR_22->is_fireworks3 = 1;
end:
 FUNC_3(VAR_24);
 return VAR_26;
}
