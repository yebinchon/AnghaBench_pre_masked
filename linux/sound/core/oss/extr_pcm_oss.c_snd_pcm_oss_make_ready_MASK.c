
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int params_lock; scalar_t__ prepare; scalar_t__ params; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->runtime;
 if (VAR_2->oss.params) {
  VAR_3 = FUNC_2(VAR_1, 0);
  if (VAR_3 < 0)
   return VAR_3;
 }
 if (VAR_2->oss.prepare) {
  if (FUNC_0(&VAR_2->oss.params_lock))
   return -VAR_0;
  VAR_3 = FUNC_3(VAR_1);
  FUNC_1(&VAR_2->oss.params_lock);
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
