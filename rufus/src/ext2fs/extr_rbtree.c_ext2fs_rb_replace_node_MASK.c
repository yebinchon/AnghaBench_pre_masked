
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 struct rb_node* FUNC_0 (struct rb_node*) ;
 int FUNC_1 (struct rb_node*,struct rb_node*) ;

void FUNC_2(struct rb_node *VAR_0, struct rb_node *VAR_1,
     struct rb_root *VAR_2)
{
 struct rb_node *VAR_3 = FUNC_0(VAR_0);


 if (VAR_3) {
  if (VAR_0 == VAR_3->rb_left)
   VAR_3->rb_left = VAR_1;
  else
   VAR_3->rb_right = VAR_1;
 } else {
  VAR_2->rb_node = VAR_1;
 }
 if (VAR_0->rb_left)
  FUNC_1(VAR_0->rb_left, VAR_1);
 if (VAR_0->rb_right)
  FUNC_1(VAR_0->rb_right, VAR_1);


 *VAR_1 = *VAR_0;
}
