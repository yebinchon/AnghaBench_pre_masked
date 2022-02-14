
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {scalar_t__ prepare; scalar_t__ params; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->runtime;
 if (VAR_1->oss.params) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 < 0)
   return VAR_2;
 }
 if (VAR_1->oss.prepare) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return 0;
}
