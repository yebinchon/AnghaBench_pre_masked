
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {int ESO; int Delta; int FMC; int RVol; int CVol; int GVSel; int Pan; int Vol; int number; int isync2; int isync_mark; scalar_t__ Attribute; scalar_t__ FMS; scalar_t__ Alpha; scalar_t__ EC; int CTRL; scalar_t__ CSO; int LBA; int spurious_threshold; scalar_t__ foldback_chan; TYPE_1__* memblk; struct snd_trident_voice* extra; } ;
struct snd_trident {scalar_t__ device; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; int period_size; int dma_addr; struct snd_trident_voice* private_data; } ;
struct TYPE_2__ {int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct snd_trident*,struct snd_trident_voice*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2)
{
 struct snd_trident *VAR_3 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_trident_voice *VAR_5 = VAR_4->private_data;
 struct snd_trident_voice *VAR_6 = VAR_5->extra;

 FUNC_6(&VAR_3->reg_lock);


 if (VAR_5->memblk)
  VAR_5->LBA = VAR_5->memblk->offset;
 else
  VAR_5->LBA = VAR_4->dma_addr;


 VAR_5->ESO = VAR_4->buffer_size - 1;


 VAR_5->Delta = 0x1000;
 VAR_5->spurious_threshold = FUNC_4(48000, VAR_4->period_size);

 VAR_5->CSO = 0;
 VAR_5->CTRL = FUNC_3(VAR_2);
 VAR_5->FMC = 3;
 VAR_5->RVol = 0x7f;
 VAR_5->CVol = 0x7f;
 VAR_5->GVSel = 1;
 VAR_5->Pan = 0x7f;
 VAR_5->Vol = 0x3ff;
 VAR_5->EC = 0;
 VAR_5->Alpha = 0;
 VAR_5->FMS = 0;
 VAR_5->Attribute = 0;


 FUNC_1(((VAR_5->number & 0x3f) | 0x80), FUNC_0(VAR_3, VAR_0 + VAR_5->foldback_chan));

 FUNC_5(VAR_3, VAR_5);

 if (VAR_6 != ((void*)0)) {
  VAR_6->Delta = VAR_5->Delta;
  VAR_6->spurious_threshold = VAR_5->spurious_threshold;
  VAR_6->LBA = VAR_5->LBA;
  VAR_6->CSO = 0;
  VAR_6->ESO = (VAR_4->period_size * 2) + 4 - 1;
  VAR_6->CTRL = VAR_5->CTRL;
  VAR_6->FMC = 3;
  VAR_6->GVSel = VAR_3->device == VAR_1 ? 0 : 1;
  VAR_6->EC = 0;
  VAR_6->Alpha = 0;
  VAR_6->FMS = 0;
  VAR_6->Vol = 0x3ff;
  VAR_6->RVol = VAR_6->CVol = 0x7f;
  VAR_6->Pan = 0x7f;
  VAR_6->Attribute = 0;
  FUNC_5(VAR_3, VAR_6);
  VAR_6->isync2 = 1;
  VAR_6->isync_mark = VAR_4->period_size;
  VAR_6->ESO = (VAR_4->period_size * 2) - 1;
 }

 FUNC_7(&VAR_3->reg_lock);
 return 0;
}
