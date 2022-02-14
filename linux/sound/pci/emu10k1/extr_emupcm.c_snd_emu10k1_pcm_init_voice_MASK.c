
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int format; } ;
struct snd_emu10k1_voice {int number; TYPE_1__* epcm; } ;
struct snd_emu10k1_pcm_mixer {int ** send_volume; int ** send_routing; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct snd_emu10k1 {unsigned int delay_pcm_irq; unsigned int address_mode; int reg_lock; TYPE_3__ silent_page; TYPE_2__* card_capabilities; scalar_t__ audigy; } ;
typedef int send_routing ;
typedef int send_amount ;
struct TYPE_5__ {scalar_t__ emu_model; } ;
struct TYPE_4__ {unsigned int ccca_start_addr; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*,int *,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct snd_emu10k1*,int ,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct snd_emu10k1 *VAR_32,
           int VAR_33, int VAR_34,
           struct snd_emu10k1_voice *VAR_35,
           unsigned int VAR_36,
           unsigned int VAR_37,
           struct snd_emu10k1_pcm_mixer *VAR_38)
{
 struct snd_pcm_substream *VAR_39 = VAR_35->epcm->substream;
 struct snd_pcm_runtime *VAR_40 = VAR_39->runtime;
 unsigned int VAR_41, VAR_42;
 int VAR_43, VAR_44, VAR_45;
 unsigned char VAR_46[8];
 unsigned char VAR_47[8];
 unsigned long VAR_48;
 unsigned int VAR_49;
 unsigned int VAR_50;

 VAR_43 = VAR_35->number;
 VAR_44 = VAR_40->channels == 2;
 VAR_45 = FUNC_9(VAR_40->format) == 16;

 if (!VAR_34 && VAR_44) {
  VAR_36 >>= 1;
  VAR_37 >>= 1;
 }
 if (VAR_45) {
  VAR_36 >>= 1;
  VAR_37 >>= 1;
 }

 FUNC_10(&VAR_32->reg_lock, VAR_48);


 if (VAR_34) {
  FUNC_4(VAR_47, 0, sizeof(VAR_47));
  VAR_47[0] = 0;
  VAR_47[1] = 1;
  VAR_47[2] = 2;
  VAR_47[3] = 3;
  FUNC_4(VAR_46, 0, sizeof(VAR_46));
 } else {

  VAR_42 = VAR_44 ? (VAR_33 ? 1 : 2) : 0;
  FUNC_3(VAR_47, &VAR_38->send_routing[VAR_42][0], 8);
  FUNC_3(VAR_46, &VAR_38->send_volume[VAR_42][0], 8);
 }

 VAR_50 = FUNC_1(VAR_44, VAR_45);

 if (VAR_33) {
  VAR_35->epcm->ccca_start_addr = VAR_36 + VAR_50;
  if (VAR_34) {
   VAR_36 += VAR_50;
   VAR_37 += VAR_50 + VAR_32->delay_pcm_irq;
  }
  if (VAR_44 && !VAR_34) {
   FUNC_8(VAR_32, VAR_7, VAR_43, VAR_8);
   FUNC_8(VAR_32, VAR_7, (VAR_43 + 1), VAR_8);
  } else {
   FUNC_8(VAR_32, VAR_7, VAR_43, 0);
  }
 }


 if (VAR_32->audigy) {
  FUNC_8(VAR_32, VAR_2, VAR_43,
          FUNC_5(VAR_47));
  FUNC_8(VAR_32, VAR_3, VAR_43,
          FUNC_6(VAR_47));
  FUNC_8(VAR_32, VAR_4, VAR_43,
          ((unsigned int)VAR_46[4] << 24) |
          ((unsigned int)VAR_46[5] << 16) |
          ((unsigned int)VAR_46[6] << 8) |
          (unsigned int)VAR_46[7]);
 } else
  FUNC_8(VAR_32, VAR_16, VAR_43,
          FUNC_7(VAR_47));


 FUNC_8(VAR_32, VAR_27, VAR_43, (VAR_46[0] << 8) | VAR_46[1]);
 FUNC_8(VAR_32, VAR_11, VAR_43, VAR_37 | (VAR_46[3] << 24));
 FUNC_8(VAR_32, VAR_26, VAR_43,
   (VAR_36 + (VAR_34 ? VAR_32->delay_pcm_irq : 0)) |
   (VAR_46[2] << 24));
 if (VAR_32->card_capabilities->emu_model)
  VAR_49 = VAR_25;
 else
  VAR_49 = FUNC_0(VAR_40->rate);
 if (VAR_34)
  FUNC_8(VAR_32, VAR_5, VAR_43, VAR_36 |
         FUNC_2(VAR_49) |
         (VAR_45 ? 0 : VAR_6));
 else
  FUNC_8(VAR_32, VAR_5, VAR_43, (VAR_36 + VAR_50) |
         FUNC_2(VAR_49) |
         (VAR_45 ? 0 : VAR_6));

 FUNC_8(VAR_32, VAR_30, VAR_43, 0);
 FUNC_8(VAR_32, VAR_31, VAR_43, 0);

 VAR_41 = ((unsigned int)VAR_32->silent_page.addr << VAR_32->address_mode) | (VAR_32->address_mode ? VAR_22 : VAR_21);
 FUNC_8(VAR_32, VAR_19, VAR_43, VAR_41);
 FUNC_8(VAR_32, VAR_20, VAR_43, VAR_41);

 FUNC_8(VAR_32, VAR_9, VAR_43, 0xffff);
 FUNC_8(VAR_32, VAR_29, VAR_43, 0xffff);
 FUNC_8(VAR_32, VAR_0, VAR_43, 0);
 FUNC_8(VAR_32, VAR_10, VAR_43, 0x007f);
 FUNC_8(VAR_32, VAR_17, VAR_43, 0x8000);
 FUNC_8(VAR_32, VAR_18, VAR_43, 0x8000);
 FUNC_8(VAR_32, VAR_15, VAR_43, 0);
 FUNC_8(VAR_32, VAR_28, VAR_43, 0);
 FUNC_8(VAR_32, VAR_14, VAR_43, 0);
 FUNC_8(VAR_32, VAR_12, VAR_43, 0x8000);

 FUNC_8(VAR_32, VAR_1, VAR_43, 0x7f7f);
 FUNC_8(VAR_32, VAR_13, VAR_43, 0x0000);

 FUNC_8(VAR_32, VAR_23, VAR_43, 0x7f);

 FUNC_8(VAR_32, VAR_24, VAR_43, 0);

 FUNC_11(&VAR_32->reg_lock, VAR_48);
}
