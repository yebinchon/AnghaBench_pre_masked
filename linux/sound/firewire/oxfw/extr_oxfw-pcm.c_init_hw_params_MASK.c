
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int formats; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct amdtp_stream {int dummy; } ;
struct snd_oxfw {int ** rx_stream_formats; struct amdtp_stream rx_stream; int ** tx_stream_formats; struct amdtp_stream tx_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ,int **,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_oxfw *VAR_7,
     struct snd_pcm_substream *VAR_8)
{
 struct snd_pcm_runtime *VAR_9 = VAR_8->runtime;
 u8 **VAR_10;
 struct amdtp_stream *VAR_11;
 int VAR_12;

 if (VAR_8->stream == VAR_4) {
  VAR_9->hw.formats = VAR_0;
  VAR_11 = &VAR_7->tx_stream;
  VAR_10 = VAR_7->tx_stream_formats;
 } else {
  VAR_9->hw.formats = VAR_1;
  VAR_11 = &VAR_7->rx_stream;
  VAR_10 = VAR_7->rx_stream_formats;
 }

 FUNC_1(&VAR_9->hw, VAR_10);

 VAR_12 = FUNC_2(VAR_9, 0, VAR_2,
      VAR_5, VAR_10,
      VAR_3, -1);
 if (VAR_12 < 0)
  goto end;

 VAR_12 = FUNC_2(VAR_9, 0, VAR_3,
      VAR_6, VAR_10,
      VAR_2, -1);
 if (VAR_12 < 0)
  goto end;

 VAR_12 = FUNC_0(VAR_11, VAR_9);
end:
 return VAR_12;
}
