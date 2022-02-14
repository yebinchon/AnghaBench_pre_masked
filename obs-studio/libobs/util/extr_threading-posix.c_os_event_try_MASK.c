
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signalled; int mutex; int manual; } ;
typedef TYPE_1__ os_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(os_event_t *VAR_1)
{
 int VAR_2 = VAR_0;

 FUNC_0(&VAR_1->mutex);
 if (VAR_1->signalled) {
  if (!VAR_1->manual)
   VAR_1->signalled = 0;
  VAR_2 = 0;
 }
 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}
