
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_regular_imgfmt_plane {int num_components; int* components; } ;
struct mp_regular_imgfmt {int component_size; int num_planes; int component_pad; int chroma_w; int chroma_h; int forced_csp; struct mp_regular_imgfmt_plane* planes; int component_type; int member_0; } ;
struct TYPE_6__ {int depth; int shift; size_t plane; int step; int offset; } ;
struct TYPE_5__ {int flags; int nb_components; int log2_chroma_w; int log2_chroma_h; TYPE_2__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,size_t) ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mp_regular_imgfmt*) ;

bool FUNC_7(struct mp_regular_imgfmt *VAR_7, int VAR_8)
{
    struct mp_regular_imgfmt VAR_9 = {0};

    const AVPixFmtDescriptor *VAR_10 =
        FUNC_1(FUNC_2(VAR_8));

    if (!VAR_10 || (VAR_10->flags & VAR_2) ||
        (VAR_10->flags & VAR_3) ||
        (VAR_10->flags & VAR_4) ||
        VAR_10->nb_components < 1 ||
        VAR_10->nb_components > VAR_6 ||
        !FUNC_3(VAR_10))
        return 0;

    VAR_9.component_type = FUNC_4(VAR_8);
    if (!VAR_9.component_type)
        return 0;

    const AVComponentDescriptor *VAR_11 = &VAR_10->comp[0];

    int VAR_12 = VAR_11->depth + VAR_11->shift;
    if (VAR_12 < 1 || VAR_12 > 64)
        return 0;
    VAR_9.component_size = (VAR_12 + 7) / 8;

    for (int VAR_13 = 0; VAR_13 < VAR_10->nb_components; VAR_13++) {
        const AVComponentDescriptor *VAR_14 = &VAR_10->comp[VAR_13];

        if (VAR_14->plane < 0 || VAR_14->plane >= VAR_5)
            return 0;

        VAR_9.num_planes = FUNC_0(VAR_9.num_planes, VAR_14->plane + 1);


        if (VAR_14->depth != VAR_11->depth || VAR_14->shift != VAR_11->shift)
            return 0;


        int VAR_15 = VAR_14->step / VAR_9.component_size;
        if (!VAR_15 || VAR_15 * VAR_9.component_size != VAR_14->step)
            return 0;

        struct mp_regular_imgfmt_plane *VAR_16 = &VAR_9.planes[VAR_14->plane];

        if (VAR_16->num_components && VAR_16->num_components != VAR_15)
            return 0;
        VAR_16->num_components = VAR_15;

        int VAR_17 = VAR_14->offset / VAR_9.component_size;
        if (VAR_17 < 0 || VAR_17 >= VAR_15 || VAR_15 > VAR_6)
            return 0;
        if (VAR_16->components[VAR_17])
            return 0;
        VAR_16->components[VAR_17] = VAR_13 + 1;
    }


    if (VAR_10->nb_components == 2 && (VAR_10->flags & VAR_0)) {
        for (int VAR_18 = 0; VAR_18 < VAR_9.num_planes; VAR_18++) {
            for (int VAR_19 = 0; VAR_19 < VAR_9.planes[VAR_18].num_components; VAR_19++) {
                if (VAR_9.planes[VAR_18].components[VAR_19] == 2)
                    VAR_9.planes[VAR_18].components[VAR_19] = 4;
            }
        }
    }

    VAR_9.component_pad = VAR_11->depth - VAR_9.component_size * 8;
    if (VAR_11->shift) {

        if (VAR_11->shift + VAR_11->depth != VAR_9.component_size * 8)
            return 0;
        VAR_9.component_pad = -VAR_9.component_pad;
    }

    VAR_9.chroma_w = 1 << VAR_10->log2_chroma_w;
    VAR_9.chroma_h = 1 << VAR_10->log2_chroma_h;






    VAR_9.forced_csp = FUNC_5(VAR_8);

    if (!FUNC_6(&VAR_9))
        return 0;

    *VAR_7 = VAR_9;
    return 1;
}
