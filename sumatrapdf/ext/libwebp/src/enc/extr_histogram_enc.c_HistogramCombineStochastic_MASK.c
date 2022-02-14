
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint32_t ;
typedef int best_idx2 ;
struct TYPE_21__ {int size; TYPE_2__** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
struct TYPE_22__ {int bit_cost_; } ;
typedef TYPE_2__ VP8LHistogram ;
struct TYPE_24__ {int size; int max_size; TYPE_3__* queue; } ;
struct TYPE_23__ {int cost_diff; int idx1; int idx2; int cost_combo; } ;
typedef TYPE_3__ HistogramPair ;
typedef TYPE_4__ HistoQueue ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int const) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__* const) ;
 double FUNC_3 (TYPE_4__*,TYPE_2__** const,int,int,double) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__* const) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int,TYPE_3__* const) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__* const,int,int* const) ;
 int const FUNC_8 (int*) ;
 int VAR_0 ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int*,int*,int,int,int *) ;
 int FUNC_13 (int*,int*,int) ;

__attribute__((used)) static int FUNC_14(VP8LHistogramSet* const VAR_1,
                                      int* const VAR_2, int VAR_3,
                                      int* const VAR_4) {
  int VAR_5, VAR_6;
  uint32_t VAR_7 = 1;
  int VAR_8 = 0;
  const int VAR_9 = *VAR_2;
  const int VAR_10 = VAR_9 / 2;
  VP8LHistogram** const VAR_11 = VAR_1->histograms;



  HistoQueue VAR_12;
  const int VAR_13 = 9;
  int VAR_14 = 0;


  int* VAR_15;

  if (*VAR_2 < VAR_3) {
    *VAR_4 = 1;
    return 1;
  }

  VAR_15 = (int*) FUNC_10(*VAR_2, sizeof(*VAR_15));
  if (VAR_15 == ((void*)0)) return 0;
  if (!FUNC_1(&VAR_12, VAR_13)) goto End;

  for (VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_1->size; ++VAR_6) {
    if (VAR_11[VAR_6] == ((void*)0)) continue;
    VAR_15[VAR_5++] = VAR_6;
  }
  FUNC_11(VAR_5 == *VAR_2);


  for (VAR_6 = 0;
       VAR_6 < VAR_9 && *VAR_2 >= VAR_3 &&
           ++VAR_8 < VAR_10;
       ++VAR_6) {
    int* VAR_16;
    double VAR_17 =
        (VAR_12.size == 0) ? 0. : VAR_12.queue[0].cost_diff;
    int VAR_18 = -1, VAR_19 = 1;
    const uint32_t VAR_20 = (*VAR_2 - 1) * (*VAR_2);


    const int VAR_21 = (*VAR_2) / 2;


    for (VAR_5 = 0; *VAR_2 >= 2 && VAR_5 < VAR_21; ++VAR_5) {
      double VAR_22;

      const uint32_t VAR_23 = FUNC_8(&VAR_7) % VAR_20;
      uint32_t VAR_24 = VAR_23 / (*VAR_2 - 1);
      uint32_t VAR_25 = VAR_23 % (*VAR_2 - 1);
      if (VAR_25 >= VAR_24) ++VAR_25;
      VAR_24 = VAR_15[VAR_24];
      VAR_25 = VAR_15[VAR_25];


      VAR_22 =
          FUNC_3(&VAR_12, VAR_11, VAR_24, VAR_25, VAR_17);
      if (VAR_22 < 0) {
        VAR_17 = VAR_22;

        if (VAR_12.size == VAR_12.max_size) break;
      }
    }
    if (VAR_12.size == 0) continue;


    VAR_18 = VAR_12.queue[0].idx1;
    VAR_19 = VAR_12.queue[0].idx2;
    FUNC_11(VAR_18 < VAR_19);

    VAR_16 = (int*) FUNC_12(&VAR_19, VAR_15, *VAR_2,
                                   sizeof(VAR_19), &VAR_0);
    FUNC_11(VAR_16 != ((void*)0));
    FUNC_13(VAR_16, VAR_16 + 1, sizeof(*VAR_16) *
        ((*VAR_2) - (VAR_16 - VAR_15) - 1));

    FUNC_6(VAR_11[VAR_19], VAR_11[VAR_18],
                 VAR_11[VAR_18]);
    VAR_11[VAR_18]->bit_cost_ = VAR_12.queue[0].cost_combo;
    FUNC_7(VAR_1, VAR_19, VAR_2);


    for (VAR_5 = 0; VAR_5 < VAR_12.size;) {
      HistogramPair* const VAR_26 = VAR_12.queue + VAR_5;
      const int VAR_27 = VAR_26->idx1 == VAR_18 || VAR_26->idx1 == VAR_19;
      const int VAR_28 = VAR_26->idx2 == VAR_18 || VAR_26->idx2 == VAR_19;
      int VAR_29 = 0;


      if (VAR_27 && VAR_28) {
        FUNC_2(&VAR_12, VAR_26);
        continue;
      }


      if (VAR_27) {
        VAR_26->idx1 = VAR_18;
        VAR_29 = 1;
      } else if (VAR_28) {
        VAR_26->idx2 = VAR_18;
        VAR_29 = 1;
      }

      if (VAR_26->idx1 > VAR_26->idx2) {
        const int VAR_30 = VAR_26->idx2;
        VAR_26->idx2 = VAR_26->idx1;
        VAR_26->idx1 = VAR_30;
      }
      if (VAR_29) {

        FUNC_5(VAR_11[VAR_26->idx1], VAR_11[VAR_26->idx2], 0., VAR_26);
        if (VAR_26->cost_diff >= 0.) {
          FUNC_2(&VAR_12, VAR_26);
          continue;
        }
      }
      FUNC_4(&VAR_12, VAR_26);
      ++VAR_5;
    }
    VAR_8 = 0;
  }
  *VAR_4 = (*VAR_2 <= VAR_3);
  VAR_14 = 1;

End:
  FUNC_0(&VAR_12);
  FUNC_9(VAR_15);
  return VAR_14;
}
