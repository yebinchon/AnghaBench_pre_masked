
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int db; int is_callgraph; } ;
struct TYPE_9__ {TYPE_2__* context; } ;
struct TYPE_7__ {int graph_false; int graph_true; int graph_box3; int graph_box2; int graph_box; } ;
struct TYPE_8__ {TYPE_1__ pal; } ;
typedef TYPE_3__ RCons ;
typedef TYPE_4__ RAGraph ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(const RAGraph *VAR_0) {
 FUNC_1 (VAR_0->db, "agraph.is_callgraph", VAR_0->is_callgraph, 0);
 RCons *VAR_1 = FUNC_0 ();
 FUNC_2 (VAR_0->db, "agraph.color_box", VAR_1->context->pal.graph_box, 0);
 FUNC_2 (VAR_0->db, "agraph.color_box2", VAR_1->context->pal.graph_box2, 0);
 FUNC_2 (VAR_0->db, "agraph.color_box3", VAR_1->context->pal.graph_box3, 0);
 FUNC_2 (VAR_0->db, "agraph.color_true", VAR_1->context->pal.graph_true, 0);
 FUNC_2 (VAR_0->db, "agraph.color_false", VAR_1->context->pal.graph_false, 0);
}
