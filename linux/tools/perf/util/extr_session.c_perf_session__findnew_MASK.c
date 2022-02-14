
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int host; } ;
struct perf_session {TYPE_1__ machines; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (int *,int,int ) ;

struct thread *FUNC_1(struct perf_session *VAR_0, pid_t VAR_1)
{
 return FUNC_0(&VAR_0->machines.host, -1, VAR_1);
}
