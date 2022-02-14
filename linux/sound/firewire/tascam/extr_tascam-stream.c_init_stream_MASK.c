
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_tscm {int unit; TYPE_1__* spec; struct fw_iso_resources rx_resources; struct fw_iso_resources tx_resources; struct amdtp_stream tx_stream; } ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
struct TYPE_2__ {unsigned int pcm_capture_analog_channels; unsigned int pcm_playback_analog_channels; scalar_t__ has_spdif; scalar_t__ has_adat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdtp_stream*,int ,int,unsigned int) ;
 int FUNC_1 (struct fw_iso_resources*) ;
 int FUNC_2 (struct fw_iso_resources*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_tscm *VAR_2, struct amdtp_stream *VAR_3)
{
 struct fw_iso_resources *VAR_4;
 enum amdtp_stream_direction VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_3 == &VAR_2->tx_stream) {
  VAR_4 = &VAR_2->tx_resources;
  VAR_5 = VAR_0;
  VAR_6 = VAR_2->spec->pcm_capture_analog_channels;
 } else {
  VAR_4 = &VAR_2->rx_resources;
  VAR_5 = VAR_1;
  VAR_6 = VAR_2->spec->pcm_playback_analog_channels;
 }

 if (VAR_2->spec->has_adat)
  VAR_6 += 8;
 if (VAR_2->spec->has_spdif)
  VAR_6 += 2;

 VAR_7 = FUNC_2(VAR_4, VAR_2->unit);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_2->unit, VAR_5, VAR_6);
 if (VAR_7 < 0)
  FUNC_1(VAR_4);

 return VAR_7;
}
