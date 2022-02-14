
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int a_stride; int a; int v_stride; int v; int u_stride; int u; int y_stride; int y; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_10__ {int stride; int rgba; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_8__ {TYPE_2__ YUVA; TYPE_3__ RGBA; } ;
struct TYPE_11__ {size_t colorspace; int width; int height; TYPE_1__ u; } ;
typedef TYPE_4__ WebPDecBuffer ;
typedef scalar_t__ VP8StatusCode ;


 scalar_t__ FUNC_0 (TYPE_4__* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int* VAR_2 ;

VP8StatusCode FUNC_5(const WebPDecBuffer* const VAR_3,
                                      WebPDecBuffer* const VAR_4) {
  FUNC_4(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));
  FUNC_4(VAR_3->colorspace == VAR_4->colorspace);

  VAR_4->width = VAR_3->width;
  VAR_4->height = VAR_3->height;
  if (FUNC_0(VAR_4) != VAR_1) {
    return VAR_0;
  }
  if (FUNC_3(VAR_3->colorspace)) {
    const WebPRGBABuffer* const VAR_5 = &VAR_3->u.RGBA;
    const WebPRGBABuffer* const VAR_6 = &VAR_4->u.RGBA;
    FUNC_1(VAR_5->rgba, VAR_5->stride, VAR_6->rgba, VAR_6->stride,
                  VAR_3->width * VAR_2[VAR_3->colorspace],
                  VAR_3->height);
  } else {
    const WebPYUVABuffer* const VAR_7 = &VAR_3->u.YUVA;
    const WebPYUVABuffer* const VAR_8 = &VAR_4->u.YUVA;
    FUNC_1(VAR_7->y, VAR_7->y_stride, VAR_8->y, VAR_8->y_stride,
                  VAR_3->width, VAR_3->height);
    FUNC_1(VAR_7->u, VAR_7->u_stride, VAR_8->u, VAR_8->u_stride,
                  (VAR_3->width + 1) / 2, (VAR_3->height + 1) / 2);
    FUNC_1(VAR_7->v, VAR_7->v_stride, VAR_8->v, VAR_8->v_stride,
                  (VAR_3->width + 1) / 2, (VAR_3->height + 1) / 2);
    if (FUNC_2(VAR_3->colorspace)) {
      FUNC_1(VAR_7->a, VAR_7->a_stride, VAR_8->a, VAR_8->a_stride,
                    VAR_3->width, VAR_3->height);
    }
  }
  return VAR_1;
}
