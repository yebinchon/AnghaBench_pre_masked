
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall_arg {size_t idx; } ;
struct syscall {TYPE_1__* arg_fmt; } ;
struct TYPE_2__ {unsigned long (* mask_val ) (struct syscall_arg*,unsigned long) ;} ;


 unsigned long FUNC_0 (struct syscall_arg*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct syscall *VAR_0, struct syscall_arg *VAR_1, unsigned long VAR_2)
{
 if (VAR_0->arg_fmt && VAR_0->arg_fmt[VAR_1->idx].mask_val)
  return VAR_0->arg_fmt[VAR_1->idx].mask_val(VAR_1, VAR_2);

 return VAR_2;
}
