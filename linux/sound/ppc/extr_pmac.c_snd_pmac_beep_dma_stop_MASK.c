
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cmds; } ;
struct snd_pmac {TYPE_2__ extra_dma; int playback; } ;
struct TYPE_3__ {int command; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pmac*) ;

void FUNC_3(struct snd_pmac *VAR_1)
{
 FUNC_1(&VAR_1->playback);
 VAR_1->extra_dma.cmds->command = FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
