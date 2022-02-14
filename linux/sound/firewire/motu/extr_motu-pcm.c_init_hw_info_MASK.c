
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hardware {void* formats; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct snd_motu_packet_format {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_motu {struct snd_motu_packet_format rx_packet_formats; struct amdtp_stream rx_stream; struct snd_motu_packet_format tx_packet_formats; struct amdtp_stream tx_stream; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_motu*,struct snd_pcm_runtime*,struct snd_motu_packet_format*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_motu_packet_format*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_motu *VAR_6,
   struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct snd_pcm_hardware *VAR_9 = &VAR_8->hw;
 struct amdtp_stream *VAR_10;
 struct snd_motu_packet_format *VAR_11;
 int VAR_12;

 if (VAR_7->stream == VAR_3) {
  VAR_9->formats = VAR_0;
  VAR_10 = &VAR_6->tx_stream;
  VAR_11 = &VAR_6->tx_packet_formats;
 } else {
  VAR_9->formats = VAR_0;
  VAR_10 = &VAR_6->rx_stream;
  VAR_11 = &VAR_6->rx_packet_formats;
 }

 FUNC_1(VAR_6, VAR_8, VAR_11);

 VAR_12 = FUNC_2(VAR_8, 0, VAR_2,
      VAR_5, VAR_11,
      VAR_1, -1);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_2(VAR_8, 0, VAR_1,
      VAR_4, VAR_11,
      VAR_2, -1);
 if (VAR_12 < 0)
  return VAR_12;

 return FUNC_0(VAR_10, VAR_8);
}
