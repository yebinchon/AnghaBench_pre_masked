
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;



__attribute__((used)) static struct rb_node *FUNC_0(const struct rb_node *VAR_0)
{
 for (;;) {
  if (VAR_0->rb_left)
   VAR_0 = VAR_0->rb_left;
  else if (VAR_0->rb_right)
   VAR_0 = VAR_0->rb_right;
  else
   return (struct rb_node *)VAR_0;
 }
}
