
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {scalar_t__* count; int mutex; } ;
struct TYPE_4__ {int holdsStrongLockCount; int hashcode; } ;
typedef TYPE_1__ LOCALLOCK ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;

void
FUNC_4(void)
{
 uint32 VAR_2;
 LOCALLOCK *VAR_3 = VAR_1;

 if (VAR_3 == ((void*)0))
  return;

 VAR_2 = FUNC_1(VAR_3->hashcode);
 FUNC_0(VAR_3->holdsStrongLockCount == 1);
 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0->count[VAR_2] > 0);
 VAR_0->count[VAR_2]--;
 VAR_3->holdsStrongLockCount = 0;
 VAR_1 = ((void*)0);
 FUNC_3(&VAR_0->mutex);
}
