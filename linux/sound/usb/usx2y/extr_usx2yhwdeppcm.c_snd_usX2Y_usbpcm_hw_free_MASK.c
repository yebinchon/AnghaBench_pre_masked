
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_usX2Y_substream {TYPE_4__* usX2Y; int state; TYPE_3__* pcm_substream; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_usX2Y_substream* private_data; } ;
struct TYPE_8__ {int pcm_mutex; struct snd_usX2Y_substream** subs; } ;
struct TYPE_7__ {TYPE_2__* runtime; } ;
struct TYPE_6__ {TYPE_1__* status; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (char*,struct snd_pcm_substream*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct snd_usX2Y_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_5->runtime;
 struct snd_usX2Y_substream *VAR_7 = VAR_6->private_data,
  *VAR_8 = VAR_7->usX2Y->subs[VAR_1 + 2];
 FUNC_2(&VAR_7->usX2Y->pcm_mutex);
 FUNC_5("snd_usX2Y_usbpcm_hw_free(%p)\n", VAR_5);

 if (VAR_2 == VAR_5->stream) {
  struct snd_usX2Y_substream *VAR_9 = VAR_7->usX2Y->subs[VAR_1];
  FUNC_1(&VAR_7->state, VAR_4);
  FUNC_6(VAR_7);
  if (!VAR_9->pcm_substream ||
      !VAR_9->pcm_substream->runtime ||
      !VAR_9->pcm_substream->runtime->status ||
      VAR_9->pcm_substream->runtime->status->state < VAR_0) {
   FUNC_1(&VAR_9->state, VAR_4);
   if (((void*)0) != VAR_8)
    FUNC_1(&VAR_8->state, VAR_4);
   FUNC_6(VAR_9);
   if (((void*)0) != VAR_8)
    FUNC_6(VAR_8);
  }
 } else {
  struct snd_usX2Y_substream *VAR_10 = VAR_7->usX2Y->subs[VAR_2];
  if (FUNC_0(&VAR_10->state) < VAR_3) {
   FUNC_1(&VAR_7->state, VAR_4);
   if (((void*)0) != VAR_8)
    FUNC_1(&VAR_8->state, VAR_4);
   FUNC_6(VAR_7);
   if (((void*)0) != VAR_8)
    FUNC_6(VAR_8);
  }
 }
 FUNC_3(&VAR_7->usX2Y->pcm_mutex);
 return FUNC_4(VAR_5);
}
