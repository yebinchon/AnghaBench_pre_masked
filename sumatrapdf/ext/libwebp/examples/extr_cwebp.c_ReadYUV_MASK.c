
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int use_argb; int width; int height; int uv_stride; int v; int u; int y_stride; int y; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int const* const,int const,int ,int ,int const,int const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int ,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(const uint8_t* const VAR_1, size_t VAR_2,
                   WebPPicture* const VAR_3) {
  const int VAR_4 = VAR_3->use_argb;
  const int VAR_5 = (VAR_3->width + 1) / 2;
  const int VAR_6 = (VAR_3->height + 1) / 2;
  const int VAR_7 = VAR_3->width * VAR_3->height;
  const int VAR_8 = VAR_5 * VAR_6;
  const size_t VAR_9 = VAR_7 + 2 * VAR_8;

  if (VAR_2 != VAR_9) {
    FUNC_3(VAR_0,
            "input data doesn't have the expected size (%d instead of %d)\n",
            (int)VAR_2, (int)VAR_9);
    return 0;
  }

  VAR_3->use_argb = 0;
  if (!FUNC_1(VAR_3)) return 0;
  FUNC_0(VAR_1, VAR_3->width, VAR_3->y, VAR_3->y_stride,
                     VAR_3->width, VAR_3->height);
  FUNC_0(VAR_1 + VAR_7, VAR_5,
                     VAR_3->u, VAR_3->uv_stride, VAR_5, VAR_6);
  FUNC_0(VAR_1 + VAR_7 + VAR_8, VAR_5,
                     VAR_3->v, VAR_3->uv_stride, VAR_5, VAR_6);
  return VAR_4 ? FUNC_2(VAR_3) : 1;
}
