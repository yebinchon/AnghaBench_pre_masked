
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rate_min; int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct rme32 {int rcreg; scalar_t__ fullduplex_mode; int lock; struct snd_pcm_substream* playback_substream; scalar_t__ iobase; int wcreg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct rme32* FUNC_2 (struct snd_pcm_substream*) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (struct rme32*,int*) ;
 int FUNC_4 (struct rme32*,struct snd_pcm_runtime*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct snd_pcm_substream *VAR_6)
{
 int VAR_7, VAR_8;
 struct rme32 *VAR_9 = FUNC_2(VAR_6);
 struct snd_pcm_runtime *VAR_10 = VAR_6->runtime;

 FUNC_1(VAR_6);

 FUNC_5(&VAR_9->lock);
        if (VAR_9->playback_substream != ((void*)0)) {
  FUNC_6(&VAR_9->lock);
                return -VAR_0;
        }
 VAR_9->wcreg |= VAR_3;
 FUNC_7(VAR_9->wcreg, VAR_9->iobase + VAR_1);
 VAR_9->playback_substream = VAR_6;
 FUNC_6(&VAR_9->lock);

 if (VAR_9->fullduplex_mode)
  VAR_10->hw = VAR_4;
 else
  VAR_10->hw = VAR_5;
 if ((VAR_9->rcreg & VAR_2) &&
     (VAR_7 = FUNC_3(VAR_9, &VAR_8)) > 0) {

                VAR_10->hw.rates = FUNC_0(VAR_7);
                VAR_10->hw.rate_min = VAR_7;
                VAR_10->hw.rate_max = VAR_7;
 }

 FUNC_4(VAR_9, VAR_10);
 return 0;
}
