
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int capture_ipr; int capture_idx_reg; int capture_bs_reg; int capture_ba_reg; int capture_inte; struct snd_pcm_substream* substream; int type; struct snd_emu10k1* emu; } ;
struct snd_emu10k1 {struct snd_pcm_substream* pcm_capture_substream; int capture_interrupt; scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct snd_emu10k1_pcm* FUNC_0 (int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_17)
{
 struct snd_emu10k1 *VAR_18 = FUNC_2(VAR_17);
 struct snd_pcm_runtime *VAR_19 = VAR_17->runtime;
 struct snd_emu10k1_pcm *VAR_20;

 VAR_20 = FUNC_0(sizeof(*VAR_20), VAR_6);
 if (VAR_20 == ((void*)0))
  return -VAR_5;
 VAR_20->emu = VAR_18;
 VAR_20->type = VAR_4;
 VAR_20->substream = VAR_17;
 VAR_20->capture_ipr = VAR_8|VAR_9;
 VAR_20->capture_inte = VAR_7;
 VAR_20->capture_ba_reg = VAR_0;
 VAR_20->capture_bs_reg = VAR_1;
 VAR_20->capture_idx_reg = VAR_18->audigy ? VAR_3 : VAR_2;
 VAR_19->private_data = VAR_20;
 VAR_19->private_free = VAR_16;
 VAR_19->hw = VAR_14;
 VAR_18->capture_interrupt = VAR_15;
 VAR_18->pcm_capture_substream = VAR_17;
 FUNC_1(VAR_19, 0, VAR_10, &VAR_12);
 FUNC_1(VAR_19, 0, VAR_11, &VAR_13);
 return 0;
}
