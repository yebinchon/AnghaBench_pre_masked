
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpvs_fmt {scalar_t__ cw; scalar_t__ ch; scalar_t__ bits; } ;
struct mp_regular_imgfmt {scalar_t__ component_pad; scalar_t__ chroma_w; scalar_t__ chroma_h; int component_size; int num_planes; TYPE_1__* planes; } ;
struct TYPE_2__ {int num_components; int* components; } ;


 int FUNC_0 (struct mp_regular_imgfmt*,int) ;

__attribute__((used)) static bool FUNC_1(int VAR_0, const struct mpvs_fmt *VAR_1)
{
    struct mp_regular_imgfmt VAR_2;
    if (!FUNC_0(&VAR_2, VAR_0))
        return 0;
    if (VAR_2.component_pad > 0)
        return 0;
    if (VAR_2.chroma_w != VAR_1->cw || VAR_2.chroma_h != VAR_1->ch)
        return 0;
    if (VAR_2.component_size * 8 + VAR_2.component_pad != VAR_1->bits)
        return 0;
    if (VAR_2.num_planes != 3)
        return 0;
    for (int VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        if (VAR_2.planes[VAR_3].num_components != 1)
            return 0;
        if (VAR_2.planes[VAR_3].components[0] != VAR_3 + 1)
            return 0;
    }
    return 1;
}
