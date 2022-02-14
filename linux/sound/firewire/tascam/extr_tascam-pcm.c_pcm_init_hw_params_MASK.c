
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdtp_stream {int dummy; } ;
struct snd_tscm {TYPE_1__* spec; struct amdtp_stream rx_stream; struct amdtp_stream tx_stream; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hardware {unsigned int channels_min; unsigned int channels_max; int rates; void* formats; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct TYPE_2__ {unsigned int pcm_capture_analog_channels; unsigned int pcm_playback_analog_channels; scalar_t__ has_spdif; scalar_t__ has_adat; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_2(struct snd_tscm *VAR_6,
         struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct snd_pcm_hardware *VAR_9 = &VAR_8->hw;
 struct amdtp_stream *VAR_10;
 unsigned int VAR_11;

 if (VAR_7->stream == VAR_5) {
  VAR_8->hw.formats = VAR_0;
  VAR_10 = &VAR_6->tx_stream;
  VAR_11 = VAR_6->spec->pcm_capture_analog_channels;
 } else {
  VAR_8->hw.formats = VAR_0;
  VAR_10 = &VAR_6->rx_stream;
  VAR_11 = VAR_6->spec->pcm_playback_analog_channels;
 }

 if (VAR_6->spec->has_adat)
  VAR_11 += 8;
 if (VAR_6->spec->has_spdif)
  VAR_11 += 2;
 VAR_8->hw.channels_min = VAR_8->hw.channels_max = VAR_11;

 VAR_9->rates = VAR_1 |
      VAR_2 |
      VAR_3 |
      VAR_4;
 FUNC_1(VAR_8);

 return FUNC_0(VAR_10, VAR_8);
}
