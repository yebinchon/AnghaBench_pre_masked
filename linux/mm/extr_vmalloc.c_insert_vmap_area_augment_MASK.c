
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int dummy; } ;
struct rb_root {int dummy; } ;
struct rb_node {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct vmap_area*) ;
 struct rb_node** FUNC_1 (struct vmap_area*,struct rb_root*,struct rb_node*,struct rb_node**) ;
 int FUNC_2 (struct vmap_area*,struct rb_root*,struct rb_node*,struct rb_node**,struct list_head*) ;

__attribute__((used)) static void
FUNC_3(struct vmap_area *VAR_0,
 struct rb_node *VAR_1, struct rb_root *VAR_2,
 struct list_head *VAR_3)
{
 struct rb_node **VAR_4;
 struct rb_node *VAR_5;

 if (VAR_1)
  VAR_4 = FUNC_1(VAR_0, ((void*)0), VAR_1, &VAR_5);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_2, ((void*)0), &VAR_5);

 FUNC_2(VAR_0, VAR_2, VAR_5, VAR_4, VAR_3);
 FUNC_0(VAR_0);
}
