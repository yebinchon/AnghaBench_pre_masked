
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; unsigned int channels; int format; struct gus_pcm_private* private_data; } ;
struct TYPE_3__ {unsigned short pcm_volume_level_left; unsigned short pcm_volume_level_right; scalar_t__ enh_mode; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;
struct gus_pcm_private {int flags; int blocks; unsigned int voices; unsigned int memory; unsigned int dma_size; unsigned int bpos; unsigned int block_size; TYPE_2__** pvoices; int lock; scalar_t__ final_volume; struct snd_gus_card* gus; } ;
struct TYPE_4__ {int number; } ;


 unsigned char VAR_0 ;
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
 int VAR_14 ;
 int FUNC_0 (struct snd_gus_card*) ;
 int FUNC_1 (struct snd_gus_card*,int ) ;
 unsigned short FUNC_2 (struct snd_gus_card*,int) ;
 int FUNC_3 (struct snd_gus_card*,int ,int) ;
 int FUNC_4 (struct snd_gus_card*,int ,unsigned char) ;
 int FUNC_5 (struct snd_gus_card*,int ,unsigned int,unsigned char) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct snd_pcm_substream *VAR_15)
{
 struct snd_pcm_runtime *VAR_16 = VAR_15->runtime;
 struct gus_pcm_private *VAR_17 = VAR_16->private_data;
 struct snd_gus_card * VAR_18 = VAR_17->gus;
 unsigned long VAR_19;
 unsigned char VAR_20, VAR_21;
 unsigned short VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;
 unsigned short VAR_26;
 unsigned char VAR_27;
 unsigned int VAR_28;

 FUNC_7(&VAR_17->lock, VAR_19);
 if (VAR_17->flags & VAR_2) {
  FUNC_8(&VAR_17->lock, VAR_19);
  return;
 }
 VAR_17->flags |= VAR_2;
 VAR_17->final_volume = 0;
 FUNC_8(&VAR_17->lock, VAR_19);
 VAR_22 = FUNC_2(VAR_18, VAR_16->rate << 4);

 VAR_20 = FUNC_6(VAR_16->format) == 16 ? 0x24 : 0x20;

 VAR_21 = 0x24;
 if (VAR_17->blocks == 1) {
  VAR_20 |= 0x08;
  VAR_21 &= ~0x04;
 }
 for (VAR_28 = 0; VAR_28 < VAR_17->voices; VAR_28++) {
  VAR_24 = VAR_17->memory + VAR_28 * (VAR_17->dma_size / VAR_16->channels);
  VAR_23 = VAR_24 + (VAR_17->bpos * VAR_17->block_size) / VAR_16->channels;
  VAR_25 = VAR_23 + (VAR_17->block_size / VAR_16->channels);
  VAR_25 -= FUNC_6(VAR_16->format) == 16 ? 2 : 1;





  VAR_27 = VAR_16->channels == 2 ? (!VAR_28 ? 1 : 14) : 8;
  VAR_26 = !VAR_28 ? VAR_18->gf1.pcm_volume_level_left : VAR_18->gf1.pcm_volume_level_right;
  FUNC_7(&VAR_18->reg_lock, VAR_19);
  FUNC_1(VAR_18, VAR_17->pvoices[VAR_28]->number);
  FUNC_4(VAR_18, VAR_8, VAR_27);
  FUNC_3(VAR_18, VAR_13, VAR_22);
  FUNC_5(VAR_18, VAR_5, VAR_24 << 4, VAR_20 & 4);
  FUNC_5(VAR_18, VAR_4, VAR_25 << 4, VAR_20 & 4);
  FUNC_5(VAR_18, VAR_3, VAR_23 << 4, VAR_20 & 4);
  FUNC_3(VAR_18, VAR_14, VAR_1 << 4);
  FUNC_4(VAR_18, VAR_11, 0x2f);
  FUNC_4(VAR_18, VAR_12, VAR_0);
  FUNC_4(VAR_18, VAR_10, VAR_26 >> 8);
  FUNC_4(VAR_18, VAR_9, VAR_21);
  if (!VAR_18->gf1.enh_mode) {
   FUNC_0(VAR_18);
   FUNC_4(VAR_18, VAR_9, VAR_21);
  }
  FUNC_8(&VAR_18->reg_lock, VAR_19);
 }
 FUNC_7(&VAR_18->reg_lock, VAR_19);
 for (VAR_28 = 0; VAR_28 < VAR_17->voices; VAR_28++) {
  FUNC_1(VAR_18, VAR_17->pvoices[VAR_28]->number);
  if (VAR_18->gf1.enh_mode)
   FUNC_4(VAR_18, VAR_7, 0x00);
  FUNC_4(VAR_18, VAR_6, VAR_20);
  VAR_20 &= ~0x20;
 }
 VAR_20 |= 0x20;
 if (!VAR_18->gf1.enh_mode) {
  FUNC_0(VAR_18);
  for (VAR_28 = 0; VAR_28 < VAR_17->voices; VAR_28++) {
   FUNC_1(VAR_18, VAR_17->pvoices[VAR_28]->number);
   FUNC_4(VAR_18, VAR_6, VAR_20);
   VAR_20 &= ~0x20;
  }
 }
 FUNC_8(&VAR_18->reg_lock, VAR_19);
}
