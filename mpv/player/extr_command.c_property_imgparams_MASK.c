
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_imgfmt_desc {int num_planes; int* bpp; int* xs; int* ys; int plane_bits; int flags; } ;
struct TYPE_2__ {double sig_peak; int light; int gamma; int primaries; int levels; int space; } ;
struct mp_image_params {int w; int h; double p_w; int rotate; int stereo3d; int chroma_location; TYPE_1__ color; scalar_t__ p_h; int imgfmt; } ;
struct m_sub_property {char* member_0; int unavailable; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct m_sub_property*,int,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct mp_image_params*,int*,int*) ;
 struct mp_imgfmt_desc FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct mp_image_params VAR_9, int VAR_10, void *VAR_11)
{
    if (!VAR_9.imgfmt)
        return VAR_1;

    int VAR_12, VAR_13;
    FUNC_5(&VAR_9, &VAR_12, &VAR_13);

    struct mp_imgfmt_desc VAR_14 = FUNC_6(VAR_9.imgfmt);
    int VAR_15 = 0;
    for (int VAR_16 = 0; VAR_16 < VAR_14.num_planes; VAR_16++)
        VAR_15 += VAR_14.bpp[VAR_16] >> (VAR_14.xs[VAR_16] + VAR_14.ys[VAR_16]);

    struct m_sub_property VAR_17[] = {
        {"pixelformat", FUNC_2(FUNC_7(VAR_9.imgfmt))},
        {"average-bpp", FUNC_1(VAR_15),
                            .unavailable = !VAR_15},
        {"plane-depth", FUNC_1(VAR_14.plane_bits),
                            .unavailable = !(VAR_14.flags & VAR_0)},
        {"w", FUNC_1(VAR_9.w)},
        {"h", FUNC_1(VAR_9.h)},
        {"dw", FUNC_1(VAR_12)},
        {"dh", FUNC_1(VAR_13)},
        {"aspect", FUNC_0(VAR_12 / (double)VAR_13)},
        {"par", FUNC_0(VAR_9.p_w / (double)VAR_9.p_h)},
        {"colormatrix",
            FUNC_2(FUNC_3(VAR_5, VAR_9.color.space))},
        {"colorlevels",
            FUNC_2(FUNC_3(VAR_3, VAR_9.color.levels))},
        {"primaries",
            FUNC_2(FUNC_3(VAR_6, VAR_9.color.primaries))},
        {"gamma",
            FUNC_2(FUNC_3(VAR_7, VAR_9.color.gamma))},
        {"sig-peak", FUNC_0(VAR_9.color.sig_peak)},
        {"light",
            FUNC_2(FUNC_3(VAR_4, VAR_9.color.light))},
        {"chroma-location",
            FUNC_2(FUNC_3(VAR_2, VAR_9.chroma_location))},
        {"stereo-in",
            FUNC_2(FUNC_3(VAR_8, VAR_9.stereo3d))},
        {"rotate", FUNC_1(VAR_9.rotate)},
        {0}
    };

    return FUNC_4(VAR_17, VAR_10, VAR_11);
}
