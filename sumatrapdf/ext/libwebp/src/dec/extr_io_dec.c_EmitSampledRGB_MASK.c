
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
struct TYPE_9__ {int stride; int * rgba; } ;
typedef TYPE_2__ WebPRGBABuffer ;
struct TYPE_10__ {TYPE_4__* output; } ;
typedef TYPE_3__ WebPDecParams ;
struct TYPE_8__ {TYPE_2__ RGBA; } ;
struct TYPE_11__ {size_t colorspace; TYPE_1__ u; } ;
typedef TYPE_4__ WebPDecBuffer ;
struct TYPE_12__ {int mb_y; int mb_h; int mb_w; int uv_stride; int v; int u; int y_stride; int y; } ;
typedef TYPE_5__ VP8Io ;


 int FUNC_0 (int ,int ,int ,int ,int ,int * const,int,int ,int,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_1(const VP8Io* const VAR_1, WebPDecParams* const VAR_2) {
  WebPDecBuffer* const VAR_3 = VAR_2->output;
  WebPRGBABuffer* const VAR_4 = &VAR_3->u.RGBA;
  uint8_t* const VAR_5 = VAR_4->rgba + VAR_1->mb_y * VAR_4->stride;
  FUNC_0(VAR_1->y, VAR_1->y_stride,
                          VAR_1->u, VAR_1->v, VAR_1->uv_stride,
                          VAR_5, VAR_4->stride, VAR_1->mb_w, VAR_1->mb_h,
                          VAR_0[VAR_3->colorspace]);
  return VAR_1->mb_h;
}
