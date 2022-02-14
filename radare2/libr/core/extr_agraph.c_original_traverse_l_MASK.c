
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int n_layers; TYPE_1__* layers; } ;
struct TYPE_12__ {int pos_in_layer; size_t layer; scalar_t__ is_dummy; } ;
struct TYPE_11__ {int n_nodes; int ** nodes; } ;
typedef int Sdb ;
typedef int RGraphNode ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 int FUNC_0 (TYPE_3__ const*,int,int,int *,int *) ;
 TYPE_2__* FUNC_1 (int const*) ;
 int * FUNC_2 (TYPE_3__ const*,int const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ FUNC_5 (TYPE_3__ const*,int,int) ;
 int FUNC_6 (TYPE_3__ const*,int,int const*,int const*,int,int,int) ;
 int FUNC_7 (TYPE_3__ const*,int,int,int) ;

__attribute__((used)) static void FUNC_8(const RAGraph *VAR_0, Sdb *VAR_1, Sdb *VAR_2, int VAR_3) {
 int VAR_4, VAR_5, VAR_6, VAR_7;

 for (VAR_4 = VAR_3? 0: VAR_0->n_layers - 1;
   (VAR_3 && VAR_4 < VAR_0->n_layers) || (!VAR_3 && VAR_4 >= 0);
   VAR_4 = VAR_3? VAR_4 + 1: VAR_4 - 1) {
  int VAR_8;
  const RGraphNode *VAR_9 = ((void*)0);
  const RANode *VAR_10 = ((void*)0);

  VAR_8 = 0;
  while (VAR_8 < VAR_0->layers[VAR_4].n_nodes && !VAR_9) {
   const RGraphNode *VAR_11 = VAR_0->layers[VAR_4].nodes[VAR_8];
   const RANode *VAR_12 = FUNC_1 (VAR_11);
   if (VAR_12 && VAR_12->is_dummy) {
    VAR_6 = 0;
    VAR_7 = VAR_8;
    VAR_9 = VAR_11;
    VAR_10 = VAR_12;
   }
   VAR_8++;
  }
  if (!VAR_9) {
   VAR_6 = 0;
   VAR_7 = VAR_0->layers[VAR_4].n_nodes;
  }
  FUNC_6 (VAR_0, VAR_4, ((void*)0), VAR_9, VAR_3, VAR_6, VAR_7);
  for (VAR_5 = VAR_6; VAR_5 < VAR_7 - 1; VAR_5++) {
   FUNC_7 (VAR_0, VAR_4, VAR_5, VAR_5 + 1);
  }
  if (FUNC_5 (VAR_0, VAR_4, VAR_7 - 1) && VAR_9) {
   FUNC_7 (VAR_0, VAR_4, VAR_7 - 1, VAR_10->pos_in_layer);
  }
  while (VAR_9) {
   const RGraphNode *VAR_13 = FUNC_2 (VAR_0, VAR_9);
   const RANode *VAR_14 = ((void*)0);
   VAR_10 = FUNC_1 (VAR_9);

   if (!VAR_13) {
    VAR_6 = VAR_10->pos_in_layer + 1;
    VAR_7 = VAR_0->layers[VAR_10->layer].n_nodes;
    FUNC_6 (VAR_0, VAR_4, VAR_9, ((void*)0), VAR_3, VAR_6, VAR_7);
    for (VAR_5 = VAR_6; VAR_5 < VAR_7 - 1; ++VAR_5) {
     FUNC_7 (VAR_0, VAR_4, VAR_5, VAR_5 + 1);
    }

    if (FUNC_5 (VAR_0, VAR_4, VAR_6)) {
     FUNC_7 (VAR_0, VAR_4, VAR_10->pos_in_layer, VAR_6);
    }
   } else if (FUNC_3 (VAR_1, VAR_9) == VAR_3) {
    VAR_14 = FUNC_1 (VAR_13);
    VAR_6 = VAR_10->pos_in_layer + 1;
    VAR_7 = VAR_14->pos_in_layer;
    FUNC_6 (VAR_0, VAR_4, VAR_9, VAR_13, VAR_3, VAR_6, VAR_7);
    FUNC_4 (VAR_2, VAR_9, 1);
   }
   VAR_9 = VAR_13;
  }
  FUNC_0 (VAR_0, VAR_4, VAR_3, VAR_1, VAR_2);
 }
}
