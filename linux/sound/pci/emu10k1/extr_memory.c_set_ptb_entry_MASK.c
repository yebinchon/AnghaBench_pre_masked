
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1 {TYPE_1__* card; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_emu10k1*,int) ;
 int FUNC_1 (struct snd_emu10k1*,int,int ) ;
 int FUNC_2 (int ,char*,int,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct snd_emu10k1 *VAR_2, int VAR_3, dma_addr_t VAR_4)
{
 int VAR_5;
 VAR_3 *= VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_3++) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_2->card->dev, "mapped page %d to entry %.8x\n", VAR_3,
   (unsigned int)FUNC_0(VAR_2, VAR_3));
  VAR_4 += VAR_0;
 }
}
