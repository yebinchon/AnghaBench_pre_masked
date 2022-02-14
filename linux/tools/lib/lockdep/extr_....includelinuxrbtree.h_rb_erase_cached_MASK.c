
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root_cached {int rb_root; struct rb_node* rb_leftmost; } ;
struct rb_node {int dummy; } ;


 int FUNC_0 (struct rb_node*,int *) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static inline void FUNC_2(struct rb_node *VAR_0,
       struct rb_root_cached *VAR_1)
{
 if (VAR_1->rb_leftmost == VAR_0)
  VAR_1->rb_leftmost = FUNC_1(VAR_0);
 FUNC_0(VAR_0, &VAR_1->rb_root);
}
