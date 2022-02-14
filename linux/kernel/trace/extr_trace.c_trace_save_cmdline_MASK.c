
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {size_t pid; int comm; } ;
struct TYPE_2__ {unsigned int* map_pid_to_cmdline; int cmdline_idx; int cmdline_num; unsigned int* map_cmdline_to_pid; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_4)
{
 unsigned VAR_5, VAR_6;


 if (!VAR_4->pid)
  return 1;

 if (FUNC_3(VAR_4->pid > VAR_1))
  return 0;







 if (!FUNC_0(&VAR_3))
  return 0;

 VAR_6 = VAR_2->map_pid_to_cmdline[VAR_4->pid];
 if (VAR_6 == VAR_0) {
  VAR_6 = (VAR_2->cmdline_idx + 1) % VAR_2->cmdline_num;







  VAR_5 = VAR_2->map_cmdline_to_pid[VAR_6];
  if (VAR_5 != VAR_0)
   VAR_2->map_pid_to_cmdline[VAR_5] = VAR_0;

  VAR_2->map_cmdline_to_pid[VAR_6] = VAR_4->pid;
  VAR_2->map_pid_to_cmdline[VAR_4->pid] = VAR_6;

  VAR_2->cmdline_idx = VAR_6;
 }

 FUNC_2(VAR_6, VAR_4->comm);

 FUNC_1(&VAR_3);

 return 1;
}
