
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ boundary; TYPE_1__* control; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;
struct TYPE_2__ {scalar_t__ appl_ptr; } ;


 int FUNC_0 (struct snd_pcm_substream*,scalar_t__) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_1(struct snd_pcm_substream *VAR_0,
       snd_pcm_uframes_t VAR_1,
        snd_pcm_sframes_t VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 snd_pcm_sframes_t VAR_4;
 int VAR_5;

 if (VAR_2 <= 0)
  return 0;
 if (VAR_1 > (snd_pcm_uframes_t)VAR_2)
  VAR_1 = VAR_2;
 VAR_4 = VAR_3->control->appl_ptr + VAR_1;
 if (VAR_4 >= (snd_pcm_sframes_t)VAR_3->boundary)
  VAR_4 -= VAR_3->boundary;
 VAR_5 = FUNC_0(VAR_0, VAR_4);
 return VAR_5 < 0 ? VAR_5 : VAR_1;
}
