
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;

struct pt_regs * FUNC_0(struct task_struct *VAR_1){
 unsigned long VAR_2 = (unsigned long)VAR_1 + VAR_0 - sizeof(struct pt_regs);
 return (struct pt_regs *)VAR_2;
}
