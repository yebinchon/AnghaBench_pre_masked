
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ const y_size; scalar_t__ const u_size; scalar_t__ const v_size; scalar_t__ const a_size; int * a; int * v; int * u; int * y; int a_stride; int v_stride; int u_stride; int y_stride; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_8__ {scalar_t__ const size; int * rgba; int stride; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_6__ {TYPE_3__ RGBA; TYPE_2__ YUVA; } ;
struct TYPE_9__ {size_t colorspace; int width; int height; TYPE_1__ u; } ;
typedef TYPE_4__ WebPDecBuffer ;
typedef size_t WEBP_CSP_MODE ;
typedef int VP8StatusCode ;


 int FUNC_0 (size_t const) ;
 scalar_t__ FUNC_1 (int const,int const,int const) ;
 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t const) ;
 int FUNC_3 (int ) ;
 int const* VAR_3 ;

__attribute__((used)) static VP8StatusCode FUNC_4(const WebPDecBuffer* const VAR_4) {
  int VAR_5 = 1;
  const WEBP_CSP_MODE VAR_6 = VAR_4->colorspace;
  const int VAR_7 = VAR_4->width;
  const int VAR_8 = VAR_4->height;
  if (!FUNC_0(VAR_6)) {
    VAR_5 = 0;
  } else if (!FUNC_2(VAR_6)) {
    const WebPYUVABuffer* const VAR_9 = &VAR_4->u.YUVA;
    const int VAR_10 = (VAR_7 + 1) / 2;
    const int VAR_11 = (VAR_8 + 1) / 2;
    const int VAR_12 = FUNC_3(VAR_9->y_stride);
    const int VAR_13 = FUNC_3(VAR_9->u_stride);
    const int VAR_14 = FUNC_3(VAR_9->v_stride);
    const int VAR_15 = FUNC_3(VAR_9->a_stride);
    const uint64_t VAR_16 = FUNC_1(VAR_7, VAR_8, VAR_12);
    const uint64_t VAR_17 = FUNC_1(VAR_10, VAR_11, VAR_13);
    const uint64_t VAR_18 = FUNC_1(VAR_10, VAR_11, VAR_14);
    const uint64_t VAR_19 = FUNC_1(VAR_7, VAR_8, VAR_15);
    VAR_5 &= (VAR_16 <= VAR_9->y_size);
    VAR_5 &= (VAR_17 <= VAR_9->u_size);
    VAR_5 &= (VAR_18 <= VAR_9->v_size);
    VAR_5 &= (VAR_12 >= VAR_7);
    VAR_5 &= (VAR_13 >= VAR_10);
    VAR_5 &= (VAR_14 >= VAR_10);
    VAR_5 &= (VAR_9->y != ((void*)0));
    VAR_5 &= (VAR_9->u != ((void*)0));
    VAR_5 &= (VAR_9->v != ((void*)0));
    if (VAR_6 == VAR_0) {
      VAR_5 &= (VAR_15 >= VAR_7);
      VAR_5 &= (VAR_19 <= VAR_9->a_size);
      VAR_5 &= (VAR_9->a != ((void*)0));
    }
  } else {
    const WebPRGBABuffer* const VAR_20 = &VAR_4->u.RGBA;
    const int VAR_21 = FUNC_3(VAR_20->stride);
    const uint64_t VAR_22 =
        FUNC_1(VAR_7 * VAR_3[VAR_6], VAR_8, VAR_21);
    VAR_5 &= (VAR_22 <= VAR_20->size);
    VAR_5 &= (VAR_21 >= VAR_7 * VAR_3[VAR_6]);
    VAR_5 &= (VAR_20->rgba != ((void*)0));
  }
  return VAR_5 ? VAR_2 : VAR_1;
}
