
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ const uint32_t ;
typedef int rescaler_t ;
struct TYPE_3__ {int x_expand; int y_expand; int src_width; int src_height; int dst_width; int dst_height; int dst_stride; int num_channels; int x_add; int x_sub; int y_add; int y_sub; int y_accum; scalar_t__ fxy_scale; int * frow; int * irow; void* fy_scale; void* fx_scale; int * dst; scalar_t__ dst_y; scalar_t__ src_y; } ;
typedef TYPE_1__ WebPRescaler ;


 void* FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int * const,int ,int) ;

void FUNC_3(WebPRescaler* const VAR_1, int VAR_2, int VAR_3,
                      uint8_t* const VAR_4,
                      int VAR_5, int VAR_6, int VAR_7,
                      int VAR_8, rescaler_t* const VAR_9) {
  const int VAR_10 = VAR_2, VAR_11 = VAR_5;
  const int VAR_12 = VAR_3, VAR_13 = VAR_6;
  VAR_1->x_expand = (VAR_2 < VAR_5);
  VAR_1->y_expand = (VAR_3 < VAR_6);
  VAR_1->src_width = VAR_2;
  VAR_1->src_height = VAR_3;
  VAR_1->dst_width = VAR_5;
  VAR_1->dst_height = VAR_6;
  VAR_1->src_y = 0;
  VAR_1->dst_y = 0;
  VAR_1->dst = VAR_4;
  VAR_1->dst_stride = VAR_7;
  VAR_1->num_channels = VAR_8;


  VAR_1->x_add = VAR_1->x_expand ? (VAR_11 - 1) : VAR_10;
  VAR_1->x_sub = VAR_1->x_expand ? (VAR_10 - 1) : VAR_11;
  if (!VAR_1->x_expand) {
    VAR_1->fx_scale = FUNC_0(1, VAR_1->x_sub);
  }

  VAR_1->y_add = VAR_1->y_expand ? VAR_12 - 1 : VAR_12;
  VAR_1->y_sub = VAR_1->y_expand ? VAR_13 - 1 : VAR_13;
  VAR_1->y_accum = VAR_1->y_expand ? VAR_1->y_sub : VAR_1->y_add;
  if (!VAR_1->y_expand) {



    const uint64_t VAR_14 =
        (uint64_t)VAR_6 * VAR_0 / (VAR_1->x_add * VAR_1->y_add);
    if (VAR_14 != (uint32_t)VAR_14) {




      VAR_1->fxy_scale = 0;
    } else {
      VAR_1->fxy_scale = (uint32_t)VAR_14;
    }
    VAR_1->fy_scale = FUNC_0(1, VAR_1->y_sub);
  } else {
    VAR_1->fy_scale = FUNC_0(1, VAR_1->x_add);

  }
  VAR_1->irow = VAR_9;
  VAR_1->frow = VAR_9 + VAR_8 * VAR_5;
  FUNC_2(VAR_9, 0, 2 * VAR_5 * VAR_8 * sizeof(*VAR_9));

  FUNC_1();
}
