
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int max_size; int size; TYPE_2__** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
struct TYPE_6__ {int palette_code_bits_; } ;
typedef TYPE_2__ VP8LHistogram ;


 int FUNC_0 (TYPE_1__* const,int const) ;
 size_t FUNC_1 (int const,int const) ;
 int FUNC_2 (int *,int ,size_t const) ;

void FUNC_3(VP8LHistogramSet* const VAR_0) {
  int VAR_1;
  const int VAR_2 = VAR_0->histograms[0]->palette_code_bits_;
  const int VAR_3 = VAR_0->max_size;
  const size_t VAR_4 = FUNC_1(VAR_3, VAR_2);
  uint8_t* VAR_5 = (uint8_t*)VAR_0;

  FUNC_2(VAR_5, 0, VAR_4);
  VAR_5 += sizeof(*VAR_0);
  VAR_0->histograms = (VP8LHistogram**)VAR_5;
  VAR_0->max_size = VAR_3;
  VAR_0->size = VAR_3;
  FUNC_0(VAR_0, VAR_2);
  for (VAR_1 = 0; VAR_1 < VAR_3; ++VAR_1) {
    VAR_0->histograms[VAR_1]->palette_code_bits_ = VAR_2;
  }
}
