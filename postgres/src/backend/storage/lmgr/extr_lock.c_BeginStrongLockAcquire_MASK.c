
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_6__ {int mutex; int * count; } ;
struct TYPE_5__ {int holdsStrongLockCount; } ;
typedef TYPE_1__ LOCALLOCK ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(LOCALLOCK *VAR_2, uint32 VAR_3)
{
 FUNC_0(VAR_1 == ((void*)0));
 FUNC_0(VAR_2->holdsStrongLockCount == 0);
 FUNC_1(&VAR_0->mutex);
 VAR_0->count[VAR_3]++;
 VAR_2->holdsStrongLockCount = 1;
 VAR_1 = VAR_2;
 FUNC_2(&VAR_0->mutex);
}
