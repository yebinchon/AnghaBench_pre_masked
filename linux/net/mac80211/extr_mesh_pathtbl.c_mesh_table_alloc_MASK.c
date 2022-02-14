
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_table {int walk_lock; int gates_lock; int entries; int walk_head; int known_gates; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct mesh_table* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mesh_table *FUNC_4(void)
{
 struct mesh_table *VAR_1;

 VAR_1 = FUNC_2(sizeof(struct mesh_table), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->known_gates);
 FUNC_0(&VAR_1->walk_head);
 FUNC_1(&VAR_1->entries, 0);
 FUNC_3(&VAR_1->gates_lock);
 FUNC_3(&VAR_1->walk_lock);

 return VAR_1;
}
