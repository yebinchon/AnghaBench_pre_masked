
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dist_t {int dist; int const* to; int const* from; } ;
struct TYPE_8__ {scalar_t__ dists; TYPE_1__* layers; } ;
struct TYPE_7__ {size_t layer; int pos_in_layer; int w; scalar_t__ is_reversed; } ;
struct TYPE_6__ {int ** nodes; } ;
typedef int RListIter ;
typedef int RListComparator ;
typedef int RGraphNode ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int const*) ;
 int * FUNC_1 (scalar_t__,struct dist_t*,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const RAGraph *VAR_2, const RGraphNode *VAR_3, const RGraphNode *VAR_4) {
 struct dist_t VAR_5;
 const RANode *VAR_6, *VAR_7;
 RListIter *VAR_8;
 int VAR_9 = 0;

 if (VAR_2->dists) {
  VAR_5.from = VAR_3;
  VAR_5.to = VAR_4;
  VAR_8 = FUNC_1 (VAR_2->dists, &VAR_5, (RListComparator) VAR_1);
  if (VAR_8) {
   struct dist_t *VAR_10 = (struct dist_t *) FUNC_2 (VAR_8);
   return VAR_10->dist;
  }
 }

 VAR_6 = FUNC_0 (VAR_3);
 VAR_7 = FUNC_0 (VAR_4);
 if (VAR_6 && VAR_7 && VAR_6->layer == VAR_7->layer) {
  int VAR_11;

  VAR_9 = VAR_6 == VAR_7 && !VAR_6->is_reversed? VAR_0: 0;
  for (VAR_11 = VAR_6->pos_in_layer; VAR_11 < VAR_7->pos_in_layer; ++VAR_11) {
   const RGraphNode *VAR_12 = VAR_2->layers[VAR_6->layer].nodes[VAR_11];
   const RGraphNode *VAR_13 = VAR_2->layers[VAR_6->layer].nodes[VAR_11 + 1];
   const RANode *VAR_14 = FUNC_0 (VAR_13);
   const RANode *VAR_15 = FUNC_0 (VAR_12);
   int VAR_16 = 0;

   if (VAR_2->dists) {
    VAR_5.from = VAR_12;
    VAR_5.to = VAR_13;
    VAR_8 = FUNC_1 (VAR_2->dists, &VAR_5, (RListComparator) VAR_1);
    if (VAR_8) {
     struct dist_t *VAR_17 = (struct dist_t *) FUNC_2 (VAR_8);
     VAR_9 += VAR_17->dist;
     VAR_16 = 1;
    }
   }

   if (VAR_15 && VAR_14 && !VAR_16) {
    int VAR_18 = VAR_0;
    if (VAR_15->is_reversed && VAR_14->is_reversed) {
     if (!VAR_15->is_reversed) {
      VAR_9 += VAR_15->w / 2;
     } else if (!VAR_14->is_reversed) {
      VAR_9 += VAR_14->w / 2;
     }
     VAR_9 += 1;
    } else {
     VAR_9 += VAR_15->w / 2 + VAR_14->w / 2 + VAR_18;
    }
   }
  }
 }

 return VAR_9;
}
