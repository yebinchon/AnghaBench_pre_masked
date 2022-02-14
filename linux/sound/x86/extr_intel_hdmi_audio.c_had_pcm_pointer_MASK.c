
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_intelhad {int connected; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int buffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 struct snd_intelhad* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_intelhad *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->connected)
  return VAR_0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_0;
 VAR_3 = FUNC_0(VAR_1->runtime, VAR_3);

 VAR_3 %= VAR_1->runtime->buffer_size;
 return VAR_3;
}
