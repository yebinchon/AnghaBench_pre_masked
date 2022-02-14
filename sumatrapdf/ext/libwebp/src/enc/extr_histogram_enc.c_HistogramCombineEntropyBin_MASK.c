
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int int16_t ;
struct TYPE_15__ {int size; TYPE_2__** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
struct TYPE_16__ {double bit_cost_; scalar_t__ trivial_symbol_; } ;
typedef TYPE_2__ VP8LHistogram ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 double FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__*,double const) ;
 int FUNC_2 (TYPE_1__* const,int,int*) ;
 int FUNC_3 (TYPE_2__**,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(VP8LHistogramSet* const VAR_2,
                                       int* VAR_3,
                                       const uint16_t* const VAR_4,
                                       uint16_t* const VAR_5,
                                       VP8LHistogram* VAR_6,
                                       const uint16_t* const VAR_7,
                                       int VAR_8,
                                       double VAR_9,
                                       int VAR_10) {
  VP8LHistogram** const VAR_11 = VAR_2->histograms;
  int VAR_12;
  struct {
    int16_t first;

    uint16_t num_combine_failures;
  } VAR_13[VAR_0];

  FUNC_5(VAR_8 <= VAR_0);
  for (VAR_12 = 0; VAR_12 < VAR_8; ++VAR_12) {
    VAR_13[VAR_12].first = -1;
    VAR_13[VAR_12].num_combine_failures = 0;
  }


  for (VAR_12 = 0; VAR_12 < *VAR_3; ++VAR_12) VAR_5[VAR_12] = VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_2->size; ++VAR_12) {
    int VAR_14, VAR_15;
    if (VAR_11[VAR_12] == ((void*)0)) continue;
    VAR_14 = VAR_7[VAR_12];
    VAR_15 = VAR_13[VAR_14].first;
    if (VAR_15 == -1) {
      VAR_13[VAR_14].first = VAR_12;
    } else if (VAR_10) {
      FUNC_0(VAR_11[VAR_12], VAR_11[VAR_15], VAR_11[VAR_15]);
      FUNC_2(VAR_2, VAR_12, VAR_3);
      VAR_5[VAR_4[VAR_12]] = VAR_4[VAR_15];
    } else {

      const double VAR_16 = VAR_11[VAR_12]->bit_cost_;
      const double VAR_17 = -VAR_16 * VAR_9;
      const double VAR_18 =
          FUNC_1(VAR_11[VAR_15], VAR_11[VAR_12],
                           VAR_6, VAR_17);
      if (VAR_18 < VAR_17) {





        const int VAR_19 =
            (VAR_6->trivial_symbol_ != VAR_1) ||
            ((VAR_11[VAR_12]->trivial_symbol_ == VAR_1) &&
             (VAR_11[VAR_15]->trivial_symbol_ == VAR_1));
        const int VAR_20 = 32;
        if (VAR_19 ||
            VAR_13[VAR_14].num_combine_failures >= VAR_20) {

          FUNC_3(&VAR_6, &VAR_11[VAR_15]);
          FUNC_2(VAR_2, VAR_12, VAR_3);
          VAR_5[VAR_4[VAR_12]] = VAR_4[VAR_15];
        } else {
          ++VAR_13[VAR_14].num_combine_failures;
        }
      }
    }
  }
  if (VAR_10) {

    for (VAR_12 = 0; VAR_12 < VAR_2->size; ++VAR_12) {
      if (VAR_11[VAR_12] == ((void*)0)) continue;
      FUNC_4(VAR_11[VAR_12]);
    }
  }
}
