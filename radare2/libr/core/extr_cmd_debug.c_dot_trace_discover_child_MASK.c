
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trace_node {int dummy; } ;
struct dot_trace_ght {int * graphnodes; int * graph; } ;
struct TYPE_6__ {struct trace_node* data; struct TYPE_6__* parent; } ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef int Sdb ;
typedef TYPE_1__ RTreeVisitor ;
typedef TYPE_2__ RTreeNode ;
typedef int RGraphNode ;
typedef int RGraph ;


 int * FUNC_0 (int *,int *,struct trace_node*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_3 (RTreeNode *VAR_0, RTreeVisitor *VAR_1) {
 struct dot_trace_ght *VAR_2 = (struct dot_trace_ght *)VAR_1->data;
 RGraph *VAR_3 = VAR_2->graph;
 Sdb *VAR_4 = VAR_2->graphnodes;
 RTreeNode *VAR_5 = VAR_0->parent;
 struct trace_node *VAR_6 = VAR_0->data;
 struct trace_node *VAR_7 = VAR_5->data;

 if (VAR_6 && VAR_7) {
  RGraphNode *VAR_8 = FUNC_0 (VAR_3, VAR_4, VAR_6);
  RGraphNode *VAR_9 = FUNC_0 (VAR_3, VAR_4, VAR_7);

  if (!FUNC_2 (VAR_3, VAR_9, VAR_8))
   FUNC_1 (VAR_3, VAR_9, VAR_8);
 }
}
