
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int cmdline_count; struct cmdline_list* cmdlist; scalar_t__ cmdlines; } ;
struct cmdline_list {int pid; struct cmdline_list* next; void* comm; } ;


 int FUNC_0 (struct tep_handle*,char const*,int,int) ;
 int FUNC_1 (struct cmdline_list*) ;
 struct cmdline_list* FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct tep_handle *VAR_0,
         const char *VAR_1, int VAR_2, bool VAR_3)
{
 struct cmdline_list *VAR_4;

 if (VAR_0->cmdlines)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_2(sizeof(*VAR_4));
 if (!VAR_4)
  return -1;

 if (VAR_1)
  VAR_4->comm = FUNC_3(VAR_1);
 else
  VAR_4->comm = FUNC_3("<...>");
 if (!VAR_4->comm) {
  FUNC_1(VAR_4);
  return -1;
 }
 VAR_4->pid = VAR_2;
 VAR_4->next = VAR_0->cmdlist;

 VAR_0->cmdlist = VAR_4;
 VAR_0->cmdline_count++;

 return 0;
}
