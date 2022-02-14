
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* status; } ;
struct stm32_sai_sub_data {unsigned int spdif_frm_cnt; TYPE_1__ iec958; } ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int channels; scalar_t__ dma_area; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 struct stm32_sai_sub_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
           int VAR_2, unsigned long VAR_3,
           void *VAR_4, unsigned long VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_7 = VAR_1->private_data;
 struct snd_soc_dai *VAR_8 = VAR_7->cpu_dai;
 struct stm32_sai_sub_data *VAR_9 = FUNC_1(VAR_8->dev);
 int *VAR_10 = (int *)(VAR_6->dma_area + VAR_3 +
      VAR_2 * (VAR_6->dma_bytes / VAR_6->channels));
 ssize_t VAR_11 = FUNC_0(VAR_6, VAR_5);
 unsigned int VAR_12 = VAR_9->spdif_frm_cnt;
 unsigned int VAR_13;
 unsigned int VAR_14;

 do {
  *VAR_10 = ((*VAR_10 >> 8) & 0x00ffffff);


  VAR_13 = VAR_12 >> 3;
  VAR_14 = 1 << (VAR_12 - (VAR_13 << 3));
  if (VAR_9->iec958.status[VAR_13] & VAR_14)
   *VAR_10 |= 0x04000000;
  VAR_10++;

  if (!(VAR_11 % 2))
   VAR_12++;

  if (VAR_12 == VAR_0)
   VAR_12 = 0;
 } while (--VAR_11);
 VAR_9->spdif_frm_cnt = VAR_12;

 return 0;
}
