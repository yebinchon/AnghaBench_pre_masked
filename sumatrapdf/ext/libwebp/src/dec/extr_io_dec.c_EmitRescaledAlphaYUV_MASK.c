
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int a_stride; int y_stride; int * a; int * y; } ;
typedef TYPE_3__ WebPYUVABuffer ;
struct TYPE_12__ {int last_y; TYPE_6__* scaler_a; TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
struct TYPE_13__ {int scaled_height; int scaled_width; int mb_h; int width; int * a; } ;
typedef TYPE_5__ VP8Io ;
struct TYPE_14__ {int dst_width; } ;
struct TYPE_9__ {TYPE_3__ YUVA; } ;
struct TYPE_10__ {TYPE_1__ u; } ;


 int FUNC_0 (int * const,int ,int,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_6__*) ;
 int FUNC_2 (int * const,int,int * const,int,int ,int const,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const VP8Io* const VAR_0, WebPDecParams* const VAR_1,
                                int VAR_2) {
  const WebPYUVABuffer* const VAR_3 = &VAR_1->output->u.YUVA;
  uint8_t* const VAR_4 = VAR_3->a + VAR_1->last_y * VAR_3->a_stride;
  if (VAR_0->a != ((void*)0)) {
    uint8_t* const VAR_5 = VAR_3->y + VAR_1->last_y * VAR_3->y_stride;
    const int VAR_6 = FUNC_1(VAR_0->a, VAR_0->width, VAR_0->mb_h, VAR_1->scaler_a);
    FUNC_3(VAR_2 == VAR_6);
    if (VAR_6 > 0) {
      FUNC_2(VAR_5, VAR_3->y_stride, VAR_4, VAR_3->a_stride,
                   VAR_1->scaler_a->dst_width, VAR_6, 1);
    }
  } else if (VAR_3->a != ((void*)0)) {

    FUNC_3(VAR_1->last_y + VAR_2 <= VAR_0->scaled_height);
    FUNC_0(VAR_4, VAR_0->scaled_width, VAR_2,
                   VAR_3->a_stride);
  }
  return 0;
}
