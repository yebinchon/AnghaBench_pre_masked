
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s64 ;
typedef int raw_spinlock_t ;
struct TYPE_4__ {int counter; } ;
typedef TYPE_1__ atomic64_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(atomic64_t *VAR_0, s64 VAR_1)
{
 unsigned long VAR_2;
 raw_spinlock_t *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_2);
 VAR_0->counter = VAR_1;
 FUNC_2(VAR_3, VAR_2);
}
