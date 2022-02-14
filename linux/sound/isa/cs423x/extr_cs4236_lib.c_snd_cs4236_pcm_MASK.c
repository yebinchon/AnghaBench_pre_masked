
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wss {TYPE_1__* pcm; } ;
struct TYPE_2__ {int info_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_wss*,int) ;

int FUNC_1(struct snd_wss *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_1->pcm->info_flags &= ~VAR_0;
 return 0;
}
