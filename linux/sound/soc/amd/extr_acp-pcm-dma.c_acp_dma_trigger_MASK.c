
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct audio_substream_data* private_data; } ;
struct audio_substream_data {int ch1; int acp_mmio; int ch2; int capture_channel; int bytescount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct audio_substream_data*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 int VAR_6;

 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 struct audio_substream_data *VAR_8 = VAR_7->private_data;

 if (!VAR_8)
  return -VAR_2;
 switch (VAR_5) {
 case 130:
 case 132:
 case 131:
  VAR_8->bytescount = FUNC_4(VAR_8);
  if (VAR_4->stream == VAR_3) {
   if (VAR_8->capture_channel == VAR_0) {
    FUNC_0(VAR_8->acp_mmio,
           VAR_1);
    FUNC_1(VAR_8->acp_mmio,
          VAR_0);
   }
   if (VAR_8->capture_channel == VAR_1) {
    FUNC_0(VAR_8->acp_mmio,
           VAR_0);
    FUNC_1(VAR_8->acp_mmio,
          VAR_1);
   }
   FUNC_2(VAR_8->acp_mmio, VAR_8->ch1, 1);
  } else {
   FUNC_2(VAR_8->acp_mmio, VAR_8->ch1, 1);
   FUNC_2(VAR_8->acp_mmio, VAR_8->ch2, 1);
  }
  VAR_6 = 0;
  break;
 case 129:
 case 133:
 case 128:
  FUNC_3(VAR_8->acp_mmio, VAR_8->ch2);
  VAR_6 = FUNC_3(VAR_8->acp_mmio, VAR_8->ch1);
  break;
 default:
  VAR_6 = -VAR_2;
 }
 return VAR_6;
}
