
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ show_details; int nr_tasks; int nr_cpus; int nr_loops; int bytes_global; int bytes_process; int bytes_thread; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_0->p.show_details < 0)
  return;

 FUNC_2("\n ###\n");
 FUNC_2(" # %d %s will execute (on %d nodes, %d CPUs):\n",
  VAR_0->p.nr_tasks, VAR_0->p.nr_tasks == 1 ? "task" : "tasks", FUNC_1(), VAR_0->p.nr_cpus);
 FUNC_2(" #      %5dx %5ldMB global  shared mem operations\n",
   VAR_0->p.nr_loops, VAR_0->p.bytes_global/1024/1024);
 FUNC_2(" #      %5dx %5ldMB process shared mem operations\n",
   VAR_0->p.nr_loops, VAR_0->p.bytes_process/1024/1024);
 FUNC_2(" #      %5dx %5ldMB thread  local  mem operations\n",
   VAR_0->p.nr_loops, VAR_0->p.bytes_thread/1024/1024);

 FUNC_2(" ###\n");

 FUNC_2("\n ###\n"); FUNC_0(VAR_1);
}
