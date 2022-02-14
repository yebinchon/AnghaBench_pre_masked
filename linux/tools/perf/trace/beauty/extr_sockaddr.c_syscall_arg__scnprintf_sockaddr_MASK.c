
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ args; } ;
struct syscall_arg {int val; TYPE_1__ augmented; } ;


 size_t FUNC_0 (char*,size_t,char*,int ) ;
 size_t FUNC_1 (struct syscall_arg*,char*,size_t) ;

size_t FUNC_2(char *VAR_0, size_t VAR_1, struct syscall_arg *VAR_2)
{
 if (VAR_2->augmented.args)
  return FUNC_1(VAR_2, VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1, "%#x", VAR_2->val);
}
