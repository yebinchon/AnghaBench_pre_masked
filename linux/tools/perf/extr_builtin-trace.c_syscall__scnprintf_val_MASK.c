
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall_arg {size_t idx; unsigned long val; scalar_t__ parm; } ;
struct syscall {TYPE_1__* arg_fmt; } ;
struct TYPE_2__ {size_t (* scnprintf ) (char*,size_t,struct syscall_arg*) ;scalar_t__ parm; } ;


 size_t FUNC_0 (char*,size_t,char*,unsigned long) ;
 size_t FUNC_1 (char*,size_t,struct syscall_arg*) ;

__attribute__((used)) static size_t FUNC_2(struct syscall *VAR_0, char *VAR_1, size_t VAR_2,
         struct syscall_arg *VAR_3, unsigned long VAR_4)
{
 if (VAR_0->arg_fmt && VAR_0->arg_fmt[VAR_3->idx].scnprintf) {
  VAR_3->val = VAR_4;
  if (VAR_0->arg_fmt[VAR_3->idx].parm)
   VAR_3->parm = VAR_0->arg_fmt[VAR_3->idx].parm;
  return VAR_0->arg_fmt[VAR_3->idx].scnprintf(VAR_1, VAR_2, VAR_3);
 }
 return FUNC_0(VAR_1, VAR_2, "%ld", VAR_4);
}
