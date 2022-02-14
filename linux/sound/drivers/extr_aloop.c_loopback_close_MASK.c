
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; struct loopback* private_data; } ;
struct loopback_pcm {int dummy; } ;
struct loopback {int cable_lock; } ;
struct TYPE_2__ {struct loopback_pcm* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct loopback_pcm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct loopback *VAR_1 = VAR_0->private_data;
 struct loopback_pcm *VAR_2 = VAR_0->runtime->private_data;

 FUNC_1(VAR_2);
 FUNC_2(&VAR_1->cable_lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_1->cable_lock);
 return 0;
}
