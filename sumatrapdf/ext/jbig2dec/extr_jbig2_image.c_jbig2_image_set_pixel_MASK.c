
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int stride; int* data; } ;
typedef TYPE_1__ Jbig2Image ;



void
FUNC_0(Jbig2Image *VAR_0, int VAR_1, int VAR_2, bool VAR_3)
{
    const int VAR_4 = VAR_0->width;
    const int VAR_5 = VAR_0->height;
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;

    if ((VAR_1 < 0) || (VAR_1 >= VAR_4))
        return;
    if ((VAR_2 < 0) || (VAR_2 >= VAR_5))
        return;

    VAR_9 = (VAR_1 >> 3) + VAR_2 * VAR_0->stride;
    VAR_8 = 7 - (VAR_1 & 7);
    VAR_7 = (1 << VAR_8) ^ 0xff;

    VAR_6 = VAR_0->data[VAR_9] & VAR_7;
    VAR_0->data[VAR_9] = VAR_6 | (VAR_3 << VAR_8);
}
