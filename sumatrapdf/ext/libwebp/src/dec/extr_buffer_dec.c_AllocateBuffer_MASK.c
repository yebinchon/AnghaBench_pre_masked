
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
struct TYPE_8__ {int y_stride; size_t y_size; int u_stride; size_t u_size; int v_stride; size_t v_size; size_t a_size; int a_stride; int * a; int * v; int * u; int * y; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_9__ {int stride; size_t size; int * rgba; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_7__ {TYPE_3__ RGBA; TYPE_2__ YUVA; } ;
struct TYPE_10__ {int width; int height; size_t colorspace; scalar_t__ is_external_memory; TYPE_1__ u; int * private_memory; } ;
typedef TYPE_4__ WebPDecBuffer ;
typedef size_t WEBP_CSP_MODE ;
typedef int VP8StatusCode ;


 int FUNC_0 (TYPE_4__* const) ;
 int FUNC_1 (size_t const) ;
 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t const) ;
 scalar_t__ FUNC_3 (unsigned long long,int) ;
 unsigned long long* VAR_3 ;

__attribute__((used)) static VP8StatusCode FUNC_4(WebPDecBuffer* const VAR_4) {
  const int VAR_5 = VAR_4->width;
  const int VAR_6 = VAR_4->height;
  const WEBP_CSP_MODE VAR_7 = VAR_4->colorspace;

  if (VAR_5 <= 0 || VAR_6 <= 0 || !FUNC_1(VAR_7)) {
    return VAR_1;
  }

  if (VAR_4->is_external_memory <= 0 && VAR_4->private_memory == ((void*)0)) {
    uint8_t* VAR_8;
    int VAR_9 = 0, VAR_10 = 0;
    uint64_t VAR_11 = 0, VAR_12 = 0, VAR_13;


    int VAR_14;
    uint64_t VAR_15;

    if ((uint64_t)VAR_5 * VAR_3[VAR_7] >= (1ull << 32)) {
      return VAR_1;
    }
    VAR_14 = VAR_5 * VAR_3[VAR_7];
    VAR_15 = (uint64_t)VAR_14 * VAR_6;
    if (!FUNC_2(VAR_7)) {
      VAR_9 = (VAR_5 + 1) / 2;
      VAR_11 = (uint64_t)VAR_9 * ((VAR_6 + 1) / 2);
      if (VAR_7 == VAR_0) {
        VAR_10 = VAR_5;
        VAR_12 = (uint64_t)VAR_10 * VAR_6;
      }
    }
    VAR_13 = VAR_15 + 2 * VAR_11 + VAR_12;


    VAR_8 = (uint8_t*)FUNC_3(VAR_13, sizeof(*VAR_8));
    if (VAR_8 == ((void*)0)) {
      return VAR_2;
    }
    VAR_4->private_memory = VAR_8;

    if (!FUNC_2(VAR_7)) {
      WebPYUVABuffer* const VAR_16 = &VAR_4->u.YUVA;
      VAR_16->y = VAR_8;
      VAR_16->y_stride = VAR_14;
      VAR_16->y_size = (size_t)VAR_15;
      VAR_16->u = VAR_8 + VAR_15;
      VAR_16->u_stride = VAR_9;
      VAR_16->u_size = (size_t)VAR_11;
      VAR_16->v = VAR_8 + VAR_15 + VAR_11;
      VAR_16->v_stride = VAR_9;
      VAR_16->v_size = (size_t)VAR_11;
      if (VAR_7 == VAR_0) {
        VAR_16->a = VAR_8 + VAR_15 + 2 * VAR_11;
      }
      VAR_16->a_size = (size_t)VAR_12;
      VAR_16->a_stride = VAR_10;
    } else {
      WebPRGBABuffer* const VAR_17 = &VAR_4->u.RGBA;
      VAR_17->rgba = VAR_8;
      VAR_17->stride = VAR_14;
      VAR_17->size = (size_t)VAR_15;
    }
  }
  return FUNC_0(VAR_4);
}
