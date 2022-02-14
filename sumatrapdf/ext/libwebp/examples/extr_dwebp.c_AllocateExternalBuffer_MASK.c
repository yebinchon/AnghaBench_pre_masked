
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ WebPOutputFileFormat ;
struct TYPE_10__ {int scaled_width; int scaled_height; int crop_width; int crop_height; scalar_t__ use_cropping; scalar_t__ use_scaling; } ;
struct TYPE_9__ {int width; int height; } ;
struct TYPE_12__ {int y_stride; int y_size; int a_stride; int a_size; int u_stride; int u_size; int v_stride; int v_size; int * v; int * u; int * a; int * y; } ;
struct TYPE_11__ {int stride; int size; int * rgba; } ;
struct TYPE_13__ {TYPE_4__ YUVA; TYPE_3__ RGBA; } ;
struct TYPE_15__ {int is_external_memory; TYPE_5__ u; int colorspace; } ;
struct TYPE_14__ {TYPE_2__ options; TYPE_1__ input; TYPE_7__ output; } ;
typedef TYPE_6__ WebPDecoderConfig ;
typedef TYPE_7__ WebPDecBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static uint8_t* FUNC_3(WebPDecoderConfig* VAR_7,
                                       WebPOutputFileFormat VAR_8,
                                       int VAR_9) {
  uint8_t* VAR_10 = ((void*)0);
  WebPDecBuffer* const VAR_11 = &VAR_7->output;
  int VAR_12 = VAR_7->input.width;
  int VAR_13 = VAR_7->input.height;
  if (VAR_7->options.use_scaling) {
    VAR_12 = VAR_7->options.scaled_width;
    VAR_13 = VAR_7->options.scaled_height;
  } else if (VAR_7->options.use_cropping) {
    VAR_12 = VAR_7->options.crop_width;
    VAR_13 = VAR_7->options.crop_height;
  }
  if (VAR_8 >= VAR_1 && VAR_8 <= VAR_6) {
    const int VAR_14 = (VAR_8 == VAR_1 || VAR_8 == VAR_0) ? 3
                  : (VAR_8 == VAR_2 || VAR_8 == VAR_6 ||
                     VAR_8 == VAR_3) ? 2
                  : 4;
    uint32_t VAR_15 = VAR_14 * VAR_12 + 7;
    VAR_10 = (uint8_t*)FUNC_1(VAR_15 * VAR_13);
    if (VAR_10 == ((void*)0)) return ((void*)0);
    VAR_11->u.RGBA.stride = VAR_15;
    VAR_11->u.RGBA.size = VAR_15 * VAR_13;
    VAR_11->u.RGBA.rgba = VAR_10;
  } else {
    const int VAR_16 = FUNC_0(VAR_11->colorspace);
    uint8_t* VAR_17;
    uint32_t VAR_18 = VAR_12 + 3;
    uint32_t VAR_19 = (VAR_12 + 1) / 2 + 13;
    uint32_t VAR_20 = VAR_18 * VAR_13 * (VAR_16 ? 2 : 1)
                        + 2 * VAR_19 * (VAR_13 + 1) / 2;
    FUNC_2(VAR_8 >= VAR_4 && VAR_8 <= VAR_5);
    VAR_10 = (uint8_t*)FUNC_1(VAR_20);
    if (VAR_10 == ((void*)0)) return ((void*)0);
    VAR_17 = VAR_10;
    VAR_11->u.YUVA.y = VAR_17;
    VAR_11->u.YUVA.y_stride = VAR_18;
    VAR_11->u.YUVA.y_size = VAR_18 * VAR_13;
    VAR_17 += VAR_11->u.YUVA.y_size;
    if (VAR_16) {
      VAR_11->u.YUVA.a = VAR_17;
      VAR_11->u.YUVA.a_stride = VAR_18;
      VAR_11->u.YUVA.a_size = VAR_18 * VAR_13;
      VAR_17 += VAR_11->u.YUVA.a_size;
    } else {
      VAR_11->u.YUVA.a = ((void*)0);
      VAR_11->u.YUVA.a_stride = 0;
    }
    VAR_11->u.YUVA.u = VAR_17;
    VAR_11->u.YUVA.u_stride = VAR_19;
    VAR_11->u.YUVA.u_size = VAR_19 * (VAR_13 + 1) / 2;
    VAR_17 += VAR_11->u.YUVA.u_size;

    VAR_11->u.YUVA.v = VAR_17;
    VAR_11->u.YUVA.v_stride = VAR_19;
    VAR_11->u.YUVA.v_size = VAR_19 * (VAR_13 + 1) / 2;
    VAR_17 += VAR_11->u.YUVA.v_size;
    FUNC_2(VAR_17 <= VAR_10 + VAR_20);
  }
  VAR_11->is_external_memory = VAR_9;
  return VAR_10;
}
