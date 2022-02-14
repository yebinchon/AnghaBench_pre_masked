
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int nb_streams_capt; int nb_streams_play; int * playback_stream; int * capture_stream; } ;
struct pcxhr_mgr {int src_it_dsp; int dsp_time_last; int granularity; int num_cards; int lock; struct snd_pcxhr** chip; TYPE_1__* pci; int dsp_time_err; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcxhr_mgr*) ;
 int FUNC_5 (struct pcxhr_mgr*,int *,int) ;

irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct pcxhr_mgr *VAR_7 = VAR_6;
 int VAR_8, VAR_9;
 struct snd_pcxhr *VAR_10;

 FUNC_2(&VAR_7->lock);
 if (VAR_7->src_it_dsp & VAR_3) {

  int VAR_11 =
   FUNC_0(VAR_7, VAR_4) & VAR_2;
  int VAR_12 = VAR_11 - VAR_7->dsp_time_last;

  if ((VAR_12 < 0) &&
      (VAR_7->dsp_time_last != VAR_1)) {

   int VAR_13 = VAR_12 + VAR_2 + 1;
   FUNC_1(&VAR_7->pci->dev,
    "WARNING DSP timestamp old(%d) new(%d)",
        VAR_7->dsp_time_last, VAR_11);
   if (VAR_13 > 0 && VAR_13 <= (2*VAR_7->granularity)) {
    FUNC_1(&VAR_7->pci->dev,
     "-> timestamp wraparound OK: "
         "diff=%d\n", VAR_13);
    VAR_12 = VAR_13;
   } else {
    FUNC_1(&VAR_7->pci->dev,
     "-> resynchronize all streams\n");
    VAR_7->dsp_time_err++;
   }
  }
  VAR_7->dsp_time_last = VAR_11;

  for (VAR_8 = 0; VAR_8 < VAR_7->num_cards; VAR_8++) {
   VAR_10 = VAR_7->chip[VAR_8];
   for (VAR_9 = 0; VAR_9 < VAR_10->nb_streams_capt; VAR_9++)
    FUNC_5(VAR_7,
      &VAR_10->capture_stream[VAR_9],
      VAR_12);
  }
  for (VAR_8 = 0; VAR_8 < VAR_7->num_cards; VAR_8++) {
   VAR_10 = VAR_7->chip[VAR_8];
   for (VAR_9 = 0; VAR_9 < VAR_10->nb_streams_play; VAR_9++)
    FUNC_5(VAR_7,
      &VAR_10->playback_stream[VAR_9],
      VAR_12);
  }
 }

 FUNC_4(VAR_7);
 FUNC_3(&VAR_7->lock);
 return VAR_0;
}
