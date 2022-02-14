
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct TYPE_2__ {int has_child_subreaper; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_0, void *VAR_1)
{
 if (VAR_0->signal->has_child_subreaper ||
     FUNC_0(FUNC_1(VAR_0)))
  return 0;

 VAR_0->signal->has_child_subreaper = 1;
 return 1;
}
