
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct rb_node {scalar_t__ rb_right; scalar_t__ rb_left; } ;


 int FUNC_0 (struct rb_node*,struct rb_node*,struct rb_node*,struct rb_root*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 int FUNC_2 (scalar_t__,struct rb_node*) ;

void FUNC_3(struct rb_node *VAR_0, struct rb_node *VAR_1,
       struct rb_root *VAR_2)
{
 struct rb_node *VAR_3 = FUNC_1(VAR_0);


 *VAR_1 = *VAR_0;


 if (VAR_0->rb_left)
  FUNC_2(VAR_0->rb_left, VAR_1);
 if (VAR_0->rb_right)
  FUNC_2(VAR_0->rb_right, VAR_1);
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
}
