
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root_cached {int rb_root; struct rb_node* rb_leftmost; } ;
struct rb_node {int dummy; } ;


 int FUNC_0 (struct rb_node*,struct rb_node*,int *) ;

__attribute__((used)) static inline void FUNC_1(struct rb_node *VAR_0,
       struct rb_node *VAR_1,
       struct rb_root_cached *VAR_2)
{
 if (VAR_2->rb_leftmost == VAR_0)
  VAR_2->rb_leftmost = VAR_1;
 FUNC_0(VAR_0, VAR_1, &VAR_2->rb_root);
}
