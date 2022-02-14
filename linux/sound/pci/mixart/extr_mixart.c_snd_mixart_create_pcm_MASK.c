
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixart {TYPE_1__* mgr; } ;
struct TYPE_2__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_mixart*) ;
 int FUNC_1 (struct snd_mixart*) ;

int FUNC_2(struct snd_mixart* VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 if(VAR_1->mgr->board_type == VAR_0) {

  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return VAR_2;
}
