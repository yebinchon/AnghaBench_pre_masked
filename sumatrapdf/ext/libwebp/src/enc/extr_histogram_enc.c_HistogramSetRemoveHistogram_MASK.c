
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(VP8LHistogramSet* const VAR_0, int VAR_1,
                                        int* const VAR_2) {
  FUNC_0(VAR_0->histograms[VAR_1] != ((void*)0));
  VAR_0->histograms[VAR_1] = ((void*)0);
  --*VAR_2;

  if (VAR_1 == VAR_0->size - 1) {
    while (VAR_0->size >= 1 && VAR_0->histograms[VAR_0->size - 1] == ((void*)0)) {
      --VAR_0->size;
    }
  }
}
