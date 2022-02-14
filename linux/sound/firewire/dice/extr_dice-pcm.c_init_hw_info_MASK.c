
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; TYPE_1__* pcm; } ;
struct snd_pcm_hardware {int formats; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct snd_dice {struct amdtp_stream* rx_stream; struct amdtp_stream* tx_stream; } ;
struct amdtp_stream {int dummy; } ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
struct TYPE_2__ {unsigned int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct snd_dice*,struct snd_pcm_runtime*,int,unsigned int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_pcm_substream*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_dice *VAR_9,
   struct snd_pcm_substream *VAR_10)
{
 struct snd_pcm_runtime *VAR_11 = VAR_10->runtime;
 struct snd_pcm_hardware *VAR_12 = &VAR_11->hw;
 unsigned int VAR_13 = VAR_10->pcm->device;
 enum amdtp_stream_direction VAR_14;
 struct amdtp_stream *VAR_15;
 int VAR_16;

 if (VAR_10->stream == VAR_6) {
  VAR_12->formats = VAR_0;
  VAR_14 = VAR_2;
  VAR_15 = &VAR_9->tx_stream[VAR_13];
 } else {
  VAR_12->formats = VAR_1;
  VAR_14 = VAR_3;
  VAR_15 = &VAR_9->rx_stream[VAR_13];
 }

 VAR_16 = FUNC_1(VAR_9, VAR_10->runtime, VAR_14,
           VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_11, 0, VAR_5,
      VAR_8, VAR_10,
      VAR_4, -1);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_16 = FUNC_2(VAR_11, 0, VAR_4,
      VAR_7, VAR_10,
      VAR_5, -1);
 if (VAR_16 < 0)
  return VAR_16;

 return FUNC_0(VAR_15, VAR_11);
}
