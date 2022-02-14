
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* bpp; int flags; } ;
struct mp_image {scalar_t__ imgfmt; scalar_t__ w; scalar_t__ h; int num_planes; int * planes; TYPE_1__ fmt; int * stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int,int ,int ) ;
 int FUNC_3 (struct mp_image*) ;
 int FUNC_4 (struct mp_image*,int) ;
 int FUNC_5 (struct mp_image*,int) ;

void FUNC_6(struct mp_image *VAR_2, struct mp_image *VAR_3)
{
    FUNC_0(VAR_2->imgfmt == VAR_3->imgfmt);
    FUNC_0(VAR_2->w == VAR_3->w && VAR_2->h == VAR_3->h);
    FUNC_0(FUNC_3(VAR_2));
    for (int VAR_4 = 0; VAR_4 < VAR_2->num_planes; VAR_4++) {
        int VAR_5 = (FUNC_5(VAR_2, VAR_4) * VAR_2->fmt.bpp[VAR_4] + 7) / 8;
        int VAR_6 = FUNC_4(VAR_2, VAR_4);
        FUNC_2(VAR_2->planes[VAR_4], VAR_3->planes[VAR_4], VAR_5, VAR_6,
                   VAR_2->stride[VAR_4], VAR_3->stride[VAR_4]);
    }
    if (VAR_2->fmt.flags & VAR_1)
        FUNC_1(VAR_2->planes[1], VAR_3->planes[1], VAR_0);
}
