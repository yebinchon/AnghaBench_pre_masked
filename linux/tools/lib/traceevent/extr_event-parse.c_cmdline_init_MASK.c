
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int cmdline_count; struct cmdline_list* cmdlist; struct tep_cmdline* cmdlines; } ;
struct tep_cmdline {int comm; int pid; } ;
struct cmdline_list {struct cmdline_list* next; int comm; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdline_list*) ;
 struct tep_cmdline* FUNC_1 (int) ;
 int FUNC_2 (struct tep_cmdline*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct tep_handle *VAR_1)
{
 struct cmdline_list *VAR_2 = VAR_1->cmdlist;
 struct cmdline_list *VAR_3;
 struct tep_cmdline *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4) * VAR_1->cmdline_count);
 if (!VAR_4)
  return -1;

 VAR_5 = 0;
 while (VAR_2) {
  VAR_4[VAR_5].pid = VAR_2->pid;
  VAR_4[VAR_5].comm = VAR_2->comm;
  VAR_5++;
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_3);
 }

 FUNC_2(VAR_4, VAR_1->cmdline_count, sizeof(*VAR_4), VAR_0);

 VAR_1->cmdlines = VAR_4;
 VAR_1->cmdlist = ((void*)0);

 return 0;
}
