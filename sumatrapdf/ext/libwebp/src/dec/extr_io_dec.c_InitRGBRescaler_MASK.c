
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int rescaler_t ;
typedef int WebPRescaler ;
struct TYPE_7__ {int emit_alpha_row; TYPE_1__* output; int emit_alpha; int * scaler_a; int emit; int * scaler_v; int * scaler_u; int * scaler_y; int * memory; } ;
typedef TYPE_2__ WebPDecParams ;
struct TYPE_8__ {int scaled_width; int scaled_height; int mb_w; int mb_h; } ;
typedef TYPE_3__ VP8Io ;
struct TYPE_6__ {scalar_t__ colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int const*) ;
 int const VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int const,int const,int *,int const,int const,int ,int,int *) ;
 int * FUNC_5 (unsigned long long,size_t) ;

__attribute__((used)) static int FUNC_6(const VP8Io* const VAR_7, WebPDecParams* const VAR_8) {
  const int VAR_9 = FUNC_3(VAR_8->output->colorspace);
  const int VAR_10 = VAR_7->scaled_width;
  const int VAR_11 = VAR_7->scaled_height;
  const int VAR_12 = (VAR_7->mb_w + 1) >> 1;
  const int VAR_13 = (VAR_7->mb_h + 1) >> 1;
  const size_t VAR_14 = 2 * VAR_10;
  rescaler_t* VAR_15;
  uint8_t* VAR_16;
  size_t VAR_17, VAR_18, VAR_19, VAR_20;
  WebPRescaler* VAR_21;
  const int VAR_22 = VAR_9 ? 4 : 3;

  VAR_17 = 3 * VAR_14;
  VAR_18 = 3 * VAR_10;
  if (VAR_9) {
    VAR_17 += VAR_14;
    VAR_18 += VAR_10;
  }
  VAR_19 = VAR_17 * sizeof(*VAR_15) + VAR_18 * sizeof(*VAR_16);
  VAR_20 = VAR_22 * sizeof(*VAR_8->scaler_y) + VAR_6;

  VAR_8->memory = FUNC_5(1ULL, VAR_19 + VAR_20);
  if (VAR_8->memory == ((void*)0)) {
    return 0;
  }
  VAR_15 = (rescaler_t*)VAR_8->memory;
  VAR_16 = (uint8_t*)(VAR_15 + VAR_17);

  VAR_21 = (WebPRescaler*)FUNC_0((const uint8_t*)VAR_15 + VAR_19);
  VAR_8->scaler_y = &VAR_21[0];
  VAR_8->scaler_u = &VAR_21[1];
  VAR_8->scaler_v = &VAR_21[2];
  VAR_8->scaler_a = VAR_9 ? &VAR_21[3] : ((void*)0);

  FUNC_4(VAR_8->scaler_y, VAR_7->mb_w, VAR_7->mb_h,
                   VAR_16 + 0 * VAR_10, VAR_10, VAR_11, 0, 1,
                   VAR_15 + 0 * VAR_14);
  FUNC_4(VAR_8->scaler_u, VAR_12, VAR_13,
                   VAR_16 + 1 * VAR_10, VAR_10, VAR_11, 0, 1,
                   VAR_15 + 1 * VAR_14);
  FUNC_4(VAR_8->scaler_v, VAR_12, VAR_13,
                   VAR_16 + 2 * VAR_10, VAR_10, VAR_11, 0, 1,
                   VAR_15 + 2 * VAR_14);
  VAR_8->emit = VAR_1;
  FUNC_2();

  if (VAR_9) {
    FUNC_4(VAR_8->scaler_a, VAR_7->mb_w, VAR_7->mb_h,
                     VAR_16 + 3 * VAR_10, VAR_10, VAR_11, 0, 1,
                     VAR_15 + 3 * VAR_14);
    VAR_8->emit_alpha = VAR_0;
    if (VAR_8->output->colorspace == VAR_4 ||
        VAR_8->output->colorspace == VAR_5) {
      VAR_8->emit_alpha_row = VAR_3;
    } else {
      VAR_8->emit_alpha_row = VAR_2;
    }
    FUNC_1();
  }
  return 1;
}
