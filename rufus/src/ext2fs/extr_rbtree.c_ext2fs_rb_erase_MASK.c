
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; int rb_parent_color; } ;


 int VAR_0 ;
 int FUNC_0 (struct rb_node*,struct rb_node*,struct rb_root*) ;
 int FUNC_1 (struct rb_node*) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 int FUNC_3 (struct rb_node*,struct rb_node*) ;

void FUNC_4(struct rb_node *VAR_1, struct rb_root *VAR_2)
{
 struct rb_node *VAR_3, *VAR_4;
 int VAR_5;

 if (!VAR_1->rb_left)
  VAR_3 = VAR_1->rb_right;
 else if (!VAR_1->rb_right)
  VAR_3 = VAR_1->rb_left;
 else
 {
  struct rb_node *VAR_6 = VAR_1, *VAR_7;

  VAR_1 = VAR_1->rb_right;
  while ((VAR_7 = VAR_1->rb_left) != ((void*)0))
   VAR_1 = VAR_7;

  if (FUNC_2(VAR_6)) {
   if (FUNC_2(VAR_6)->rb_left == VAR_6)
    FUNC_2(VAR_6)->rb_left = VAR_1;
   else
    FUNC_2(VAR_6)->rb_right = VAR_1;
  } else
   VAR_2->rb_node = VAR_1;

  VAR_3 = VAR_1->rb_right;
  VAR_4 = FUNC_2(VAR_1);
  VAR_5 = FUNC_1(VAR_1);

  if (VAR_4 == VAR_6) {
   VAR_4 = VAR_1;
  } else {
   if (VAR_3)
    FUNC_3(VAR_3, VAR_4);
   VAR_4->rb_left = VAR_3;

   VAR_1->rb_right = VAR_6->rb_right;
   FUNC_3(VAR_6->rb_right, VAR_1);
  }

  VAR_1->rb_parent_color = VAR_6->rb_parent_color;
  VAR_1->rb_left = VAR_6->rb_left;
  FUNC_3(VAR_6->rb_left, VAR_1);

  goto color;
 }

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_1(VAR_1);

 if (VAR_3)
  FUNC_3(VAR_3, VAR_4);
 if (VAR_4)
 {
  if (VAR_4->rb_left == VAR_1)
   VAR_4->rb_left = VAR_3;
  else
   VAR_4->rb_right = VAR_3;
 }
 else
  VAR_2->rb_node = VAR_3;

 color:
 if (VAR_5 == VAR_0)
  FUNC_0(VAR_3, VAR_4, VAR_2);
}
