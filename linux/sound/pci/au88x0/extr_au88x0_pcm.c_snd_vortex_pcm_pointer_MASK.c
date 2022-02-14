
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
typedef TYPE_1__ vortex_t ;
struct snd_pcm_substream {TYPE_6__* runtime; int pcm; } ;
struct TYPE_8__ {int dma; } ;
typedef TYPE_2__ stream_t ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_9__ {scalar_t__ buffer_size; scalar_t__ private_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_6__*,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(struct snd_pcm_substream *VAR_1)
{
 vortex_t *VAR_2 = FUNC_2(VAR_1);
 stream_t *VAR_3 = (stream_t *) VAR_1->runtime->private_data;
 int VAR_4 = VAR_3->dma;
 snd_pcm_uframes_t VAR_5 = 0;

 FUNC_3(&VAR_2->lock);
 if (FUNC_0(VAR_1->pcm) != VAR_0)
  VAR_5 = FUNC_5(VAR_2, VAR_4);

 else
  VAR_5 = FUNC_6(VAR_2, VAR_4);


 FUNC_4(&VAR_2->lock);
 VAR_5 = FUNC_1(VAR_1->runtime, VAR_5);
 if (VAR_5 >= VAR_1->runtime->buffer_size)
  VAR_5 = 0;
 return VAR_5;
}
