
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int lock; TYPE_1__* pcm_vol; int card; } ;
typedef TYPE_3__ vortex_t ;
struct snd_pcm_substream {size_t number; TYPE_2__* runtime; int pcm; } ;
struct TYPE_11__ {int dma; int type; int dir; int nr_ch; } ;
typedef TYPE_4__ stream_t ;
struct TYPE_9__ {int * private_data; } ;
struct TYPE_8__ {int kctl; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 TYPE_3__* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ,int ,size_t) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2)
{
 vortex_t *VAR_3 = FUNC_2(VAR_2);
 stream_t *VAR_4 = (stream_t *) (VAR_2->runtime->private_data);

 FUNC_3(&VAR_3->lock);

 if (FUNC_0(VAR_2->pcm) != VAR_1) {
  if (VAR_4 != ((void*)0)) {
   if (FUNC_0(VAR_2->pcm) == VAR_0) {
    VAR_3->pcm_vol[VAR_2->number].active = 0;
    FUNC_6(VAR_3->card,
     VAR_3->pcm_vol[VAR_2->number].kctl,
     0);
   }
   FUNC_5(VAR_3, VAR_4->dma,
           VAR_4->nr_ch, VAR_4->dir,
           VAR_4->type,
           VAR_2->number);
  }
 }

 else {
  if (VAR_4 != ((void*)0))
   FUNC_7(VAR_3, VAR_4->dma, 0);
 }

 VAR_2->runtime->private_data = ((void*)0);
 FUNC_4(&VAR_3->lock);

 return FUNC_1(VAR_2);
}
