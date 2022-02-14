
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct rb_node {int __rb_parent_color; } ;


 int FUNC_0 (struct rb_node*,struct rb_node*,struct rb_node*,struct rb_root*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 int FUNC_2 (struct rb_node*,struct rb_node*,int) ;

__attribute__((used)) static inline void
FUNC_3(struct rb_node *VAR_0, struct rb_node *VAR_1,
   struct rb_root *VAR_2, int VAR_3)
{
 struct rb_node *VAR_4 = FUNC_1(VAR_0);
 VAR_1->__rb_parent_color = VAR_0->__rb_parent_color;
 FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
}
