
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int period_size; int rate; int format; struct snd_cs46xx_pcm* private_data; } ;
struct TYPE_7__ {unsigned int addr; } ;
struct TYPE_8__ {int hw_buffer_size; int sw_buffer_size; } ;
struct snd_cs46xx_pcm {int shift; TYPE_3__ hw_buf; TYPE_2__* pcm_channel; TYPE_4__ pcm_rec; } ;
struct snd_cs46xx {int dummy; } ;
struct TYPE_6__ {unsigned int pcm_slot; TYPE_1__* pcm_reader_scb; } ;
struct TYPE_5__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct snd_cs46xx*,int) ;
 int FUNC_3 (struct snd_cs46xx*,int,unsigned int) ;
 int FUNC_4 (struct snd_cs46xx*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 struct snd_cs46xx* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 struct snd_cs46xx *VAR_8 = FUNC_9(VAR_5);
 struct snd_pcm_runtime *VAR_9 = VAR_5->runtime;
 struct snd_cs46xx_pcm *VAR_10;

 VAR_10 = VAR_9->private_data;
 VAR_7 = FUNC_2(VAR_8, VAR_2);
  VAR_7 &= ~0x0000f03f;


 VAR_10->shift = 2;

 if (VAR_9->channels == 1) {
  VAR_10->shift--;
  VAR_7 |= 0x00002000;
 }

 if (FUNC_7(VAR_9->format) == 8) {
  VAR_10->shift--;
  VAR_7 |= 0x00001000;
 }

 if (FUNC_6(VAR_9->format))
  VAR_7 |= 0x00008000;


 if (FUNC_7(VAR_9->format) != 8) {

  if (FUNC_5(VAR_9->format))
   VAR_7 |= 0x00004000;
 }

 FUNC_0(&VAR_10->pcm_rec, 0, sizeof(VAR_10->pcm_rec));
 VAR_10->pcm_rec.sw_buffer_size = FUNC_8(VAR_5);
 VAR_10->pcm_rec.hw_buffer_size = VAR_9->period_size * VAR_3 << VAR_10->shift;
 FUNC_3(VAR_8, VAR_0, VAR_10->hw_buf.addr);
 VAR_6 = FUNC_2(VAR_8, VAR_1);
 VAR_6 &= ~0x000003ff;
 VAR_6 |= (4 << VAR_10->shift) - 1;
 FUNC_3(VAR_8, VAR_1, VAR_6);
 FUNC_3(VAR_8, VAR_2, VAR_7);
 FUNC_4(VAR_8, VAR_9->rate);


 return 0;
}
