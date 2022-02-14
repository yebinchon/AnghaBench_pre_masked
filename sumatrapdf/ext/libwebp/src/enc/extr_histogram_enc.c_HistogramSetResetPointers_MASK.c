
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int max_size; TYPE_2__** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
struct TYPE_5__ {int * literal_; } ;
typedef TYPE_2__ VP8LHistogram ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(VP8LHistogramSet* const VAR_0,
                                      int VAR_1) {
  int VAR_2;
  const int VAR_3 = FUNC_0(VAR_1);
  uint8_t* VAR_4 = (uint8_t*) (VAR_0->histograms);
  VAR_4 += VAR_0->max_size * sizeof(*VAR_0->histograms);
  for (VAR_2 = 0; VAR_2 < VAR_0->max_size; ++VAR_2) {
    VAR_4 = (uint8_t*) FUNC_1(VAR_4);
    VAR_0->histograms[VAR_2] = (VP8LHistogram*) VAR_4;

    VAR_0->histograms[VAR_2]->literal_ = (uint32_t*)(VAR_4 + sizeof(VP8LHistogram));
    VAR_4 += VAR_3;
  }
}
