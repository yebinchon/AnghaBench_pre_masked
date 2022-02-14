
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int cmdline_count; struct tep_cmdline* cmdlines; } ;
struct tep_cmdline {int pid; } ;
struct cmdline_list {int pid; } ;



int FUNC_0(struct tep_handle *VAR_0, struct tep_cmdline *VAR_1)
{
 struct cmdline_list *VAR_2 = (struct cmdline_list *)VAR_1;

 if (!VAR_1)
  return -1;





 if (!VAR_0->cmdlines ||
     VAR_1 < VAR_0->cmdlines ||
     VAR_1 >= VAR_0->cmdlines + VAR_0->cmdline_count)
  return VAR_2->pid;

 return VAR_1->pid;
}
