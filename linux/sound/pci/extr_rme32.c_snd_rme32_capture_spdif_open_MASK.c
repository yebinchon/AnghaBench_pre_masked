
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rates; int rate_max; int rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct rme32 {scalar_t__ fullduplex_mode; int lock; struct snd_pcm_substream* capture_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rme32*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct rme32* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct rme32*,int*) ;
 int FUNC_5 (struct rme32*,struct snd_pcm_runtime*) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6)
{
 int VAR_7, VAR_8;
 struct rme32 *VAR_9 = FUNC_3(VAR_6);
 struct snd_pcm_runtime *VAR_10 = VAR_6->runtime;

 FUNC_2(VAR_6);

 FUNC_6(&VAR_9->lock);
        if (VAR_9->capture_substream != ((void*)0)) {
  FUNC_7(&VAR_9->lock);
                return -VAR_0;
        }
 VAR_9->capture_substream = VAR_6;
 FUNC_7(&VAR_9->lock);

 if (VAR_9->fullduplex_mode)
  VAR_10->hw = VAR_4;
 else
  VAR_10->hw = VAR_5;
 if (FUNC_0(VAR_9)) {
  VAR_10->hw.rates |= VAR_2 | VAR_3;
  VAR_10->hw.rate_max = 96000;
 }
 if ((VAR_8 = FUNC_4(VAR_9, &VAR_7)) > 0) {
  if (VAR_7) {
   return -VAR_1;
  }
  VAR_10->hw.rates = FUNC_1(VAR_8);
  VAR_10->hw.rate_min = VAR_8;
  VAR_10->hw.rate_max = VAR_8;
 }

 FUNC_5(VAR_9, VAR_10);

 return 0;
}
