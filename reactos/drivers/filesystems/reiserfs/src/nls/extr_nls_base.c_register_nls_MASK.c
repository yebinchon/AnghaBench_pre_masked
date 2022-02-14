
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {struct nls_table* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nls_table* VAR_3 ;

int FUNC_2(struct nls_table * VAR_4)
{
 struct nls_table ** VAR_5 = &VAR_3;

 if (!VAR_4)
  return -VAR_1;
 if (VAR_4->next)
  return -VAR_0;

 FUNC_0(&VAR_2);
 while (*VAR_5) {
  if (VAR_4 == *VAR_5) {
   FUNC_1(&VAR_2);
   return -VAR_0;
  }
  VAR_5 = &(*VAR_5)->next;
 }
 VAR_4->next = VAR_3;
 VAR_3 = VAR_4;
 FUNC_1(&VAR_2);
 return 0;
}
