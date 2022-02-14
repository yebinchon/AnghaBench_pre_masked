
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ args; } ;
struct syscall_arg {unsigned long val; int thread; TYPE_2__* trace; TYPE_1__ augmented; } ;
struct TYPE_4__ {int vfs_getname; } ;


 size_t FUNC_0 (char*,size_t,char*,unsigned long) ;
 size_t FUNC_1 (struct syscall_arg*,char*,size_t) ;
 int FUNC_2 (int ,char*,unsigned long) ;

__attribute__((used)) static size_t FUNC_3(char *VAR_0, size_t VAR_1,
           struct syscall_arg *VAR_2)
{
 unsigned long VAR_3 = VAR_2->val;

 if (VAR_2->augmented.args)
  return FUNC_1(VAR_2, VAR_0, VAR_1);

 if (!VAR_2->trace->vfs_getname)
  return FUNC_0(VAR_0, VAR_1, "%#x", VAR_3);

 FUNC_2(VAR_2->thread, VAR_0, VAR_3);
 return 0;
}
