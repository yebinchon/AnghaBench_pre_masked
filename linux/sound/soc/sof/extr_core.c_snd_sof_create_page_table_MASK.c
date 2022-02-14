
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_sof_dev {int dev; } ;
struct snd_dma_buffer {int area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,size_t,int) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct snd_dma_buffer*,int) ;

int FUNC_5(struct snd_sof_dev *VAR_2,
         struct snd_dma_buffer *VAR_3,
         unsigned char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_2->dev, "generating page table for %p size 0x%zx pages %d\n",
  VAR_3->area, VAR_5, VAR_7);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {







  u32 VAR_8 = (5 * VAR_6) >> 1;
  u32 VAR_9 = FUNC_4(VAR_3, VAR_6 * VAR_1) >> VAR_0;
  u8 *VAR_10;

  FUNC_1(VAR_2->dev, "pfn i %i idx %d pfn %x\n", VAR_6, VAR_8, VAR_9);

  VAR_10 = (u8 *)(VAR_4 + VAR_8);
  if (VAR_6 & 1)
   FUNC_2((VAR_10[0] & 0xf) | VAR_9 << 4,
        VAR_10);
  else
   FUNC_2(VAR_9, VAR_10);
 }

 return VAR_7;
}
