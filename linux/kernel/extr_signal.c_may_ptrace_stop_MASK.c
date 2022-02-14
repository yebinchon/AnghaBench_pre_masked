
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* parent; TYPE_1__* mm; int ptrace; } ;
struct TYPE_5__ {TYPE_1__* mm; } ;
struct TYPE_4__ {int core_state; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(void)
{
 if (!FUNC_0(VAR_0->ptrace))
  return 0;
 if (FUNC_1(VAR_0->mm->core_state) &&
     FUNC_1(VAR_0->mm == VAR_0->parent->mm))
  return 0;

 return 1;
}
