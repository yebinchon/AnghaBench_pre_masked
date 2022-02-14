
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WebPPreset ;
struct TYPE_4__ {float quality; int target_PSNR; int method; int sns_strength; int filter_strength; int filter_sharpness; int filter_type; int segments; int pass; int preprocessing; int alpha_compression; int alpha_filtering; int alpha_quality; int near_lossless; scalar_t__ use_sharp_yuv; scalar_t__ use_delta_palette; scalar_t__ low_memory; scalar_t__ thread_level; scalar_t__ emulate_jpeg_size; int image_hint; scalar_t__ exact; scalar_t__ lossless; scalar_t__ partition_limit; scalar_t__ autofilter; scalar_t__ show_compressed; scalar_t__ partitions; scalar_t__ target_size; } ;
typedef TYPE_1__ WebPConfig ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(WebPConfig* VAR_2,
                           WebPPreset VAR_3, float VAR_4, int VAR_5) {
  if (FUNC_0(VAR_5, VAR_0)) {
    return 0;
  }
  if (VAR_2 == ((void*)0)) return 0;

  VAR_2->quality = VAR_4;
  VAR_2->target_size = 0;
  VAR_2->target_PSNR = 0.;
  VAR_2->method = 4;
  VAR_2->sns_strength = 50;
  VAR_2->filter_strength = 60;
  VAR_2->filter_sharpness = 0;
  VAR_2->filter_type = 1;
  VAR_2->partitions = 0;
  VAR_2->segments = 4;
  VAR_2->pass = 1;
  VAR_2->show_compressed = 0;
  VAR_2->preprocessing = 0;
  VAR_2->autofilter = 0;
  VAR_2->partition_limit = 0;
  VAR_2->alpha_compression = 1;
  VAR_2->alpha_filtering = 1;
  VAR_2->alpha_quality = 100;
  VAR_2->lossless = 0;
  VAR_2->exact = 0;
  VAR_2->image_hint = VAR_1;
  VAR_2->emulate_jpeg_size = 0;
  VAR_2->thread_level = 0;
  VAR_2->low_memory = 0;
  VAR_2->near_lossless = 100;
  VAR_2->use_delta_palette = 0;
  VAR_2->use_sharp_yuv = 0;


  switch (VAR_3) {
    case 129:
      VAR_2->sns_strength = 80;
      VAR_2->filter_sharpness = 4;
      VAR_2->filter_strength = 35;
      VAR_2->preprocessing &= ~2;
      break;
    case 130:
      VAR_2->sns_strength = 80;
      VAR_2->filter_sharpness = 3;
      VAR_2->filter_strength = 30;
      VAR_2->preprocessing |= 2;
      break;
    case 132:
      VAR_2->sns_strength = 25;
      VAR_2->filter_sharpness = 6;
      VAR_2->filter_strength = 10;
      break;
    case 131:
      VAR_2->sns_strength = 0;
      VAR_2->filter_strength = 0;
      VAR_2->preprocessing &= ~2;
      break;
    case 128:
      VAR_2->sns_strength = 0;
      VAR_2->filter_strength = 0;
      VAR_2->preprocessing &= ~2;
      VAR_2->segments = 2;
      break;
    case 133:
    default:
      break;
  }
  return FUNC_1(VAR_2);
}
