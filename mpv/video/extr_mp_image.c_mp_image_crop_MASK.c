
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int align_x; int align_y; int* ys; int* xs; int* bpp; } ;
struct mp_image {int w; int h; int num_planes; int* planes; int* stride; TYPE_1__ fmt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_image*,int,int) ;

void FUNC_2(struct mp_image *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    FUNC_0(VAR_1 >= 0 && VAR_2 >= 0);
    FUNC_0(VAR_1 <= VAR_3 && VAR_2 <= VAR_4);
    FUNC_0(VAR_3 <= VAR_0->w && VAR_4 <= VAR_0->h);
    FUNC_0(!(VAR_1 & (VAR_0->fmt.align_x - 1)));
    FUNC_0(!(VAR_2 & (VAR_0->fmt.align_y - 1)));

    for (int VAR_5 = 0; VAR_5 < VAR_0->num_planes; ++VAR_5) {
        VAR_0->planes[VAR_5] += (VAR_2 >> VAR_0->fmt.ys[VAR_5]) * VAR_0->stride[VAR_5] +
                          (VAR_1 >> VAR_0->fmt.xs[VAR_5]) * VAR_0->fmt.bpp[VAR_5] / 8;
    }
    FUNC_1(VAR_0, VAR_3 - VAR_1, VAR_4 - VAR_2);
}
