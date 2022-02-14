
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int all_neighbours; int in_nodes; int out_nodes; int data; int (* free ) (int ) ;} ;
typedef TYPE_1__ RGraphNode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (RGraphNode *VAR_0) {
 if (!VAR_0) {
  return;
 }
 if (VAR_0->free) {
  VAR_0->free (VAR_0->data);
 }
 FUNC_1 (VAR_0->out_nodes);
 FUNC_1 (VAR_0->in_nodes);
 FUNC_1 (VAR_0->all_neighbours);
 FUNC_0 (VAR_0);
}
