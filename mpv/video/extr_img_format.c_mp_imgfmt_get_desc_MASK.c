
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_imgfmt_desc {int id; int avformat; int chroma_xs; int chroma_ys; int* bpp; int component_bits; int num_planes; int plane_bits; int flags; int* bytes; int* xs; int* ys; int align_x; int align_y; } ;
typedef enum mp_component_type { ____Placeholder_mp_component_type } mp_component_type ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {size_t plane; int step; int depth; int shift; } ;
struct TYPE_4__ {int nb_components; int log2_chroma_w; int log2_chroma_h; int flags; TYPE_2__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 struct mp_imgfmt_desc FUNC_3 (int) ;

struct mp_imgfmt_desc FUNC_4(int VAR_24)
{
    enum AVPixelFormat VAR_25 = FUNC_1(VAR_24);
    const AVPixFmtDescriptor *VAR_26 = FUNC_0(VAR_25);
    if (!VAR_26 || VAR_26->nb_components > 4 || VAR_25 == VAR_7 ||
        VAR_25 == VAR_9)
        return FUNC_3(VAR_24);
    enum mp_component_type VAR_27 =
        FUNC_2(VAR_24) == VAR_12;

    struct mp_imgfmt_desc VAR_28 = {
        .id = VAR_24,
        .avformat = VAR_25,
        .chroma_xs = VAR_26->log2_chroma_w,
        .chroma_ys = VAR_26->log2_chroma_h,
    };

    int VAR_29[4] = {0};
    int VAR_30 = (VAR_26->flags & VAR_2) ? 1 : 8;
    bool VAR_31 = 0;
    int VAR_32 = -1;
    for (int VAR_33 = 0; VAR_33 < VAR_26->nb_components; VAR_33++) {
        AVComponentDescriptor VAR_34 = VAR_26->comp[VAR_33];

        if (!VAR_28.bpp[VAR_34.plane])
            VAR_28.bpp[VAR_34.plane] = VAR_34.step * VAR_30;
        VAR_29[VAR_34.plane] += VAR_34.depth;
        VAR_31 |= (VAR_34.depth + VAR_34.shift) > 8;
        if (VAR_33 == 0)
            VAR_28.component_bits = VAR_34.depth;
        if (VAR_34.depth != VAR_28.component_bits)
            VAR_28.component_bits = 0;
        if (VAR_33 == 0)
            VAR_32 = VAR_34.shift;
        if (VAR_32 != VAR_34.shift)
            VAR_32 = -1;
    }

    for (int VAR_35 = 0; VAR_35 < 4; VAR_35++) {
        if (VAR_28.bpp[VAR_35])
            VAR_28.num_planes++;
    }

    VAR_28.plane_bits = VAR_29[0];







    bool VAR_36 = 0;
    for (int VAR_37 = 0; VAR_37 < VAR_26->nb_components; VAR_37++) {
        AVComponentDescriptor VAR_38 = VAR_26->comp[VAR_37];
        VAR_36 |= VAR_38.shift > 0 && VAR_29[VAR_38.plane] > 8 &&
                                  VAR_28.component_bits < 8;
    }





    VAR_31 |= VAR_36;

    if (!VAR_31) {
        VAR_28.flags |= VAR_17 | VAR_14;
    } else {
        VAR_28.flags |= (VAR_26->flags & VAR_1)
                      ? VAR_14 : VAR_17;
    }

    if ((VAR_26->flags & VAR_3)) {
        VAR_28.flags |= VAR_16;
    } else if (VAR_25 == VAR_11 || VAR_25 == VAR_10) {

    } else if (!(VAR_26->flags & VAR_5) &&
               VAR_25 != VAR_6 &&
               VAR_25 != VAR_8)
    {
        VAR_28.flags |= VAR_21;
    } else {
        VAR_28.flags |= VAR_19;
    }

    if (VAR_26->flags & VAR_0)
        VAR_28.flags |= VAR_13;

    if (!(VAR_26->flags & VAR_3) &&
        !(VAR_26->flags & VAR_2))
    {
        VAR_28.flags |= VAR_15;
        for (int VAR_39 = 0; VAR_39 < VAR_28.num_planes; VAR_39++)
            VAR_28.bytes[VAR_39] = VAR_28.bpp[VAR_39] / 8;
    }

    if (VAR_26->flags & VAR_4)
        VAR_28.flags |= VAR_18;

    if ((VAR_28.flags & (VAR_21 | VAR_19))
        && (VAR_28.flags & VAR_15)
        && !(VAR_26->flags & VAR_4)
        && !VAR_36
        && VAR_32 >= 0 && VAR_27)
    {
        bool VAR_40 = 1;
        for (int VAR_41 = 0; VAR_41 < VAR_28.num_planes; VAR_41++) {
            VAR_40 &= VAR_29[VAR_41] == VAR_29[0] &&
                          VAR_28.bpp[VAR_41] == VAR_28.bpp[0];
        }
        if (VAR_40 && VAR_26->nb_components == VAR_28.num_planes) {
            if (VAR_28.flags & VAR_21) {
                VAR_28.flags |= VAR_23;
            } else {
                VAR_28.flags |= VAR_20;
            }
        }
        if (VAR_26->nb_components == 3 && VAR_28.num_planes == 2 &&
            VAR_29[1] == VAR_29[0] * 2 &&
            VAR_28.bpp[1] == VAR_28.bpp[0] * 2 &&
            (VAR_28.flags & VAR_21))
        {

            VAR_28.flags |= VAR_22;
        }
        if (VAR_28.flags & (VAR_23 | VAR_20 | VAR_22))
            VAR_28.component_bits += VAR_32;
    }

    for (int VAR_42 = 0; VAR_42 < VAR_28.num_planes; VAR_42++) {
        VAR_28.xs[VAR_42] = (VAR_42 == 1 || VAR_42 == 2) ? VAR_28.chroma_xs : 0;
        VAR_28.ys[VAR_42] = (VAR_42 == 1 || VAR_42 == 2) ? VAR_28.chroma_ys : 0;
    }

    VAR_28.align_x = 1 << VAR_28.chroma_xs;
    VAR_28.align_y = 1 << VAR_28.chroma_ys;

    if ((VAR_28.bpp[0] % 8) != 0)
        VAR_28.align_x = 8 / VAR_28.bpp[0];

    if (VAR_28.flags & VAR_16) {
        VAR_28.component_bits = 0;
        VAR_28.plane_bits = 0;
    }

    return VAR_28;
}
