
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* layers; } ;
struct TYPE_7__ {int layer; int pos_in_layer; scalar_t__ is_dummy; } ;
struct TYPE_6__ {int n_nodes; int const** nodes; } ;
typedef int const RGraphNode ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 TYPE_2__* FUNC_0 (int const*) ;

__attribute__((used)) static RGraphNode *FUNC_1(const RAGraph *VAR_0, const RGraphNode *VAR_1) {
 const RANode *VAR_2 = FUNC_0 (VAR_1);
 if (!VAR_2) {
  return ((void*)0);
 }
 int VAR_3, VAR_4 = VAR_2->layer;

 for (VAR_3 = VAR_2->pos_in_layer + 1; VAR_3 < VAR_0->layers[VAR_4].n_nodes; ++VAR_3) {
  RGraphNode *VAR_5 = VAR_0->layers[VAR_4].nodes[VAR_3];
  const RANode *VAR_6 = FUNC_0 (VAR_5);
  if (!VAR_6) {
   break;
  }

  if (VAR_6->is_dummy) {
   return VAR_5;
  }
 }
 return ((void*)0);
}
