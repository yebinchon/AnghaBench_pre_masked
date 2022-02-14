
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_layers; TYPE_1__* layers; int graph; } ;
struct TYPE_7__ {int pos_in_layer; size_t layer; scalar_t__ is_dummy; } ;
struct TYPE_6__ {int n_nodes; int ** nodes; } ;
typedef int Sdb ;
typedef int RGraphNode ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 TYPE_2__* FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int ,int const*) ;
 int * FUNC_4 (int ,int const*,int ) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(const RAGraph *VAR_0, int VAR_1, int VAR_2, Sdb *VAR_3, Sdb *VAR_4) {
 const RGraphNode *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 const RANode *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = VAR_2? 1: -1;

 if (VAR_1 + VAR_10 < 0 || VAR_1 + VAR_10 >= VAR_0->n_layers) {
  return;
 }
 for (VAR_9 = 0; VAR_9 < VAR_0->layers[VAR_1 + VAR_10].n_nodes; ++VAR_9) {
  const RGraphNode *VAR_11, *VAR_12 = VAR_0->layers[VAR_1 + VAR_10].nodes[VAR_9];
  const RANode *VAR_13, *VAR_14 = FUNC_0 (VAR_12);

  if (!VAR_14 || !VAR_14->is_dummy) {
   continue;
  }
  if (VAR_2) {
   VAR_11 = FUNC_5 (FUNC_3 (VAR_0->graph, VAR_12), 0);
  } else {
   VAR_11 = FUNC_4 (VAR_0->graph, VAR_12, 0);
  }
  VAR_13 = FUNC_0 (VAR_11);
  if (!VAR_13 || !VAR_13->is_dummy) {
   continue;
  }
  if (VAR_5) {
   int VAR_15 = FUNC_1 (VAR_4, VAR_6);
   int VAR_16;

   for (VAR_16 = VAR_8->pos_in_layer + 1; VAR_16 < VAR_13->pos_in_layer; ++VAR_16) {
    const RGraphNode *VAR_17 = VAR_0->layers[VAR_8->layer].nodes[VAR_16];
    const RANode *VAR_18 = FUNC_0 (VAR_17);
    if (VAR_18 && VAR_18->is_dummy) {
     VAR_15 &= FUNC_1 (VAR_4, VAR_17);
    }
   }
   if (VAR_15) {
    FUNC_2 (VAR_3, VAR_5, VAR_2);
    for (VAR_16 = VAR_7->pos_in_layer + 1; VAR_16 < VAR_14->pos_in_layer; ++VAR_16) {
     const RGraphNode *VAR_19 = VAR_0->layers[VAR_7->layer].nodes[VAR_16];
     const RANode *VAR_20 = FUNC_0 (VAR_19);
     if (VAR_20 && VAR_20->is_dummy) {
      FUNC_2 (VAR_3, VAR_19, VAR_2);
     }
    }
   }
  }
  VAR_5 = VAR_12;
  VAR_6 = VAR_11;
  VAR_7 = FUNC_0 (VAR_5);
  VAR_8 = FUNC_0 (VAR_6);
 }
}
