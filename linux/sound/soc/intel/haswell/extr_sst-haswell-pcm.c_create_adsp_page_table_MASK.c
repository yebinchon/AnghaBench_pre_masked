
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_dma_buffer {int dummy; } ;
struct hsw_priv_data {TYPE_1__** dmab; } ;
struct TYPE_2__ {scalar_t__ area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct snd_dma_buffer* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct snd_dma_buffer*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
 struct hsw_priv_data *VAR_3, struct snd_soc_pcm_runtime *VAR_4,
 unsigned char *VAR_5, size_t VAR_6, int VAR_7)
{
 struct snd_dma_buffer *VAR_8 = FUNC_1(VAR_2);
 int VAR_9, VAR_10, VAR_11 = VAR_2->stream;

 VAR_10 = FUNC_2(VAR_6);

 FUNC_0(VAR_4->dev, "generating page table for %p size 0x%zx pages %d\n",
  VAR_5, VAR_6, VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  u32 VAR_12 = (((VAR_9 << 2) + VAR_9)) >> 1;
  u32 VAR_13 = FUNC_3(VAR_8, VAR_9 * VAR_1) >> VAR_0;
  u32 *VAR_14;

  FUNC_0(VAR_4->dev, "pfn i %i idx %d pfn %x\n", VAR_9, VAR_12, VAR_13);

  VAR_14 = (u32 *)(VAR_3->dmab[VAR_7][VAR_11].area + VAR_12);

  if (VAR_9 & 1)
   *VAR_14 |= (VAR_13 << 4);
  else
   *VAR_14 |= VAR_13;
 }

 return 0;
}
