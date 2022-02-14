
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_regular_imgfmt {scalar_t__ component_type; scalar_t__ component_size; scalar_t__ num_planes; scalar_t__ component_pad; scalar_t__ forced_csp; scalar_t__ chroma_w; scalar_t__ chroma_h; TYPE_1__* planes; } ;
struct TYPE_2__ {int num_components; scalar_t__* components; } ;



__attribute__((used)) static bool FUNC_0(struct mp_regular_imgfmt *VAR_0,
                                  struct mp_regular_imgfmt *VAR_1)
{
    if (VAR_0->component_type != VAR_1->component_type ||
        VAR_0->component_size != VAR_1->component_size ||
        VAR_0->num_planes != VAR_1->num_planes ||
        VAR_0->component_pad != VAR_1->component_pad ||
        VAR_0->forced_csp != VAR_1->forced_csp ||
        VAR_0->chroma_w != VAR_1->chroma_w ||
        VAR_0->chroma_h != VAR_1->chroma_h)
        return 0;

    for (int VAR_2 = 0; VAR_2 < VAR_0->num_planes; VAR_2++) {
        int VAR_3 = VAR_0->planes[VAR_2].num_components;
        if (VAR_3 != VAR_1->planes[VAR_2].num_components)
            return 0;
        for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
            if (VAR_0->planes[VAR_2].components[VAR_4] != VAR_1->planes[VAR_2].components[VAR_4])
                return 0;
        }
    }

    return 1;
}
