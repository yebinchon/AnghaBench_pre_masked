
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mesh_table {int gates_lock; int known_gates; } ;
struct mesh_path {int is_gate; TYPE_3__* sdata; int dst; int state_lock; int gate_list; } ;
struct TYPE_4__ {int num_gates; struct mesh_table* mesh_paths; } ;
struct TYPE_5__ {TYPE_1__ mesh; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mesh_path *VAR_1)
{
 struct mesh_table *VAR_2;
 int VAR_3;

 FUNC_2();
 VAR_2 = VAR_1->sdata->u.mesh.mesh_paths;

 FUNC_5(&VAR_1->state_lock);
 if (VAR_1->is_gate) {
  VAR_3 = -VAR_0;
  FUNC_7(&VAR_1->state_lock);
  goto err_rcu;
 }
 VAR_1->is_gate = 1;
 VAR_1->sdata->u.mesh.num_gates++;

 FUNC_4(&VAR_2->gates_lock);
 FUNC_0(&VAR_1->gate_list, &VAR_2->known_gates);
 FUNC_6(&VAR_2->gates_lock);

 FUNC_7(&VAR_1->state_lock);

 FUNC_1(VAR_1->sdata,
    "Mesh path: Recorded new gate: %pM. %d known gates\n",
    VAR_1->dst, VAR_1->sdata->u.mesh.num_gates);
 VAR_3 = 0;
err_rcu:
 FUNC_3();
 return VAR_3;
}
