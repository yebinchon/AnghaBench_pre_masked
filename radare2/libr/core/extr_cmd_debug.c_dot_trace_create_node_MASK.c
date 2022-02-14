
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trace_node {int dummy; } ;
struct dot_trace_ght {int graphnodes; int graph; } ;
struct TYPE_6__ {struct trace_node* data; } ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ RTreeVisitor ;
typedef TYPE_2__ RTreeNode ;


 int FUNC_0 (int ,int ,struct trace_node*) ;

__attribute__((used)) static void FUNC_1 (RTreeNode *VAR_0, RTreeVisitor *VAR_1) {
 struct dot_trace_ght *VAR_2 = (struct dot_trace_ght *)VAR_1->data;
 struct trace_node *VAR_3 = VAR_0->data;
 if (VAR_3) FUNC_0 (VAR_2->graph, VAR_2->graphnodes, VAR_3);
}
