
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int internal_lock; } ;
typedef TYPE_1__ spinlock_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(spinlock_t *VAR_0)
{
 FUNC_0(&VAR_0->internal_lock);
}
