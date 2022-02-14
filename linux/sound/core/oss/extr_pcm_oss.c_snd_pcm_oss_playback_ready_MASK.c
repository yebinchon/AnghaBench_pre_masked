
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int mmap_count; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {scalar_t__ prev_hw_ptr_period; scalar_t__ period_frames; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct snd_pcm_runtime*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 if (FUNC_0(&VAR_0->mmap_count))
  return VAR_1->oss.prev_hw_ptr_period !=
      FUNC_1(VAR_1);
 else
  return FUNC_2(VAR_1) >=
      VAR_1->oss.period_frames;
}
