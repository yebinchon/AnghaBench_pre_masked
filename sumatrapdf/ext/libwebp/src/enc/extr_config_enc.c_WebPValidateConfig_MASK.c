
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quality; scalar_t__ target_size; scalar_t__ target_PSNR; int method; int segments; int sns_strength; int filter_strength; int filter_sharpness; int filter_type; int autofilter; int pass; int show_compressed; int preprocessing; int partitions; int partition_limit; scalar_t__ alpha_compression; scalar_t__ alpha_filtering; int alpha_quality; int lossless; int near_lossless; scalar_t__ image_hint; int emulate_jpeg_size; int thread_level; int low_memory; int exact; int use_delta_palette; int use_sharp_yuv; } ;
typedef TYPE_1__ WebPConfig ;


 scalar_t__ VAR_0 ;

int FUNC_0(const WebPConfig* VAR_1) {
  if (VAR_1 == ((void*)0)) return 0;
  if (VAR_1->quality < 0 || VAR_1->quality > 100) return 0;
  if (VAR_1->target_size < 0) return 0;
  if (VAR_1->target_PSNR < 0) return 0;
  if (VAR_1->method < 0 || VAR_1->method > 6) return 0;
  if (VAR_1->segments < 1 || VAR_1->segments > 4) return 0;
  if (VAR_1->sns_strength < 0 || VAR_1->sns_strength > 100) return 0;
  if (VAR_1->filter_strength < 0 || VAR_1->filter_strength > 100) return 0;
  if (VAR_1->filter_sharpness < 0 || VAR_1->filter_sharpness > 7) return 0;
  if (VAR_1->filter_type < 0 || VAR_1->filter_type > 1) return 0;
  if (VAR_1->autofilter < 0 || VAR_1->autofilter > 1) return 0;
  if (VAR_1->pass < 1 || VAR_1->pass > 10) return 0;
  if (VAR_1->show_compressed < 0 || VAR_1->show_compressed > 1) return 0;
  if (VAR_1->preprocessing < 0 || VAR_1->preprocessing > 7) return 0;
  if (VAR_1->partitions < 0 || VAR_1->partitions > 3) return 0;
  if (VAR_1->partition_limit < 0 || VAR_1->partition_limit > 100) return 0;
  if (VAR_1->alpha_compression < 0) return 0;
  if (VAR_1->alpha_filtering < 0) return 0;
  if (VAR_1->alpha_quality < 0 || VAR_1->alpha_quality > 100) return 0;
  if (VAR_1->lossless < 0 || VAR_1->lossless > 1) return 0;
  if (VAR_1->near_lossless < 0 || VAR_1->near_lossless > 100) return 0;
  if (VAR_1->image_hint >= VAR_0) return 0;
  if (VAR_1->emulate_jpeg_size < 0 || VAR_1->emulate_jpeg_size > 1) return 0;
  if (VAR_1->thread_level < 0 || VAR_1->thread_level > 1) return 0;
  if (VAR_1->low_memory < 0 || VAR_1->low_memory > 1) return 0;
  if (VAR_1->exact < 0 || VAR_1->exact > 1) return 0;
  if (VAR_1->use_delta_palette < 0 || VAR_1->use_delta_palette > 1) {
    return 0;
  }
  if (VAR_1->use_sharp_yuv < 0 || VAR_1->use_sharp_yuv > 1) return 0;

  return 1;
}
