
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active; int reset; int looping; int sem; int mutex; } ;
typedef TYPE_1__ mp_media_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(mp_media_t *VAR_0, bool VAR_1)
{
 FUNC_1(&VAR_0->mutex);

 if (VAR_0->active)
  VAR_0->reset = 1;

 VAR_0->looping = VAR_1;
 VAR_0->active = 1;

 FUNC_2(&VAR_0->mutex);

 FUNC_0(VAR_0->sem);
}
