
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int func_count; struct func_list* funclist; } ;
struct func_list {unsigned long long addr; struct func_list* func; int * mod; struct func_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct func_list*) ;
 struct func_list* FUNC_1 (int) ;
 void* FUNC_2 (char*) ;

int FUNC_3(struct tep_handle *VAR_2, char *VAR_3,
     unsigned long long VAR_4, char *VAR_5)
{
 struct func_list *VAR_6 = FUNC_1(sizeof(*VAR_6));

 if (!VAR_6)
  return -1;

 VAR_6->next = VAR_2->funclist;
 VAR_6->func = FUNC_2(VAR_3);
 if (!VAR_6->func)
  goto out_free;

 if (VAR_5) {
  VAR_6->mod = FUNC_2(VAR_5);
  if (!VAR_6->mod)
   goto out_free_func;
 } else
  VAR_6->mod = ((void*)0);
 VAR_6->addr = VAR_4;

 VAR_2->funclist = VAR_6;
 VAR_2->func_count++;

 return 0;

out_free_func:
 FUNC_0(VAR_6->func);
 VAR_6->func = ((void*)0);
out_free:
 FUNC_0(VAR_6);
 VAR_1 = VAR_0;
 return -1;
}
