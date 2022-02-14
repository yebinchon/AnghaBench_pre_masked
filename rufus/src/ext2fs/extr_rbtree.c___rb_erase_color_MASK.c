
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;


 int FUNC_0 (struct rb_node*,struct rb_root*) ;
 int FUNC_1 (struct rb_node*,struct rb_root*) ;
 int FUNC_2 (struct rb_node*) ;
 scalar_t__ FUNC_3 (struct rb_node*) ;
 scalar_t__ FUNC_4 (struct rb_node*) ;
 struct rb_node* FUNC_5 (struct rb_node*) ;
 int FUNC_6 (struct rb_node*) ;
 int FUNC_7 (struct rb_node*,int ) ;
 int FUNC_8 (struct rb_node*) ;

__attribute__((used)) static void FUNC_9(struct rb_node *VAR_0, struct rb_node *VAR_1,
        struct rb_root *VAR_2)
{
 struct rb_node *VAR_3;

 while ((!VAR_0 || FUNC_3(VAR_0)) && VAR_0 != VAR_2->rb_node)
 {
  if (VAR_1->rb_left == VAR_0)
  {
   VAR_3 = VAR_1->rb_right;
   if (FUNC_4(VAR_3))
   {
    FUNC_6(VAR_3);
    FUNC_8(VAR_1);
    FUNC_0(VAR_1, VAR_2);
    VAR_3 = VAR_1->rb_right;
   }
   if ((!VAR_3->rb_left || FUNC_3(VAR_3->rb_left)) &&
       (!VAR_3->rb_right || FUNC_3(VAR_3->rb_right)))
   {
    FUNC_8(VAR_3);
    VAR_0 = VAR_1;
    VAR_1 = FUNC_5(VAR_0);
   }
   else
   {
    if (!VAR_3->rb_right || FUNC_3(VAR_3->rb_right))
    {
     FUNC_6(VAR_3->rb_left);
     FUNC_8(VAR_3);
     FUNC_1(VAR_3, VAR_2);
     VAR_3 = VAR_1->rb_right;
    }
    FUNC_7(VAR_3, FUNC_2(VAR_1));
    FUNC_6(VAR_1);
    FUNC_6(VAR_3->rb_right);
    FUNC_0(VAR_1, VAR_2);
    VAR_0 = VAR_2->rb_node;
    break;
   }
  }
  else
  {
   VAR_3 = VAR_1->rb_left;
   if (FUNC_4(VAR_3))
   {
    FUNC_6(VAR_3);
    FUNC_8(VAR_1);
    FUNC_1(VAR_1, VAR_2);
    VAR_3 = VAR_1->rb_left;
   }
   if ((!VAR_3->rb_left || FUNC_3(VAR_3->rb_left)) &&
       (!VAR_3->rb_right || FUNC_3(VAR_3->rb_right)))
   {
    FUNC_8(VAR_3);
    VAR_0 = VAR_1;
    VAR_1 = FUNC_5(VAR_0);
   }
   else
   {
    if (!VAR_3->rb_left || FUNC_3(VAR_3->rb_left))
    {
     FUNC_6(VAR_3->rb_right);
     FUNC_8(VAR_3);
     FUNC_0(VAR_3, VAR_2);
     VAR_3 = VAR_1->rb_left;
    }
    FUNC_7(VAR_3, FUNC_2(VAR_1));
    FUNC_6(VAR_1);
    FUNC_6(VAR_3->rb_left);
    FUNC_1(VAR_1, VAR_2);
    VAR_0 = VAR_2->rb_node;
    break;
   }
  }
 }
 if (VAR_0)
  FUNC_6(VAR_0);
}
