
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ref; } ;
typedef TYPE_1__ obs_weak_encoder_t ;
struct TYPE_7__ {TYPE_1__* control; } ;
typedef TYPE_2__ obs_encoder_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(obs_encoder_t *VAR_0)
{
 if (!VAR_0)
  return;

 obs_weak_encoder_t *VAR_1 = VAR_0->control;
 if (FUNC_1(&VAR_1->ref)) {



  FUNC_0(VAR_0);
  FUNC_2(VAR_1);
 }
}
