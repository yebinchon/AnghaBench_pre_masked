
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 int FUNC_0 (struct rb_node*,struct rb_root*) ;
 int FUNC_1 (struct rb_node*,struct rb_node*,struct rb_node**) ;

void FUNC_2(struct rb_root *VAR_0, struct rb_node *VAR_1,
         int (*VAR_2)(struct rb_node *, struct rb_node *))
{
    struct rb_node **VAR_3 = &(VAR_0->rb_node), *VAR_4 = ((void*)0);


    while (*VAR_3) {
        int VAR_5 = VAR_2(VAR_1, *VAR_3);

        VAR_4 = *VAR_3;
        if (VAR_5 < 0)
            VAR_3 = &((*VAR_3)->rb_left);
        else if (VAR_5 > 0)
            VAR_3 = &((*VAR_3)->rb_right);
        else
            return;

    }


    FUNC_1(VAR_1, VAR_4, VAR_3);
    FUNC_0(VAR_1, VAR_0);
}
