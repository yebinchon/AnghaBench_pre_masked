
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signalled; int mutex; int manual; int cond; } ;
typedef TYPE_1__ os_event_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(os_event_t *VAR_0)
{
 int VAR_1 = 0;
 FUNC_1(&VAR_0->mutex);
 if (!VAR_0->signalled)
  VAR_1 = FUNC_0(&VAR_0->cond, &VAR_0->mutex);

 if (VAR_1 == 0) {
  if (!VAR_0->manual)
   VAR_0->signalled = 0;
  FUNC_2(&VAR_0->mutex);
 }

 return VAR_1;
}
