
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;


 struct rb_node* FUNC_0 (struct rb_node*) ;
 int FUNC_1 (struct rb_node*,struct rb_node*) ;

__attribute__((used)) static void FUNC_2(struct rb_node *VAR_0, struct rb_root *VAR_1)
{
    struct rb_node *VAR_2 = VAR_0->rb_left;
    struct rb_node *VAR_3 = FUNC_0(VAR_0);

    if ((VAR_0->rb_left = VAR_2->rb_right))
        FUNC_1(VAR_2->rb_right, VAR_0);
    VAR_2->rb_right = VAR_0;

    FUNC_1(VAR_2, VAR_3);

    if (VAR_3)
    {
        if (VAR_0 == VAR_3->rb_right)
            VAR_3->rb_right = VAR_2;
        else
            VAR_3->rb_left = VAR_2;
    }
    else
        VAR_1->rb_node = VAR_2;
    FUNC_1(VAR_0, VAR_2);
}
