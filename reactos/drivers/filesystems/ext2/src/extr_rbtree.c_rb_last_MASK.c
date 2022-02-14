
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; } ;



struct rb_node *FUNC_0(struct rb_root *VAR_0)
{
    struct rb_node *VAR_1;

    VAR_1 = VAR_0->rb_node;
    if (!VAR_1)
        return ((void*)0);
    while (VAR_1->rb_right)
        VAR_1 = VAR_1->rb_right;
    return VAR_1;
}
