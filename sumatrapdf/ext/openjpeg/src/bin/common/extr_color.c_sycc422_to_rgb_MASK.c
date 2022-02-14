
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int x0; int color_space; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_4__ {int* data; int dy; int dx; scalar_t__ h; scalar_t__ w; scalar_t__ prec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int,int const,int const,int const,int*,int*,int*) ;

__attribute__((used)) static void FUNC_3(opj_image_t *VAR_1)
{
    int *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    const int *VAR_8, *VAR_9, *VAR_10;
    size_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17;
    size_t VAR_18;

    VAR_17 = (int)VAR_1->comps[0].prec;
    VAR_16 = 1 << (VAR_17 - 1);
    VAR_17 = (1 << VAR_17) - 1;

    VAR_11 = (size_t)VAR_1->comps[0].w;
    VAR_12 = (size_t)VAR_1->comps[0].h;
    VAR_13 = VAR_11 * VAR_12;

    VAR_8 = VAR_1->comps[0].data;
    VAR_9 = VAR_1->comps[1].data;
    VAR_10 = VAR_1->comps[2].data;

    VAR_2 = VAR_5 = (int*)FUNC_0(sizeof(int) * VAR_13);
    VAR_3 = VAR_6 = (int*)FUNC_0(sizeof(int) * VAR_13);
    VAR_4 = VAR_7 = (int*)FUNC_0(sizeof(int) * VAR_13);

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        goto fails;
    }


    VAR_14 = VAR_1->x0 & 1U;
    VAR_15 = VAR_11 - VAR_14;

    for (VAR_18 = 0U; VAR_18 < VAR_12; ++VAR_18) {
        size_t VAR_19;

        if (VAR_14 > 0U) {
            FUNC_2(VAR_16, VAR_17, *VAR_8, 0, 0, VAR_5, VAR_6, VAR_7);
            ++VAR_8;
            ++VAR_5;
            ++VAR_6;
            ++VAR_7;
        }

        for (VAR_19 = 0U; VAR_19 < (VAR_15 & ~(size_t)1U); VAR_19 += 2U) {
            FUNC_2(VAR_16, VAR_17, *VAR_8, *VAR_9, *VAR_10, VAR_5, VAR_6, VAR_7);
            ++VAR_8;
            ++VAR_5;
            ++VAR_6;
            ++VAR_7;
            FUNC_2(VAR_16, VAR_17, *VAR_8, *VAR_9, *VAR_10, VAR_5, VAR_6, VAR_7);
            ++VAR_8;
            ++VAR_5;
            ++VAR_6;
            ++VAR_7;
            ++VAR_9;
            ++VAR_10;
        }
        if (VAR_19 < VAR_15) {
            FUNC_2(VAR_16, VAR_17, *VAR_8, *VAR_9, *VAR_10, VAR_5, VAR_6, VAR_7);
            ++VAR_8;
            ++VAR_5;
            ++VAR_6;
            ++VAR_7;
            ++VAR_9;
            ++VAR_10;
        }
    }

    FUNC_1(VAR_1->comps[0].data);
    VAR_1->comps[0].data = VAR_2;
    FUNC_1(VAR_1->comps[1].data);
    VAR_1->comps[1].data = VAR_3;
    FUNC_1(VAR_1->comps[2].data);
    VAR_1->comps[2].data = VAR_4;

    VAR_1->comps[1].w = VAR_1->comps[2].w = VAR_1->comps[0].w;
    VAR_1->comps[1].h = VAR_1->comps[2].h = VAR_1->comps[0].h;
    VAR_1->comps[1].dx = VAR_1->comps[2].dx = VAR_1->comps[0].dx;
    VAR_1->comps[1].dy = VAR_1->comps[2].dy = VAR_1->comps[0].dy;
    VAR_1->color_space = VAR_0;
    return;

fails:
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
}
