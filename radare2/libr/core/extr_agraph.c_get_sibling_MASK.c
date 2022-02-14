
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* layers; } ;
struct TYPE_8__ {int pos_in_layer; size_t layer; } ;
struct TYPE_7__ {int ** nodes; } ;
typedef int RGraphNode ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 scalar_t__ FUNC_0 (TYPE_3__ const*,size_t,int) ;

__attribute__((used)) static RGraphNode *FUNC_1(const RAGraph *VAR_0, const RANode *VAR_1, int VAR_2, int VAR_3) {
 RGraphNode *VAR_4 = ((void*)0);
 int VAR_5 = VAR_1->pos_in_layer;

 if ((VAR_2 && VAR_3) || (!VAR_2 && !VAR_3)) {
  VAR_5++;
 } else {
  VAR_5--;
 }

 if (FUNC_0 (VAR_0, VAR_1->layer, VAR_5)) {
  VAR_4 = VAR_0->layers[VAR_1->layer].nodes[VAR_5];
 }
 return VAR_4;
}
