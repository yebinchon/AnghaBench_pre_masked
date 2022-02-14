
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct snd_emu10k1 {TYPE_2__* card; TYPE_1__ silent_page; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_emu10k1*,int) ;
 int FUNC_1 (struct snd_emu10k1*,int,int ) ;
 int FUNC_2 (int ,char*,int,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct snd_emu10k1 *VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_2 *= VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_2++) {

  FUNC_1(VAR_1, VAR_2, VAR_1->silent_page.addr);
  FUNC_2(VAR_1->card->dev, "mapped silent page %d to entry %.8x\n",
   VAR_2, (unsigned int)FUNC_0(VAR_1, VAR_2));
 }
}
