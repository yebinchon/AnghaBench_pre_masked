
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_image {int* stride; int ** planes; int h; int w; int imgfmt; } ;


 uintptr_t FUNC_0 (uintptr_t,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int,int*,int*,int*) ;

__attribute__((used)) static bool FUNC_2(struct mp_image *VAR_1, int VAR_2,
                                void *VAR_3, int VAR_4)
{
    int VAR_5[VAR_0];
    int VAR_6[VAR_0];
    int VAR_7[VAR_0];
    int VAR_8 = FUNC_1(VAR_1->imgfmt, VAR_1->w, VAR_1->h, VAR_2,
                               VAR_5, VAR_6, VAR_7);
    if (VAR_8 < 0 || VAR_8 > VAR_4)
        return 0;

    int VAR_9 = FUNC_0((uintptr_t)VAR_3, VAR_2) - (uintptr_t)VAR_3;
    if (VAR_4 - VAR_8 < VAR_9)
        return 0;
    uint8_t *VAR_10 = VAR_3;
    VAR_10 += VAR_9;

    for (int VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_1->planes[VAR_11] = VAR_6[VAR_11] >= 0 ? VAR_10 + VAR_6[VAR_11] : ((void*)0);
        VAR_1->stride[VAR_11] = VAR_5[VAR_11];
    }

    return 1;
}
