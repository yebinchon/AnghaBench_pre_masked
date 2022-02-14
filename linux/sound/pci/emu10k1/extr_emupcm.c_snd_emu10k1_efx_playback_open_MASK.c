
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm_mixer {int** send_routing; int** send_volume; int* attn; struct snd_emu10k1_pcm* epcm; } ;
struct snd_emu10k1_pcm {struct snd_pcm_substream* substream; int type; struct snd_emu10k1* emu; } ;
struct snd_emu10k1 {struct snd_emu10k1_pcm_mixer* efx_pcm_mixer; struct snd_pcm_substream* pcm_playback_efx_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_emu10k1_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (int***,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct snd_emu10k1*,int,int) ;
 int VAR_5 ;
 struct snd_emu10k1* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct snd_emu10k1 *VAR_7 = FUNC_3(VAR_6);
 struct snd_emu10k1_pcm *VAR_8;
 struct snd_emu10k1_pcm_mixer *VAR_9;
 struct snd_pcm_runtime *VAR_10 = VAR_6->runtime;
 int VAR_11;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_8->emu = VAR_7;
 VAR_8->type = VAR_3;
 VAR_8->substream = VAR_6;

 VAR_7->pcm_playback_efx_substream = VAR_6;

 VAR_10->private_data = VAR_8;
 VAR_10->private_free = VAR_5;
 VAR_10->hw = VAR_4;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_9 = &VAR_7->efx_pcm_mixer[VAR_11];
  VAR_9->send_routing[0][0] = VAR_11;
  FUNC_1(&VAR_9->send_volume, 0, sizeof(VAR_9->send_volume));
  VAR_9->send_volume[0][0] = 255;
  VAR_9->attn[0] = 0xffff;
  VAR_9->epcm = VAR_8;
  FUNC_2(VAR_7, VAR_11, 1);
 }
 return 0;
}
