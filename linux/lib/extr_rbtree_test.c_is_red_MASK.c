
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int __rb_parent_color; } ;



__attribute__((used)) static bool FUNC_0(struct rb_node *VAR_0)
{
 return !(VAR_0->__rb_parent_color & 1);
}
