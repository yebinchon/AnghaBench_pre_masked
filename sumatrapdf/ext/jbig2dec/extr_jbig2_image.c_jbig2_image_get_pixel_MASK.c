
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int stride; int const* data; } ;
typedef TYPE_1__ Jbig2Image ;



int
FUNC_0(Jbig2Image *VAR_0, int VAR_1, int VAR_2)
{
    const int VAR_3 = VAR_0->width;
    const int VAR_4 = VAR_0->height;
    const int VAR_5 = (VAR_1 >> 3) + VAR_2 * VAR_0->stride;
    const int VAR_6 = 7 - (VAR_1 & 7);

    if ((VAR_1 < 0) || (VAR_1 >= VAR_3))
        return 0;
    if ((VAR_2 < 0) || (VAR_2 >= VAR_4))
        return 0;

    return ((VAR_0->data[VAR_5] >> VAR_6) & 1);
}
