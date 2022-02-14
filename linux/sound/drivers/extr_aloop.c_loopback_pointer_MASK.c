
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct loopback_pcm* private_data; } ;
struct loopback_pcm {TYPE_1__* cable; int buf_pos; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct loopback_pcm *VAR_2 = VAR_1->private_data;
 snd_pcm_uframes_t VAR_3;

 FUNC_2(&VAR_2->cable->lock);
 FUNC_1(VAR_2->cable);
 VAR_3 = VAR_2->buf_pos;
 FUNC_3(&VAR_2->cable->lock);
 return FUNC_0(VAR_1, VAR_3);
}
