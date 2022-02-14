
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpios_spinlock {int lock_context; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct hpios_spinlock *VAR_2)
{
 if (FUNC_0()) {



  FUNC_1(&((VAR_2)->lock));
  VAR_2->lock_context = VAR_1;
 } else {
  FUNC_2(&((VAR_2)->lock));
  VAR_2->lock_context = VAR_0;
 }
}
