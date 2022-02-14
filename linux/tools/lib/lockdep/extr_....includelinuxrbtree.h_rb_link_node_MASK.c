
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {unsigned long __rb_parent_color; int * rb_right; int rb_left; } ;



__attribute__((used)) static inline void FUNC_0(struct rb_node *VAR_0, struct rb_node *VAR_1,
    struct rb_node **VAR_2)
{
 VAR_0->__rb_parent_color = (unsigned long)VAR_1;
 VAR_0->rb_left = *(VAR_0->rb_right = ((void*)0));

 *VAR_2 = VAR_0;
}
