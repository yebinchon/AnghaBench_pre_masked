
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chroma_xs; int chroma_ys; int* bpp; } ;
struct mp_image {int num_planes; TYPE_1__ fmt; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct mp_image *VAR_1, int *VAR_2,
                                  int *VAR_3)
{
    int VAR_4 = (1 << VAR_1->fmt.chroma_xs);
    int VAR_5 = (1 << VAR_1->fmt.chroma_ys);

    for (int VAR_6 = 0; VAR_6 < VAR_1->num_planes; ++VAR_6) {
        int VAR_7 = VAR_1->fmt.bpp[VAR_6];

        while (((VAR_4 >> VAR_1->fmt.chroma_xs) * VAR_7) % (VAR_0 * 8 * 2))
            VAR_4 *= 2;
    }

    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
}
