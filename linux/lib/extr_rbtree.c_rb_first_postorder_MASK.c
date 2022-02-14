
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int rb_node; } ;
struct rb_node {int dummy; } ;


 struct rb_node* FUNC_0 (int ) ;

struct rb_node *FUNC_1(const struct rb_root *VAR_0)
{
 if (!VAR_0->rb_node)
  return ((void*)0);

 return FUNC_0(VAR_0->rb_node);
}
