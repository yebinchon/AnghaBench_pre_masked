
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int lock; TYPE_2__* card; } ;
typedef TYPE_3__ vortex_t ;
struct snd_pcm_substream {int pcm; TYPE_1__* runtime; } ;
struct TYPE_18__ {int dma; int fifo_enabled; } ;
typedef TYPE_4__ stream_t ;
struct TYPE_16__ {int dev; } ;
struct TYPE_15__ {scalar_t__ private_data; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_3__* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 vortex_t *VAR_4 = FUNC_2(VAR_2);
 stream_t *VAR_5 = (stream_t *) VAR_2->runtime->private_data;
 int VAR_6 = VAR_5->dma;

 FUNC_3(&VAR_4->lock);
 switch (VAR_3) {
 case 129:


  VAR_5->fifo_enabled = 1;
  if (FUNC_0(VAR_2->pcm) != VAR_1) {
   FUNC_6(VAR_4, VAR_6);
   FUNC_8(VAR_4, VAR_6);
  }

  else {
   FUNC_1(VAR_4->card->dev, "wt start %d\n", VAR_6);
   FUNC_12(VAR_4, VAR_6);
  }

  break;
 case 128:


  VAR_5->fifo_enabled = 0;
  if (FUNC_0(VAR_2->pcm) != VAR_1)
   FUNC_9(VAR_4, VAR_6);

  else {
   FUNC_1(VAR_4->card->dev, "wt stop %d\n", VAR_6);
   FUNC_13(VAR_4, VAR_6);
  }

  break;
 case 131:

  if (FUNC_0(VAR_2->pcm) != VAR_1)
   FUNC_5(VAR_4, VAR_6);

  else
   FUNC_10(VAR_4, VAR_6);

  break;
 case 130:

  if (FUNC_0(VAR_2->pcm) != VAR_1)
   FUNC_7(VAR_4, VAR_6);

  else
   FUNC_11(VAR_4, VAR_6);

  break;
 default:
  FUNC_4(&VAR_4->lock);
  return -VAR_0;
 }
 FUNC_4(&VAR_4->lock);
 return 0;
}
