
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hardware {int channels_min; int channels_max; int rates; void* formats; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct amdtp_stream {int dummy; } ;
struct snd_dg00x {struct amdtp_stream rx_stream; struct amdtp_stream tx_stream; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_3(struct snd_dg00x *VAR_10,
         struct snd_pcm_substream *VAR_11)
{
 struct snd_pcm_runtime *VAR_12 = VAR_11->runtime;
 struct snd_pcm_hardware *VAR_13 = &VAR_12->hw;
 struct amdtp_stream *VAR_14;
 int VAR_15;


 if (VAR_11->stream == VAR_7) {
  VAR_11->runtime->hw.formats = VAR_0;
  VAR_14 = &VAR_10->tx_stream;
 } else {
  VAR_11->runtime->hw.formats = VAR_0;
  VAR_14 = &VAR_10->rx_stream;
 }

 VAR_13->channels_min = 10;
 VAR_13->channels_max = 18;

 VAR_13->rates = VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_6;
 FUNC_2(VAR_12);

 VAR_15 = FUNC_1(VAR_11->runtime, 0,
      VAR_1,
      VAR_8, ((void*)0),
      VAR_2, -1);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_11->runtime, 0,
      VAR_2,
      VAR_9, ((void*)0),
      VAR_1, -1);
 if (VAR_15 < 0)
  return VAR_15;

 return FUNC_0(VAR_14, VAR_11->runtime);
}
