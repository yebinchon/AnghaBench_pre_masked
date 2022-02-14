
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int color_space; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_4__ {int* data; scalar_t__ h; scalar_t__ w; scalar_t__ prec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int,int const,int const,int const,int*,int*,int*) ;

__attribute__((used)) static void FUNC_3(opj_image_t *VAR_1)
{
    int *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    const int *VAR_8, *VAR_9, *VAR_10;
    size_t VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;

    VAR_16 = (int)VAR_1->comps[0].prec;
    VAR_15 = 1 << (VAR_16 - 1);
    VAR_16 = (1 << VAR_16) - 1;

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

    for (VAR_14 = 0U; VAR_14 < VAR_13; ++VAR_14) {
        FUNC_2(VAR_15, VAR_16, *VAR_8, *VAR_9, *VAR_10, VAR_5, VAR_6, VAR_7);
        ++VAR_8;
        ++VAR_9;
        ++VAR_10;
        ++VAR_5;
        ++VAR_6;
        ++VAR_7;
    }
    FUNC_1(VAR_1->comps[0].data);
    VAR_1->comps[0].data = VAR_2;
    FUNC_1(VAR_1->comps[1].data);
    VAR_1->comps[1].data = VAR_3;
    FUNC_1(VAR_1->comps[2].data);
    VAR_1->comps[2].data = VAR_4;
    VAR_1->color_space = VAR_0;
    return;

fails:
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
}
