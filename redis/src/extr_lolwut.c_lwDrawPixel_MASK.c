
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int* pixels; } ;
typedef TYPE_1__ lwCanvas ;



void FUNC_0(lwCanvas *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
    if (VAR_1 < 0 || VAR_1 >= VAR_0->width ||
        VAR_2 < 0 || VAR_2 >= VAR_0->height) return;
    VAR_0->pixels[VAR_1+VAR_2*VAR_0->width] = VAR_3;
}
