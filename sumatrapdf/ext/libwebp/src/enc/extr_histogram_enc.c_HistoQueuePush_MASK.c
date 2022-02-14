
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VP8LHistogram ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ max_size; TYPE_1__* queue; } ;
struct TYPE_7__ {int idx1; int idx2; double cost_diff; } ;
typedef TYPE_1__ HistogramPair ;
typedef TYPE_2__ HistoQueue ;


 int FUNC_0 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_1 (int const*,int const*,double,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static double FUNC_3(HistoQueue* const VAR_0,
                             VP8LHistogram** const VAR_1, int VAR_2,
                             int VAR_3, double VAR_4) {
  const VP8LHistogram* VAR_5;
  const VP8LHistogram* VAR_6;
  HistogramPair VAR_7;


  if (VAR_0->size == VAR_0->max_size) return 0.;
  FUNC_2(VAR_4 <= 0.);
  if (VAR_2 > VAR_3) {
    const int VAR_8 = VAR_3;
    VAR_3 = VAR_2;
    VAR_2 = VAR_8;
  }
  VAR_7.idx1 = VAR_2;
  VAR_7.idx2 = VAR_3;
  VAR_5 = VAR_1[VAR_2];
  VAR_6 = VAR_1[VAR_3];

  FUNC_1(VAR_5, VAR_6, VAR_4, &VAR_7);


  if (VAR_7.cost_diff >= VAR_4) return 0.;

  VAR_0->queue[VAR_0->size++] = VAR_7;
  FUNC_0(VAR_0, &VAR_0->queue[VAR_0->size - 1]);

  return VAR_7.cost_diff;
}
