
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int ** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;



__attribute__((used)) static void FUNC_0(VP8LHistogramSet* const VAR_0) {
  uint32_t VAR_1;
  int VAR_2;
  for (VAR_2 = 0, VAR_1 = 0; VAR_2 < VAR_0->size; ++VAR_2) {
    if (VAR_0->histograms[VAR_2] == ((void*)0)) continue;
    VAR_0->histograms[VAR_1++] = VAR_0->histograms[VAR_2];
  }
  VAR_0->size = VAR_1;
}
