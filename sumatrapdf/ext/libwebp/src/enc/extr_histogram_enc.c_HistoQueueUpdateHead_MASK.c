
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; TYPE_1__* queue; } ;
struct TYPE_5__ {int cost_diff; } ;
typedef TYPE_1__ HistogramPair ;
typedef TYPE_2__ HistoQueue ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(HistoQueue* const VAR_0,
                                 HistogramPair* const VAR_1) {
  FUNC_0(VAR_1->cost_diff < 0.);
  FUNC_0(VAR_1 >= VAR_0->queue &&
         VAR_1 < (VAR_0->queue + VAR_0->size));
  FUNC_0(VAR_0->size > 0);
  if (VAR_1->cost_diff < VAR_0->queue[0].cost_diff) {

    const HistogramPair VAR_2 = VAR_0->queue[0];
    VAR_0->queue[0] = *VAR_1;
    *VAR_1 = VAR_2;
  }
}
