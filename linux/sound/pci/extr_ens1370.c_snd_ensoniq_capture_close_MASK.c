
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_3__ {int pclkdiv_lock; } ;
struct TYPE_4__ {TYPE_1__ es1370; } ;
struct ensoniq {int reg_lock; int mode; TYPE_2__ u; int * capture_substream; } ;


 int VAR_0 ;
 struct ensoniq* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct ensoniq *VAR_2 = FUNC_0(VAR_1);

 VAR_2->capture_substream = ((void*)0);
 FUNC_1(&VAR_2->reg_lock);



 VAR_2->mode &= ~VAR_0;
 FUNC_2(&VAR_2->reg_lock);
 return 0;
}
