
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int params_lock; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
         bool VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 if (VAR_3) {
  if (!(FUNC_1(&VAR_4->oss.params_lock)))
   return -VAR_0;
 } else if (FUNC_0(&VAR_4->oss.params_lock))
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_2);
 FUNC_2(&VAR_4->oss.params_lock);
 return VAR_5;
}
