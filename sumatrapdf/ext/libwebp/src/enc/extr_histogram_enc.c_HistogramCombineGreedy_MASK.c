
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int size; TYPE_2__** const histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
struct TYPE_19__ {int bit_cost_; } ;
typedef TYPE_2__ VP8LHistogram ;
struct TYPE_21__ {int size; TYPE_3__* queue; } ;
struct TYPE_20__ {int idx1; int idx2; int cost_combo; } ;
typedef TYPE_3__ HistogramPair ;
typedef TYPE_4__ HistoQueue ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int const) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__* const) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__** const,int const,int,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__* const) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__* const,int const,int* const) ;

__attribute__((used)) static int FUNC_7(VP8LHistogramSet* const VAR_0,
                                  int* const VAR_1) {
  int VAR_2 = 0;
  const int VAR_3 = VAR_0->size;
  int VAR_4, VAR_5;
  VP8LHistogram** const VAR_6 = VAR_0->histograms;

  HistoQueue VAR_7;
  if (!FUNC_1(&VAR_7, VAR_3 * VAR_3)) {
    goto End;
  }

  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
    if (VAR_0->histograms[VAR_4] == ((void*)0)) continue;
    for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_3; ++VAR_5) {

      if (VAR_0->histograms[VAR_5] == ((void*)0)) continue;
      FUNC_3(&VAR_7, VAR_6, VAR_4, VAR_5, 0.);
    }
  }

  while (VAR_7.size > 0) {
    const int VAR_8 = VAR_7.queue[0].idx1;
    const int VAR_9 = VAR_7.queue[0].idx2;
    FUNC_5(VAR_6[VAR_9], VAR_6[VAR_8], VAR_6[VAR_8]);
    VAR_6[VAR_8]->bit_cost_ = VAR_7.queue[0].cost_combo;


    FUNC_6(VAR_0, VAR_9, VAR_1);


    for (VAR_4 = 0; VAR_4 < VAR_7.size;) {
      HistogramPair* const VAR_10 = VAR_7.queue + VAR_4;
      if (VAR_10->idx1 == VAR_8 || VAR_10->idx2 == VAR_8 ||
          VAR_10->idx1 == VAR_9 || VAR_10->idx2 == VAR_9) {
        FUNC_2(&VAR_7, VAR_10);
      } else {
        FUNC_4(&VAR_7, VAR_10);
        ++VAR_4;
      }
    }


    for (VAR_4 = 0; VAR_4 < VAR_0->size; ++VAR_4) {
      if (VAR_4 == VAR_8 || VAR_0->histograms[VAR_4] == ((void*)0)) continue;
      FUNC_3(&VAR_7, VAR_0->histograms, VAR_8, VAR_4, 0.);
    }
  }

  VAR_2 = 1;

 End:
  FUNC_0(&VAR_7);
  return VAR_2;
}
