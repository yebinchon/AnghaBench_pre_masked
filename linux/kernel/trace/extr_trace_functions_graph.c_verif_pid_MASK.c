
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct fgraph_data {int cpu_data; } ;
typedef int pid_t ;
struct TYPE_2__ {int last_pid; } ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (struct trace_seq*,int) ;
 int FUNC_2 (struct trace_seq*,int) ;
 int FUNC_3 (struct trace_seq*,char*) ;

__attribute__((used)) static void
FUNC_4(struct trace_seq *VAR_0, pid_t VAR_1, int VAR_2, struct fgraph_data *VAR_3)
{
 pid_t VAR_4;
 pid_t *VAR_5;

 if (!VAR_3)
  return;

 VAR_5 = &(FUNC_0(VAR_3->cpu_data, VAR_2)->last_pid);

 if (*VAR_5 == VAR_1)
  return;

 VAR_4 = *VAR_5;
 *VAR_5 = VAR_1;

 if (VAR_4 == -1)
  return;
 FUNC_3(VAR_0, " ------------------------------------------\n");
 FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_4);
 FUNC_3(VAR_0, " => ");
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, "\n ------------------------------------------\n\n");
}
