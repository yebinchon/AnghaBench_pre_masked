
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {scalar_t__ rb_right; struct rb_node const* rb_left; } ;


 struct rb_node* FUNC_0 (scalar_t__) ;
 struct rb_node* FUNC_1 (struct rb_node const*) ;

struct rb_node *FUNC_2(const struct rb_node *VAR_0)
{
 const struct rb_node *VAR_1;
 if (!VAR_0)
  return ((void*)0);
 VAR_1 = FUNC_1(VAR_0);


 if (VAR_1 && VAR_0 == VAR_1->rb_left && VAR_1->rb_right) {


  return FUNC_0(VAR_1->rb_right);
 } else


  return (struct rb_node *)VAR_1;
}
