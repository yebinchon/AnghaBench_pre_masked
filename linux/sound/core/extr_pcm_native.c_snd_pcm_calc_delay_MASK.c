
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_3__ {scalar_t__ delay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_1)
{
 snd_pcm_uframes_t VAR_2;

 if (VAR_1->stream == VAR_0)
  VAR_2 = FUNC_1(VAR_1->runtime);
 else
  VAR_2 = FUNC_0(VAR_1->runtime);
 return VAR_2 + VAR_1->runtime->delay;
}
