
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rblist {int (* node_delete ) (struct rblist*,struct rb_node*) ;int nr_entries; int entries; } ;
struct rb_node {int dummy; } ;


 int FUNC_0 (struct rb_node*,int *) ;
 int FUNC_1 (struct rblist*,struct rb_node*) ;

void FUNC_2(struct rblist *VAR_0, struct rb_node *VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->entries);
 --VAR_0->nr_entries;
 VAR_0->node_delete(VAR_0, VAR_1);
}
