
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int spinlock_t ;


 scalar_t__ FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static inline int FUNC_1(spinlock_t *VAR_0,
      spinlock_t *VAR_1,
      struct vm_area_struct *VAR_2)
{






 return (VAR_0 != VAR_1) && FUNC_0(VAR_2);
}
