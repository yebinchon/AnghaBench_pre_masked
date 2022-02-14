
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int proc_getname; } ;
struct trace {TYPE_1__ stats; int live; scalar_t__ fd_path_disabled; } ;
struct TYPE_6__ {int max; TYPE_2__* table; } ;
struct thread_trace {TYPE_3__ files; } ;
struct thread {int dummy; } ;
struct TYPE_5__ {char const* pathname; } ;


 struct thread_trace* FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (struct thread*,int) ;

__attribute__((used)) static const char *FUNC_2(struct thread *VAR_0, int VAR_1,
       struct trace *VAR_2)
{
 struct thread_trace *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 == ((void*)0) || VAR_2->fd_path_disabled)
  return ((void*)0);

 if (VAR_1 < 0)
  return ((void*)0);

 if ((VAR_1 > VAR_3->files.max || VAR_3->files.table[VAR_1].pathname == ((void*)0))) {
  if (!VAR_2->live)
   return ((void*)0);
  ++VAR_2->stats.proc_getname;
  if (FUNC_1(VAR_0, VAR_1))
   return ((void*)0);
 }

 return VAR_3->files.table[VAR_1].pathname;
}
