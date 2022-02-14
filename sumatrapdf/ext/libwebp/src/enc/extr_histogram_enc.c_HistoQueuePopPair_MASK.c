
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * queue; } ;
typedef int HistogramPair ;
typedef TYPE_1__ HistoQueue ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(HistoQueue* const VAR_0,
                              HistogramPair* const VAR_1) {
  FUNC_0(VAR_1 >= VAR_0->queue &&
         VAR_1 < (VAR_0->queue + VAR_0->size));
  FUNC_0(VAR_0->size > 0);
  *VAR_1 = VAR_0->queue[VAR_0->size - 1];
  --VAR_0->size;
}
