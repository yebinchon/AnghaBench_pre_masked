
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_emu10k1* private_data; } ;
struct TYPE_4__ {int device; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct snd_emu10k1 {int* efx_voices_mask; int pci; int card; TYPE_1__* card_capabilities; scalar_t__ audigy; struct snd_pcm* pcm_efx; } ;
struct TYPE_3__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (int *,struct snd_emu10k1*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_4 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,int ,int *) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct snd_emu10k1 *VAR_7, int VAR_8)
{
 struct snd_pcm *VAR_9;
 struct snd_kcontrol *VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_4(VAR_7->card, "emu10k1 efx", VAR_8, 8, 1, &VAR_9)) < 0)
  return VAR_11;

 VAR_9->private_data = VAR_7;

 FUNC_5(VAR_9, VAR_3, &VAR_5);
 FUNC_5(VAR_9, VAR_2, &VAR_4);

 VAR_9->info_flags = 0;
 FUNC_6(VAR_9->name, "Multichannel Capture/PT Playback");
 VAR_7->pcm_efx = VAR_9;






 if (VAR_7->audigy) {
  VAR_7->efx_voices_mask[0] = 0;
  if (VAR_7->card_capabilities->emu_model)




   VAR_7->efx_voices_mask[1] = 0xffffffff;
  else
   VAR_7->efx_voices_mask[1] = 0xffff;
 } else {
  VAR_7->efx_voices_mask[0] = 0xffff0000;
  VAR_7->efx_voices_mask[1] = 0;
 }






 VAR_10 = FUNC_1(&VAR_6, VAR_7);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->id.device = VAR_8;
 VAR_11 = FUNC_0(VAR_7->card, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_3(VAR_9, VAR_1,
           FUNC_2(VAR_7->pci),
           64*1024, 64*1024);

 return 0;
}
