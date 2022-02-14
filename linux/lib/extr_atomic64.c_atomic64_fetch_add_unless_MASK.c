
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ s64 ;
typedef int raw_spinlock_t ;
struct TYPE_4__ {scalar_t__ counter; } ;
typedef TYPE_1__ atomic64_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

s64 FUNC_3(atomic64_t *VAR_0, s64 VAR_1, s64 VAR_2)
{
 unsigned long VAR_3;
 raw_spinlock_t *VAR_4 = FUNC_0(VAR_0);
 s64 VAR_5;

 FUNC_1(VAR_4, VAR_3);
 VAR_5 = VAR_0->counter;
 if (VAR_5 != VAR_2)
  VAR_0->counter += VAR_1;
 FUNC_2(VAR_4, VAR_3);

 return VAR_5;
}
