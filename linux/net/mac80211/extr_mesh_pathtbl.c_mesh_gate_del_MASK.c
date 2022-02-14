
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mesh_table {int gates_lock; } ;
struct mesh_path {int is_gate; TYPE_3__* sdata; int dst; int gate_list; int state_lock; } ;
struct TYPE_4__ {int num_gates; } ;
struct TYPE_5__ {TYPE_1__ mesh; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mesh_table *VAR_0, struct mesh_path *VAR_1)
{
 FUNC_1(&VAR_1->state_lock);
 if (!VAR_1->is_gate)
  return;

 VAR_1->is_gate = 0;
 FUNC_3(&VAR_0->gates_lock);
 FUNC_0(&VAR_1->gate_list);
 VAR_1->sdata->u.mesh.num_gates--;
 FUNC_4(&VAR_0->gates_lock);

 FUNC_2(VAR_1->sdata,
    "Mesh path: Deleted gate: %pM. %d known gates\n",
    VAR_1->dst, VAR_1->sdata->u.mesh.num_gates);
}
