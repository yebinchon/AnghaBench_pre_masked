
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ make_it_fail; } ;
struct fault_attr {int dummy; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct fault_attr *VAR_0, struct task_struct *VAR_1)
{
 return FUNC_0() && VAR_1->make_it_fail;
}
