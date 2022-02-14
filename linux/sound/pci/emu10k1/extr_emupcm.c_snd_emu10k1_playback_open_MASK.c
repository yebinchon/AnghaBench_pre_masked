
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm_mixer {int** send_routing; int** send_volume; int* attn; struct snd_emu10k1_pcm* epcm; } ;
struct snd_emu10k1_pcm {struct snd_pcm_substream* substream; int type; struct snd_emu10k1* emu; } ;
struct TYPE_4__ {scalar_t__ internal_clock; } ;
struct snd_emu10k1 {struct snd_emu10k1_pcm_mixer* pcm_mixer; TYPE_2__ emu1010; TYPE_1__* card_capabilities; } ;
struct TYPE_3__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_emu10k1_pcm*) ;
 struct snd_emu10k1_pcm* FUNC_1 (int,int ) ;
 int FUNC_2 (int***,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_emu10k1*,size_t,int) ;
 int VAR_7 ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int,int ) ;
 int FUNC_6 (struct snd_pcm_runtime*,int) ;
 struct snd_emu10k1* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_8)
{
 struct snd_emu10k1 *VAR_9 = FUNC_7(VAR_8);
 struct snd_emu10k1_pcm *VAR_10;
 struct snd_emu10k1_pcm_mixer *VAR_11;
 struct snd_pcm_runtime *VAR_12 = VAR_8->runtime;
 int VAR_13, VAR_14, VAR_15;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;
 VAR_10->emu = VAR_9;
 VAR_10->type = VAR_2;
 VAR_10->substream = VAR_8;
 VAR_12->private_data = VAR_10;
 VAR_12->private_free = VAR_6;
 VAR_12->hw = VAR_7;
 if ((VAR_14 = FUNC_4(VAR_12, VAR_4)) < 0) {
  FUNC_0(VAR_10);
  return VAR_14;
 }
 if ((VAR_14 = FUNC_5(VAR_12, VAR_3, 256, VAR_5)) < 0) {
  FUNC_0(VAR_10);
  return VAR_14;
 }
 if (VAR_9->card_capabilities->emu_model && VAR_9->emu1010.internal_clock == 0)
  VAR_15 = 44100;
 else
  VAR_15 = 48000;
 VAR_14 = FUNC_6(VAR_12, VAR_15);
 if (VAR_14 < 0) {
  FUNC_0(VAR_10);
  return VAR_14;
 }
 VAR_11 = &VAR_9->pcm_mixer[VAR_8->number];
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  VAR_11->send_routing[0][VAR_13] = VAR_11->send_routing[1][VAR_13] = VAR_11->send_routing[2][VAR_13] = VAR_13;
 FUNC_2(&VAR_11->send_volume, 0, sizeof(VAR_11->send_volume));
 VAR_11->send_volume[0][0] = VAR_11->send_volume[0][1] =
 VAR_11->send_volume[1][0] = VAR_11->send_volume[2][1] = 255;
 VAR_11->attn[0] = VAR_11->attn[1] = VAR_11->attn[2] = 0xffff;
 VAR_11->epcm = VAR_10;
 FUNC_3(VAR_9, VAR_8->number, 1);
 return 0;
}
