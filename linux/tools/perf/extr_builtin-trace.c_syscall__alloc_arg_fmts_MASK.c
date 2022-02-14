
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall {int nr_args; TYPE_1__* fmt; int * arg_fmt; } ;
struct TYPE_2__ {int nr_args; int * arg; } ;


 int * FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct syscall *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == 6 && VAR_0->fmt && VAR_0->fmt->nr_args != 0)
  VAR_1 = VAR_0->fmt->nr_args;

 VAR_0->arg_fmt = FUNC_0(VAR_1, sizeof(*VAR_0->arg_fmt));
 if (VAR_0->arg_fmt == ((void*)0))
  return -1;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  if (VAR_0->fmt)
   VAR_0->arg_fmt[VAR_2] = VAR_0->fmt->arg[VAR_2];
 }

 VAR_0->nr_args = VAR_1;
 return 0;
}
