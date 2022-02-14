
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int rescaler_t ;
struct TYPE_10__ {int a_stride; int a; int v_stride; int v; int u_stride; int u; int y_stride; int y; } ;
typedef TYPE_3__ WebPYUVABuffer ;
typedef int WebPRescaler ;
struct TYPE_11__ {int emit_alpha; int * scaler_a; int emit; int * scaler_v; int * scaler_u; int * scaler_y; int * memory; TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
struct TYPE_12__ {int scaled_width; int scaled_height; int mb_w; int mb_h; } ;
typedef TYPE_5__ VP8Io ;
struct TYPE_8__ {TYPE_3__ YUVA; } ;
struct TYPE_9__ {TYPE_1__ u; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int const VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int const,int const,int ,int const,int const,int ,int,int *) ;
 int * FUNC_4 (unsigned long long,size_t) ;

__attribute__((used)) static int FUNC_5(const VP8Io* const VAR_3, WebPDecParams* const VAR_4) {
  const int VAR_5 = FUNC_2(VAR_4->output->colorspace);
  const WebPYUVABuffer* const VAR_6 = &VAR_4->output->u.YUVA;
  const int VAR_7 = VAR_3->scaled_width;
  const int VAR_8 = VAR_3->scaled_height;
  const int VAR_9 = (VAR_7 + 1) >> 1;
  const int VAR_10 = (VAR_8 + 1) >> 1;
  const int VAR_11 = (VAR_3->mb_w + 1) >> 1;
  const int VAR_12 = (VAR_3->mb_h + 1) >> 1;
  const size_t VAR_13 = 2 * VAR_7;
  const size_t VAR_14 = 2 * VAR_9;
  size_t VAR_15, VAR_16;
  rescaler_t* VAR_17;
  WebPRescaler* VAR_18;
  const int VAR_19 = VAR_5 ? 4 : 3;

  VAR_15 = (VAR_13 + 2 * VAR_14) * sizeof(*VAR_17);
  if (VAR_5) {
    VAR_15 += VAR_13 * sizeof(*VAR_17);
  }
  VAR_16 = VAR_19 * sizeof(*VAR_4->scaler_y) + VAR_2;

  VAR_4->memory = FUNC_4(1ULL, VAR_15 + VAR_16);
  if (VAR_4->memory == ((void*)0)) {
    return 0;
  }
  VAR_17 = (rescaler_t*)VAR_4->memory;

  VAR_18 = (WebPRescaler*)FUNC_0((const uint8_t*)VAR_17 + VAR_15);
  VAR_4->scaler_y = &VAR_18[0];
  VAR_4->scaler_u = &VAR_18[1];
  VAR_4->scaler_v = &VAR_18[2];
  VAR_4->scaler_a = VAR_5 ? &VAR_18[3] : ((void*)0);

  FUNC_3(VAR_4->scaler_y, VAR_3->mb_w, VAR_3->mb_h,
                   VAR_6->y, VAR_7, VAR_8, VAR_6->y_stride, 1,
                   VAR_17);
  FUNC_3(VAR_4->scaler_u, VAR_11, VAR_12,
                   VAR_6->u, VAR_9, VAR_10, VAR_6->u_stride, 1,
                   VAR_17 + VAR_13);
  FUNC_3(VAR_4->scaler_v, VAR_11, VAR_12,
                   VAR_6->v, VAR_9, VAR_10, VAR_6->v_stride, 1,
                   VAR_17 + VAR_13 + VAR_14);
  VAR_4->emit = VAR_1;

  if (VAR_5) {
    FUNC_3(VAR_4->scaler_a, VAR_3->mb_w, VAR_3->mb_h,
                     VAR_6->a, VAR_7, VAR_8, VAR_6->a_stride, 1,
                     VAR_17 + VAR_13 + 2 * VAR_14);
    VAR_4->emit_alpha = VAR_0;
    FUNC_1();
  }
  return 1;
}
