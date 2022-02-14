
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ymfpci_pcm {int buffer_size; int shift; int capture_bank_number; scalar_t__ last_pos; scalar_t__ period_pos; int period_size; } ;
struct snd_ymfpci_capture_bank {scalar_t__ num_of_loops; scalar_t__ start; void* loop_end; void* base; } ;
struct snd_ymfpci {struct snd_ymfpci_capture_bank*** bank_capture; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; int rate; int channels; int dma_addr; int format; int period_size; struct snd_ymfpci_pcm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct snd_ymfpci* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct snd_ymfpci *VAR_5 = FUNC_2(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct snd_ymfpci_pcm *VAR_7 = VAR_6->private_data;
 struct snd_ymfpci_capture_bank * VAR_8;
 int VAR_9;
 u32 VAR_10, VAR_11;

 VAR_7->period_size = VAR_6->period_size;
 VAR_7->buffer_size = VAR_6->buffer_size;
 VAR_7->period_pos = 0;
 VAR_7->last_pos = 0;
 VAR_7->shift = 0;
 VAR_10 = ((48000 * 4096) / VAR_6->rate) - 1;
 VAR_11 = 0;
 if (VAR_6->channels == 2) {
  VAR_11 |= 2;
  VAR_7->shift++;
 }
 if (FUNC_1(VAR_6->format) == 8)
  VAR_11 |= 1;
 else
  VAR_7->shift++;
 switch (VAR_7->capture_bank_number) {
 case 0:
  FUNC_3(VAR_5, VAR_2, VAR_11);
  FUNC_3(VAR_5, VAR_3, VAR_10);
  break;
 case 1:
  FUNC_3(VAR_5, VAR_0, VAR_11);
  FUNC_3(VAR_5, VAR_1, VAR_10);
  break;
 }
 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_8 = VAR_5->bank_capture[VAR_7->capture_bank_number][VAR_9];
  VAR_8->base = FUNC_0(VAR_6->dma_addr);
  VAR_8->loop_end = FUNC_0(VAR_7->buffer_size << VAR_7->shift);
  VAR_8->start = 0;
  VAR_8->num_of_loops = 0;
 }
 return 0;
}
