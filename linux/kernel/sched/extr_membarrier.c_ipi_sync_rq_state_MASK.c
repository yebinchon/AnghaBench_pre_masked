
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int membarrier_state; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;
struct TYPE_3__ {int membarrier_state; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct mm_struct *VAR_3 = (struct mm_struct *) VAR_2;

 if (VAR_0->mm != VAR_3)
  return;
 FUNC_2(VAR_1.membarrier_state,
         FUNC_0(&VAR_3->membarrier_state));






 FUNC_1();
}
