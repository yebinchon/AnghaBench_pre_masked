
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_flags_t ;
struct mm_struct {long total_vm; long exec_vm; long stack_vm; long data_vm; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct mm_struct *VAR_0, vm_flags_t VAR_1, long VAR_2)
{
 VAR_0->total_vm += VAR_2;

 if (FUNC_1(VAR_1))
  VAR_0->exec_vm += VAR_2;
 else if (FUNC_2(VAR_1))
  VAR_0->stack_vm += VAR_2;
 else if (FUNC_0(VAR_1))
  VAR_0->data_vm += VAR_2;
}
