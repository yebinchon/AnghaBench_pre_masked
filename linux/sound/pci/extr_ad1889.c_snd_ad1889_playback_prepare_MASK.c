
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; int format; } ;
struct TYPE_4__ {unsigned int size; int reg; int addr; } ;
struct snd_ad1889 {TYPE_2__ wave; TYPE_1__* card; int lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ad1889*,int ) ;
 int FUNC_1 (struct snd_ad1889*,int ) ;
 int FUNC_2 (struct snd_ad1889*,unsigned int) ;
 int FUNC_3 (struct snd_ad1889*,unsigned int) ;
 int FUNC_4 (struct snd_ad1889*,int ) ;
 int FUNC_5 (struct snd_ad1889*,int ,int) ;
 int FUNC_6 (int ,char*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (struct snd_pcm_substream*) ;
 unsigned int FUNC_9 (struct snd_pcm_substream*) ;
 struct snd_ad1889* FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct snd_pcm_substream *VAR_5)
{
 struct snd_ad1889 *VAR_6 = FUNC_10(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 unsigned int VAR_8 = FUNC_8(VAR_5);
 unsigned int VAR_9 = FUNC_9(VAR_5);
 u16 VAR_10;

 FUNC_0(VAR_6, VAR_0);

 VAR_10 = FUNC_4(VAR_6, VAR_2);


 VAR_10 &= ~(VAR_3 | VAR_4);

 if (FUNC_7(VAR_7->format) == 16)
  VAR_10 |= VAR_3;

 if (VAR_7->channels > 1)
  VAR_10 |= VAR_4;


 FUNC_11(&VAR_6->lock);

 VAR_6->wave.size = VAR_8;
 VAR_6->wave.reg = VAR_10;
 VAR_6->wave.addr = VAR_7->dma_addr;

 FUNC_5(VAR_6, VAR_2, VAR_6->wave.reg);


 FUNC_5(VAR_6, VAR_1, VAR_7->rate);


 FUNC_1(VAR_6, VAR_6->wave.addr);
 FUNC_2(VAR_6, VAR_8);
 FUNC_3(VAR_6, VAR_9);


 FUNC_4(VAR_6, VAR_2);

 FUNC_12(&VAR_6->lock);

 FUNC_6(VAR_6->card->dev,
  "prepare playback: addr = 0x%x, count = %u, size = %u, reg = 0x%x, rate = %u\n",
  VAR_6->wave.addr, VAR_9, VAR_8, VAR_10, VAR_7->rate);
 return 0;
}
