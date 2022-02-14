
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;


 struct rb_node* FUNC_0 (struct rb_node*) ;

struct rb_node *FUNC_1(struct rb_node *VAR_0)
{
    struct rb_node *VAR_1;



    if (VAR_0->rb_left) {
        VAR_0 = VAR_0->rb_left;
        while (VAR_0->rb_right)
            VAR_0=VAR_0->rb_right;
        return VAR_0;
    }



    while ((VAR_1 = FUNC_0(VAR_0)) && VAR_0 == VAR_1->rb_left)
        VAR_0 = VAR_1;

    return VAR_1;
}
