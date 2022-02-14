
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; int channels; int format; int dma_addr; } ;
struct snd_ad1816a {unsigned int c_dma_size; int clock_freq; int lock; int dma2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_ad1816a*,int ,int ) ;
 int FUNC_1 (struct snd_ad1816a*,int ,int,int) ;
 int FUNC_2 (struct snd_ad1816a*,int ,int) ;
 int FUNC_3 (int ,int ,unsigned int,int) ;
 unsigned int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_ad1816a* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_9)
{
 struct snd_ad1816a *VAR_10 = FUNC_6(VAR_9);
 unsigned long VAR_11;
 struct snd_pcm_runtime *VAR_12 = VAR_9->runtime;
 unsigned int VAR_13, VAR_14;

 FUNC_7(&VAR_10->lock, VAR_11);

 VAR_10->c_dma_size = VAR_13 = FUNC_4(VAR_9);
 FUNC_1(VAR_10, VAR_1,
  VAR_2 | VAR_3, 0x00);

 FUNC_3(VAR_10->dma2, VAR_12->dma_addr, VAR_13,
   VAR_8 | VAR_7);

 VAR_14 = VAR_12->rate;
 if (VAR_10->clock_freq)
  VAR_14 = (VAR_14 * 33000) / VAR_10->clock_freq;
 FUNC_2(VAR_10, VAR_4, VAR_14);
 FUNC_1(VAR_10, VAR_1,
  VAR_5 | VAR_6,
  FUNC_0(VAR_10, VAR_12->format,
   VAR_12->channels));

 FUNC_2(VAR_10, VAR_0,
  FUNC_5(VAR_9) / 4 - 1);

 FUNC_8(&VAR_10->lock, VAR_11);
 return 0;
}
