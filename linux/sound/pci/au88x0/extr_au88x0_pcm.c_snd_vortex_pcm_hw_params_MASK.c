
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int lock; TYPE_4__* dma_wt; TYPE_1__* pcm_vol; TYPE_7__* card; TYPE_4__* dma_adb; } ;
typedef TYPE_3__ vortex_t ;
struct snd_pcm_substream {size_t number; TYPE_2__* runtime; int pcm; int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_14__ {int dma; int type; struct snd_pcm_substream* substream; int dir; int nr_ch; } ;
typedef TYPE_4__ stream_t ;
struct TYPE_15__ {int dev; } ;
struct TYPE_12__ {TYPE_4__* private_data; } ;
struct TYPE_11__ {int active; int kctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 TYPE_3__* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int,int ,int ,int,size_t) ;
 int FUNC_11 (TYPE_3__*,int,int ,int ) ;
 int FUNC_12 (TYPE_7__*,int ,int) ;
 int FUNC_13 (TYPE_3__*,size_t,int ) ;
 int FUNC_14 (TYPE_3__*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_15(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3)
{
 vortex_t *VAR_4 = FUNC_7(VAR_2);
 stream_t *VAR_5 = (stream_t *) (VAR_2->runtime->private_data);
 int VAR_6;


 VAR_6 =
     FUNC_6(VAR_2, FUNC_2(VAR_3));
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->card->dev, "Vortex: pcm page alloc failed!\n");
  return VAR_6;
 }




 FUNC_8(&VAR_4->lock);

 if (FUNC_0(VAR_2->pcm) != VAR_1) {
  int VAR_7, VAR_8 = FUNC_0(VAR_2->pcm);

  if (VAR_5 != ((void*)0))
   FUNC_10(VAR_4, VAR_5->dma,
           VAR_5->nr_ch, VAR_5->dir,
           VAR_5->type,
           VAR_2->number);

  VAR_7 =
      FUNC_10(VAR_4, -1,
       FUNC_3(VAR_3),
       VAR_2->stream, VAR_8,
       VAR_2->number);
  if (VAR_7 < 0) {
   FUNC_9(&VAR_4->lock);
   return VAR_7;
  }
  VAR_5 = VAR_2->runtime->private_data = &VAR_4->dma_adb[VAR_7];
  VAR_5->substream = VAR_2;

  FUNC_11(VAR_4, VAR_7,
      FUNC_4(VAR_3),
      FUNC_5(VAR_3));
  if (FUNC_0(VAR_2->pcm) == VAR_0) {
   VAR_4->pcm_vol[VAR_2->number].active = 1;
   FUNC_12(VAR_4->card,
    VAR_4->pcm_vol[VAR_2->number].kctl, 1);
  }
 }

 else {


  FUNC_13(VAR_4, VAR_2->number,
         FUNC_3(VAR_3));
  VAR_5 = VAR_2->runtime->private_data =
      &VAR_4->dma_wt[VAR_2->number];
  VAR_5->dma = VAR_2->number;
  VAR_5->substream = VAR_2;
  FUNC_14(VAR_4, VAR_2->number,
     FUNC_4(VAR_3),
     FUNC_5(VAR_3));
 }

 FUNC_9(&VAR_4->lock);
 return 0;
}
