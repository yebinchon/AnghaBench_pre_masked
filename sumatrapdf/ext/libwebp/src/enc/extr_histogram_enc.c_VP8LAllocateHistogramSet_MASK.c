
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int max_size; int size; int ** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
typedef int VP8LHistogram ;


 int FUNC_0 (TYPE_1__*,int) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (size_t const,int) ;

VP8LHistogramSet* FUNC_4(int VAR_0, int VAR_1) {
  int VAR_2;
  VP8LHistogramSet* VAR_3;
  const size_t VAR_4 = FUNC_1(VAR_0, VAR_1);
  uint8_t* VAR_5 = (uint8_t*)FUNC_3(VAR_4, sizeof(*VAR_5));
  if (VAR_5 == ((void*)0)) return ((void*)0);

  VAR_3 = (VP8LHistogramSet*)VAR_5;
  VAR_5 += sizeof(*VAR_3);
  VAR_3->histograms = (VP8LHistogram**)VAR_5;
  VAR_3->max_size = VAR_0;
  VAR_3->size = VAR_0;
  FUNC_0(VAR_3, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
    FUNC_2(VAR_3->histograms[VAR_2], VAR_1, 0);
  }
  return VAR_3;
}
