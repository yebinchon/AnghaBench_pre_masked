
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union map_priv {int color; int ptr; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int color_pids; } ;
struct perf_sched {TYPE_1__ map; } ;
struct machine {int dummy; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (struct machine*,int ,int ) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static struct thread*
FUNC_4(struct perf_sched *VAR_0, struct machine *VAR_1, pid_t VAR_2, pid_t VAR_3)
{
 struct thread *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 union map_priv VAR_5 = {
  .color = 0,
 };

 if (!VAR_0->map.color_pids || !VAR_4 || FUNC_1(VAR_4))
  return VAR_4;

 if (FUNC_3(VAR_0->map.color_pids, VAR_3))
  VAR_5.color = 1;

 FUNC_2(VAR_4, VAR_5.ptr);
 return VAR_4;
}
