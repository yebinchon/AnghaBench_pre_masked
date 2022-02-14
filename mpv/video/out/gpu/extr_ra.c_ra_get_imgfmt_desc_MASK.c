
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_imgfmt_desc {int num_planes; int component_bits; scalar_t__ component_pad; int chroma_h; int chroma_w; TYPE_2__** planes; int ** components; int member_0; } ;
struct ra {int num_formats; TYPE_1__** formats; } ;
struct mp_regular_imgfmt_plane {int num_components; int * components; } ;
struct mp_regular_imgfmt {int num_planes; int component_size; scalar_t__ component_pad; int chroma_h; int chroma_w; int component_type; struct mp_regular_imgfmt_plane* planes; } ;
typedef enum ra_ctype { ____Placeholder_ra_ctype } ra_ctype ;
struct TYPE_4__ {scalar_t__* component_depth; int ctype; } ;
struct TYPE_3__ {int special_imgfmt; struct ra_imgfmt_desc* special_imgfmt_desc; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct ra*,int,int,int ) ;
 scalar_t__ FUNC_1 (struct mp_regular_imgfmt*,int) ;

bool FUNC_2(struct ra *VAR_1, int VAR_2, struct ra_imgfmt_desc *VAR_3)
{
    struct ra_imgfmt_desc VAR_4 = {0};

    struct mp_regular_imgfmt VAR_5;
    if (FUNC_1(&VAR_5, VAR_2)) {
        enum ra_ctype VAR_6 = VAR_0;
        VAR_4.num_planes = VAR_5.num_planes;
        VAR_4.component_bits = VAR_5.component_size * 8;
        VAR_4.component_pad = VAR_5.component_pad;
        for (int VAR_7 = 0; VAR_7 < VAR_5.num_planes; VAR_7++) {
            struct mp_regular_imgfmt_plane *VAR_8 = &VAR_5.planes[VAR_7];
            VAR_4.planes[VAR_7] = FUNC_0(VAR_1, VAR_5.component_size,
                                              VAR_8->num_components,
                                              VAR_5.component_type);
            if (!VAR_4.planes[VAR_7])
                return 0;
            for (int VAR_9 = 0; VAR_9 < VAR_8->num_components; VAR_9++)
                VAR_4.components[VAR_7][VAR_9] = VAR_8->components[VAR_9];

            if (VAR_4.component_bits > VAR_4.planes[VAR_7]->component_depth[0] &&
                VAR_4.component_pad < 0)
                return 0;

            if (VAR_6 != VAR_0 && VAR_6 != VAR_4.planes[VAR_7]->ctype)
                return 0;
            VAR_6 = VAR_4.planes[VAR_7]->ctype;
        }
        VAR_4.chroma_w = VAR_5.chroma_w;
        VAR_4.chroma_h = VAR_5.chroma_h;
        goto supported;
    }

    for (int VAR_10 = 0; VAR_10 < VAR_1->num_formats; VAR_10++) {
        if (VAR_2 && VAR_1->formats[VAR_10]->special_imgfmt == VAR_2) {
            VAR_4 = *VAR_1->formats[VAR_10]->special_imgfmt_desc;
            goto supported;
        }
    }


    return 0;

supported:

    *VAR_3 = VAR_4;
    return 1;
}
