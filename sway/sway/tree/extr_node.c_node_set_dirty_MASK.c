
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_node {int dirty; } ;
struct TYPE_2__ {int dirty_nodes; } ;


 int FUNC_0 (int ,struct sway_node*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(struct sway_node *VAR_1) {
 if (VAR_1->dirty) {
  return;
 }
 VAR_1->dirty = 1;
 FUNC_0(VAR_0.dirty_nodes, VAR_1);
}
