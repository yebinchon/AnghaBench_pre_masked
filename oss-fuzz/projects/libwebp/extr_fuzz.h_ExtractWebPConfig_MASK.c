
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ WebPImageHint ;
struct TYPE_5__ {int lossless; int quality; int method; int segments; int sns_strength; int filter_strength; int filter_sharpness; int filter_type; int autofilter; int alpha_compression; int alpha_filtering; int alpha_quality; int pass; int show_compressed; int preprocessing; int partitions; int partition_limit; int emulate_jpeg_size; int thread_level; int low_memory; int near_lossless; int exact; int use_delta_palette; int use_sharp_yuv; scalar_t__ image_hint; } ;
typedef TYPE_1__ WebPConfig ;


 int FUNC_0 (int,int const*,size_t,int * const) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_1__* const) ;

__attribute__((used)) static int FUNC_3(WebPConfig* const VAR_1, const uint8_t VAR_2[],
                             size_t VAR_3, uint32_t* const VAR_4) {
  if (VAR_1 == ((void*)0) || !FUNC_1(VAR_1)) return 0;
  VAR_1->lossless = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->quality = FUNC_0(100, VAR_2, VAR_3, VAR_4);
  VAR_1->method = FUNC_0(6, VAR_2, VAR_3, VAR_4);
  VAR_1->image_hint =
      (WebPImageHint)FUNC_0(VAR_0 - 1, VAR_2, VAR_3, VAR_4);
  VAR_1->segments = 1 + FUNC_0(3, VAR_2, VAR_3, VAR_4);
  VAR_1->sns_strength = FUNC_0(100, VAR_2, VAR_3, VAR_4);
  VAR_1->filter_strength = FUNC_0(100, VAR_2, VAR_3, VAR_4);
  VAR_1->filter_sharpness = FUNC_0(7, VAR_2, VAR_3, VAR_4);
  VAR_1->filter_type = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->autofilter = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->alpha_compression = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->alpha_filtering = FUNC_0(2, VAR_2, VAR_3, VAR_4);
  VAR_1->alpha_quality = FUNC_0(100, VAR_2, VAR_3, VAR_4);
  VAR_1->pass = 1 + FUNC_0(9, VAR_2, VAR_3, VAR_4);
  VAR_1->show_compressed = 1;
  VAR_1->preprocessing = FUNC_0(2, VAR_2, VAR_3, VAR_4);
  VAR_1->partitions = FUNC_0(3, VAR_2, VAR_3, VAR_4);
  VAR_1->partition_limit = 10 * FUNC_0(10, VAR_2, VAR_3, VAR_4);
  VAR_1->emulate_jpeg_size = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->thread_level = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->low_memory = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->near_lossless = 20 * FUNC_0(5, VAR_2, VAR_3, VAR_4);
  VAR_1->exact = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->use_delta_palette = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  VAR_1->use_sharp_yuv = FUNC_0(1, VAR_2, VAR_3, VAR_4);
  return FUNC_2(VAR_1);
}
