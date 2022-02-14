
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rblist {int entries; } ;
struct rb_node {int dummy; } ;


 struct rb_node* FUNC_0 (int *) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 int FUNC_2 (struct rblist*,struct rb_node*) ;

void FUNC_3(struct rblist *VAR_0)
{
 struct rb_node *VAR_1, *VAR_2 = FUNC_0(&VAR_0->entries);

 while (VAR_2) {
  VAR_1 = VAR_2;
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_0, VAR_1);
 }
}
