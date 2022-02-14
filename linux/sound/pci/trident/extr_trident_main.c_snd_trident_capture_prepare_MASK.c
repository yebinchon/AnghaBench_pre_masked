
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {unsigned int LBA; int isync; int isync_mark; int ESO; int isync_ESO; int FMC; int RVol; int CVol; int GVSel; int Pan; int Vol; scalar_t__ Attribute; scalar_t__ FMS; scalar_t__ Alpha; scalar_t__ EC; int CTRL; scalar_t__ CSO; int isync_max; int spurious_threshold; int Delta; TYPE_1__* memblk; } ;
struct snd_trident {int bDMAStart; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int dma_addr; int rate; int channels; int period_size; int buffer_size; int format; struct snd_trident_voice* private_data; } ;
struct TYPE_2__ {unsigned int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct snd_trident* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 (struct snd_trident*,struct snd_trident_voice*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_7)
{
 struct snd_trident *VAR_8 = FUNC_7(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 struct snd_trident_voice *VAR_10 = VAR_9->private_data;
 unsigned int VAR_11, VAR_12;

 FUNC_12(&VAR_8->reg_lock);


 FUNC_1(0, FUNC_0(VAR_8, VAR_2));


 FUNC_1(0x54, FUNC_0(VAR_8, VAR_1));


 VAR_10->LBA = VAR_9->dma_addr;
 FUNC_2(VAR_10->LBA, FUNC_0(VAR_8, VAR_0));
 if (VAR_10->memblk)
  VAR_10->LBA = VAR_10->memblk->offset;


 VAR_12 = FUNC_6(VAR_7) - 1;
 FUNC_1((VAR_12 & 0x00ff0000) >> 16, FUNC_0(VAR_8, VAR_4));
 FUNC_3((VAR_12 & 0x0000ffff), FUNC_0(VAR_8, VAR_3));
 VAR_12++;


 VAR_11 = (((unsigned int) 48000L << 12) + (VAR_9->rate/2)) / VAR_9->rate;
 FUNC_3(VAR_11, FUNC_0(VAR_8, VAR_6));


 if (FUNC_5(VAR_9->format) == 16) {
  VAR_11 = (unsigned short) ((VAR_12 >> 1) - 1);
 } else {
  VAR_11 = (unsigned short) (VAR_12 - 1);
 }

 FUNC_2((VAR_11 << 16) | VAR_11, FUNC_0(VAR_8, VAR_5));



 VAR_8->bDMAStart = 0x19;

 if (FUNC_5(VAR_9->format) == 16)
  VAR_8->bDMAStart |= 0x80;
 if (FUNC_4(VAR_9->format))
  VAR_8->bDMAStart |= 0x20;
 if (VAR_9->channels > 1)
  VAR_8->bDMAStart |= 0x40;



 VAR_10->Delta = FUNC_9(VAR_9->rate);
 VAR_10->spurious_threshold = FUNC_10(VAR_9->rate, VAR_9->period_size);
 VAR_10->isync = 1;
 VAR_10->isync_mark = VAR_9->period_size;
 VAR_10->isync_max = VAR_9->buffer_size;


 VAR_10->CSO = 0;
 VAR_10->ESO = VAR_10->isync_ESO = (VAR_9->period_size * 2) + 6 - 1;
 VAR_10->CTRL = FUNC_8(VAR_7);
 VAR_10->FMC = 3;
 VAR_10->RVol = 0x7f;
 VAR_10->CVol = 0x7f;
 VAR_10->GVSel = 1;
 VAR_10->Pan = 0x7f;
 VAR_10->Vol = 0x3ff;
 VAR_10->EC = 0;
 VAR_10->Alpha = 0;
 VAR_10->FMS = 0;
 VAR_10->Attribute = 0;

 FUNC_11(VAR_8, VAR_10);

 FUNC_13(&VAR_8->reg_lock);
 return 0;
}
