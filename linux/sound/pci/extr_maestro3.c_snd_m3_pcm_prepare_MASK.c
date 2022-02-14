
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ format; int rate; struct m3_dma* private_data; } ;
struct snd_m3 {int reg_lock; } ;
struct m3_dma {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_m3*,struct m3_dma*,struct snd_pcm_runtime*) ;
 int FUNC_4 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 struct snd_m3* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct snd_pcm_substream *VAR_5)
{
 struct snd_m3 *VAR_6 = FUNC_5(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct m3_dma *VAR_8 = VAR_7->private_data;

 if (FUNC_0(!VAR_8))
  return -VAR_1;

 if (VAR_7->format != VAR_3 &&
     VAR_7->format != VAR_2)
  return -VAR_0;
 if (VAR_7->rate > 48000 ||
     VAR_7->rate < 8000)
  return -VAR_0;

 FUNC_6(&VAR_6->reg_lock);

 FUNC_2(VAR_6, VAR_8, VAR_5);

 if (VAR_5->stream == VAR_4)
  FUNC_4(VAR_6, VAR_8, VAR_5);
 else
  FUNC_1(VAR_6, VAR_8, VAR_5);

 FUNC_3(VAR_6, VAR_8, VAR_7);

 FUNC_7(&VAR_6->reg_lock);

 return 0;
}
