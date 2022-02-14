
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int object_list; int rb_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct kmemleak_object *VAR_1)
{
 FUNC_1(&VAR_1->rb_node, &VAR_0);
 FUNC_0(&VAR_1->object_list);
}
