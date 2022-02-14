
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {void* formats; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct amdtp_stream {int dummy; } ;
struct snd_ff {TYPE_1__* spec; struct amdtp_stream rx_stream; struct amdtp_stream tx_stream; } ;
struct TYPE_3__ {unsigned int* pcm_capture_channels; unsigned int* pcm_playback_channels; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,unsigned int const*) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ,void*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_ff *VAR_6,
         struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct amdtp_stream *VAR_9;
 const unsigned int *VAR_10;
 int VAR_11;

 if (VAR_7->stream == VAR_3) {
  VAR_8->hw.formats = VAR_0;
  VAR_9 = &VAR_6->tx_stream;
  VAR_10 = VAR_6->spec->pcm_capture_channels;
 } else {
  VAR_8->hw.formats = VAR_0;
  VAR_9 = &VAR_6->rx_stream;
  VAR_10 = VAR_6->spec->pcm_playback_channels;
 }

 FUNC_1(&VAR_8->hw, VAR_10);

 VAR_11 = FUNC_2(VAR_8, 0, VAR_1,
      VAR_4, (void *)VAR_10,
      VAR_2, -1);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8, 0, VAR_2,
      VAR_5, (void *)VAR_10,
      VAR_1, -1);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_0(VAR_9, VAR_8);
}
