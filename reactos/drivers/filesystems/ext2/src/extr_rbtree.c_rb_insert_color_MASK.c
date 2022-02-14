
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;


 int FUNC_0 (struct rb_node*,struct rb_root*) ;
 int FUNC_1 (struct rb_node*,struct rb_root*) ;
 scalar_t__ FUNC_2 (struct rb_node*) ;
 struct rb_node* FUNC_3 (struct rb_node*) ;
 int FUNC_4 (struct rb_node*) ;
 int FUNC_5 (struct rb_node*) ;

void FUNC_6(struct rb_node *VAR_0, struct rb_root *VAR_1)
{
    struct rb_node *VAR_2, *VAR_3;

    while ((VAR_2 = FUNC_3(VAR_0)) && FUNC_2(VAR_2))
    {
        VAR_3 = FUNC_3(VAR_2);

        if (VAR_2 == VAR_3->rb_left)
        {
            {
                register struct rb_node *VAR_4 = VAR_3->rb_right;
                if (VAR_4 && FUNC_2(VAR_4))
                {
                    FUNC_4(VAR_4);
                    FUNC_4(VAR_2);
                    FUNC_5(VAR_3);
                    VAR_0 = VAR_3;
                    continue;
                }
            }

            if (VAR_2->rb_right == VAR_0)
            {
                register struct rb_node *VAR_5;
                FUNC_0(VAR_2, VAR_1);
                VAR_5 = VAR_2;
                VAR_2 = VAR_0;
                VAR_0 = VAR_5;
            }

            FUNC_4(VAR_2);
            FUNC_5(VAR_3);
            FUNC_1(VAR_3, VAR_1);
        } else {
            {
                register struct rb_node *VAR_6 = VAR_3->rb_left;
                if (VAR_6 && FUNC_2(VAR_6))
                {
                    FUNC_4(VAR_6);
                    FUNC_4(VAR_2);
                    FUNC_5(VAR_3);
                    VAR_0 = VAR_3;
                    continue;
                }
            }

            if (VAR_2->rb_left == VAR_0)
            {
                register struct rb_node *VAR_7;
                FUNC_1(VAR_2, VAR_1);
                VAR_7 = VAR_2;
                VAR_2 = VAR_0;
                VAR_0 = VAR_7;
            }

            FUNC_4(VAR_2);
            FUNC_5(VAR_3);
            FUNC_0(VAR_3, VAR_1);
        }
    }

    FUNC_4(VAR_1->rb_node);
}
