
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int rb_parent_color; } ;



__attribute__((used)) static inline void FUNC_0(struct rb_node *VAR_0, struct rb_node *VAR_1)
{
 VAR_0->rb_parent_color = (VAR_0->rb_parent_color & 3) | (uintptr_t)VAR_1;
}
