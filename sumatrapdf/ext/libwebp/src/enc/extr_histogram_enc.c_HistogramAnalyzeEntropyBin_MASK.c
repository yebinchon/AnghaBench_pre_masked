
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int size; int ** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
typedef int VP8LHistogram ;
typedef int DominantCostRange ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(VP8LHistogramSet* const VAR_0,
                                       uint16_t* const VAR_1,
                                       int VAR_2) {
  int VAR_3;
  VP8LHistogram** const VAR_4 = VAR_0->histograms;
  const int VAR_5 = VAR_0->size;
  DominantCostRange VAR_6;
  FUNC_0(&VAR_6);


  for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3) {
    if (VAR_4[VAR_3] == ((void*)0)) continue;
    FUNC_2(VAR_4[VAR_3], &VAR_6);
  }



  for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3) {


    if (VAR_4[VAR_3] == ((void*)0)) continue;
    VAR_1[VAR_3] = FUNC_1(VAR_4[VAR_3], &VAR_6, VAR_2);
  }
}
