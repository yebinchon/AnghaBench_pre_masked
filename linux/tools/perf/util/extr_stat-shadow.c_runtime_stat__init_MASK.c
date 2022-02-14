
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rblist {int node_delete; int node_new; int node_cmp; } ;
struct runtime_stat {struct rblist value_list; } ;


 int FUNC_0 (struct rblist*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct runtime_stat *VAR_3)
{
 struct rblist *VAR_4 = &VAR_3->value_list;

 FUNC_0(VAR_4);
 VAR_4->node_cmp = VAR_0;
 VAR_4->node_new = VAR_2;
 VAR_4->node_delete = VAR_1;
}
