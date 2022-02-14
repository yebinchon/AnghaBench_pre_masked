
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_callgraph; int is_instep; int need_reload_nodes; int show_node_titles; int show_node_body; int force_update_seek; int edgemode; int hints; void* db; int movspeed; int zoom; void* nodes; int graph; } ;
typedef TYPE_1__ RAGraph ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(RAGraph *VAR_2) {
 VAR_2->is_callgraph = 0;
 VAR_2->is_instep = 0;
 VAR_2->need_reload_nodes = 1;
 VAR_2->show_node_titles = 1;
 VAR_2->show_node_body = 1;
 VAR_2->force_update_seek = 1;
 VAR_2->graph = FUNC_0 ();
 VAR_2->nodes = FUNC_1 ();
 VAR_2->edgemode = 2;
 VAR_2->zoom = VAR_1;
 VAR_2->hints = 1;
 VAR_2->movspeed = VAR_0;
 VAR_2->db = FUNC_1 ();
}
