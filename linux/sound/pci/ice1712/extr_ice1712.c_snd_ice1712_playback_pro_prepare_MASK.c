
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ice1712 {int playback_pro_size; int reg_lock; } ;
struct TYPE_2__ {int dma_addr; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_5(VAR_3);

 VAR_4->playback_pro_size = FUNC_3(VAR_3);
 FUNC_6(&VAR_4->reg_lock);
 FUNC_1(VAR_3->runtime->dma_addr, FUNC_0(VAR_4, VAR_0));
 FUNC_2((VAR_4->playback_pro_size >> 2) - 1, FUNC_0(VAR_4, VAR_2));
 FUNC_2((FUNC_4(VAR_3) >> 2) - 1, FUNC_0(VAR_4, VAR_1));
 FUNC_7(&VAR_4->reg_lock);

 return 0;
}
