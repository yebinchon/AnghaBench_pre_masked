
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maps {int names; int entries; } ;
struct map {int rb_node_name; int rb_node; } ;


 int FUNC_0 (struct map*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct maps *VAR_0, struct map *VAR_1)
{
 FUNC_1(&VAR_1->rb_node, &VAR_0->entries);
 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->rb_node_name, &VAR_0->names);
 FUNC_0(VAR_1);
}
