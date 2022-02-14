
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int f_flags; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_4,
          int VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 if (VAR_6->status->state == VAR_3 ||
     VAR_6->status->state == VAR_2)
  return -VAR_0;
 if (FUNC_0(VAR_4))
  return -VAR_1;
 VAR_4->f_flags = VAR_5;
 return 0;
}
