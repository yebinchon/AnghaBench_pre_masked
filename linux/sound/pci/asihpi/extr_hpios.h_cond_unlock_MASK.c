
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpios_spinlock {scalar_t__ lock_context; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct hpios_spinlock *VAR_1)
{
 if (VAR_1->lock_context == VAR_0)
  FUNC_1(&((VAR_1)->lock));
 else
  FUNC_0(&((VAR_1)->lock));
}
