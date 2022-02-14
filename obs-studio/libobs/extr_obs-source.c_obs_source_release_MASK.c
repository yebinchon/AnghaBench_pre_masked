
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ref; } ;
typedef TYPE_1__ obs_weak_source_t ;
struct TYPE_7__ {TYPE_1__* control; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(obs_source_t *VAR_2)
{
 if (!VAR_1) {
  FUNC_0(VAR_0, "Tried to release a source when the OBS "
      "core is shut down!");
  return;
 }

 if (!VAR_2)
  return;

 obs_weak_source_t *VAR_3 = VAR_2->control;
 if (FUNC_1(&VAR_3->ref)) {
  FUNC_2(VAR_2);
  FUNC_3(VAR_3);
 }
}
