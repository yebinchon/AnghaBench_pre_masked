
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall_arg {size_t idx; } ;
struct syscall {TYPE_1__* arg_fmt; } ;
struct TYPE_2__ {size_t name; } ;


 size_t FUNC_0 (char*,size_t,char*,size_t) ;

__attribute__((used)) static size_t FUNC_1(struct syscall *VAR_0, char *VAR_1, size_t VAR_2,
          struct syscall_arg *VAR_3)
{
 if (VAR_0->arg_fmt && VAR_0->arg_fmt[VAR_3->idx].name)
  return FUNC_0(VAR_1, VAR_2, "%s: ", VAR_0->arg_fmt[VAR_3->idx].name);

 return FUNC_0(VAR_1, VAR_2, "arg%d: ", VAR_3->idx);
}
