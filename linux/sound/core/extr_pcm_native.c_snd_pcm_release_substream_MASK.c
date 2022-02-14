
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ ref_count; int (* pcm_release ) (struct snd_pcm_substream*) ;int latency_pm_qos_req; scalar_t__ hw_opened; TYPE_3__* ops; TYPE_2__* runtime; } ;
struct TYPE_6__ {int (* close ) (struct snd_pcm_substream*) ;int (* hw_free ) (struct snd_pcm_substream*) ;} ;
struct TYPE_5__ {TYPE_1__* status; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

void FUNC_7(struct snd_pcm_substream *VAR_1)
{
 VAR_1->ref_count--;
 if (VAR_1->ref_count > 0)
  return;

 FUNC_3(VAR_1);
 if (VAR_1->hw_opened) {
  if (VAR_1->ops->hw_free &&
      VAR_1->runtime->status->state != VAR_0)
   VAR_1->ops->hw_free(VAR_1);
  VAR_1->ops->close(VAR_1);
  VAR_1->hw_opened = 0;
 }
 if (FUNC_1(&VAR_1->latency_pm_qos_req))
  FUNC_0(&VAR_1->latency_pm_qos_req);
 if (VAR_1->pcm_release) {
  VAR_1->pcm_release(VAR_1);
  VAR_1->pcm_release = ((void*)0);
 }
 FUNC_2(VAR_1);
}
