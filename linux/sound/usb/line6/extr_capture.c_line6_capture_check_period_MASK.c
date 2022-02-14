
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int bytes; int period; int lock; } ;
struct snd_line6_pcm {TYPE_1__ in; } ;


 int VAR_0 ;
 struct snd_pcm_substream* FUNC_0 (struct snd_line6_pcm*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct snd_line6_pcm *VAR_1, int VAR_2)
{
 struct snd_pcm_substream *VAR_3 =
     FUNC_0(VAR_1, VAR_0);

 VAR_1->in.bytes += VAR_2;
 if (VAR_1->in.bytes >= VAR_1->in.period) {
  VAR_1->in.bytes %= VAR_1->in.period;
  FUNC_3(&VAR_1->in.lock);
  FUNC_1(VAR_3);
  FUNC_2(&VAR_1->in.lock);
 }
}
