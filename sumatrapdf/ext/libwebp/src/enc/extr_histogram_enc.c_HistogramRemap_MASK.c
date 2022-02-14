
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int max_size; int size; int ** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
typedef int VP8LHistogram ;


 int FUNC_0 (int *,int *,int *) ;
 double FUNC_1 (int *,int *,double) ;
 double VAR_0 ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const VP8LHistogramSet* const VAR_1,
                           VP8LHistogramSet* const VAR_2,
                           uint16_t* const VAR_3) {
  int VAR_4;
  VP8LHistogram** const VAR_5 = VAR_1->histograms;
  VP8LHistogram** const VAR_6 = VAR_2->histograms;
  const int VAR_7 = VAR_2->max_size;
  const int VAR_8 = VAR_2->size;
  if (VAR_8 > 1) {
    for (VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
      int VAR_9 = 0;
      double VAR_10 = VAR_0;
      int VAR_11;
      if (VAR_5[VAR_4] == ((void*)0)) {

        VAR_3[VAR_4] = VAR_3[VAR_4 - 1];
        continue;
      }
      for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11) {
        double VAR_12;
        VAR_12 = FUNC_1(VAR_6[VAR_11], VAR_5[VAR_4], VAR_10);
        if (VAR_11 == 0 || VAR_12 < VAR_10) {
          VAR_10 = VAR_12;
          VAR_9 = VAR_11;
        }
      }
      VAR_3[VAR_4] = VAR_9;
    }
  } else {
    FUNC_3(VAR_8 == 1);
    for (VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
      VAR_3[VAR_4] = 0;
    }
  }


  FUNC_2(VAR_2);
  VAR_2->size = VAR_8;

  for (VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
    int VAR_13;
    if (VAR_5[VAR_4] == ((void*)0)) continue;
    VAR_13 = VAR_3[VAR_4];
    FUNC_0(VAR_5[VAR_4], VAR_6[VAR_13], VAR_6[VAR_13]);
  }
}
