
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 int FUNC_0 (struct rb_node*,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static inline void FUNC_1(struct rb_node *VAR_0, struct rb_node *VAR_1)
{
 struct rb_node **VAR_2 = &VAR_1->rb_left;
 while (*VAR_2) {
  VAR_1 = *VAR_2;
  VAR_2 = &VAR_1->rb_right;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
