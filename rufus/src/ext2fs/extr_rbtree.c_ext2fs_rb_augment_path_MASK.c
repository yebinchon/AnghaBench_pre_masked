
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;
typedef int (* rb_augment_f ) (struct rb_node*,void*) ;


 struct rb_node* FUNC_0 (struct rb_node*) ;

__attribute__((used)) static void FUNC_1(struct rb_node *VAR_0, rb_augment_f VAR_1, void *VAR_2)
{
 struct rb_node *VAR_3;

up:
 VAR_1(VAR_0, VAR_2);
 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return;

 if (VAR_0 == VAR_3->rb_left && VAR_3->rb_right)
  VAR_1(VAR_3->rb_right, VAR_2);
 else if (VAR_3->rb_left)
  VAR_1(VAR_3->rb_left, VAR_2);

 VAR_0 = VAR_3;
 goto up;
}
