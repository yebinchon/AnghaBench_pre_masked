
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int card; TYPE_1__* mgr; } ;
struct TYPE_2__ {int board_has_mic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct snd_pcxhr*) ;

int FUNC_2(struct snd_pcxhr *VAR_3)
{
 int VAR_4;
 if (!VAR_3->mgr->board_has_mic)
  return 0;


 VAR_4 = FUNC_0(VAR_3->card, FUNC_1(&VAR_1,
         VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->card, FUNC_1(&VAR_0,
         VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->card, FUNC_1(&VAR_2,
         VAR_3));
 return VAR_4;
}
