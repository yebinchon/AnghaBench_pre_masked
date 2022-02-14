
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_flags; int f_path; } ;
struct TYPE_2__ {scalar_t__ in_execve; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1)
{

 if (VAR_0->in_execve)
  return 0;
 return FUNC_0(FUNC_1(), &VAR_1->f_path,
         VAR_1->f_flags);
}
