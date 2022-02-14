
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sig_peak; int light; int levels; int gamma; int primaries; int space; } ;
struct mp_image_params {int w; int h; scalar_t__ p_w; scalar_t__ p_h; scalar_t__ stereo3d; scalar_t__ rotate; int chroma_location; TYPE_1__ color; scalar_t__ hw_subfmt; scalar_t__ imgfmt; } ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,size_t,char*,scalar_t__,...) ;
 int FUNC_4 (char*,size_t,char*,...) ;

char *FUNC_5(char *VAR_6, size_t VAR_7,
                                 const struct mp_image_params *VAR_8)
{
    if (VAR_8 && VAR_8->imgfmt) {
        FUNC_4(VAR_6, VAR_7, "%dx%d", VAR_8->w, VAR_8->h);
        if (VAR_8->p_w != VAR_8->p_h || !VAR_8->p_w)
            FUNC_3(VAR_6, VAR_7, " [%d:%d]", VAR_8->p_w, VAR_8->p_h);
        FUNC_3(VAR_6, VAR_7, " %s", FUNC_2(VAR_8->imgfmt));
        if (VAR_8->hw_subfmt)
            FUNC_3(VAR_6, VAR_7, "[%s]", FUNC_2(VAR_8->hw_subfmt));
        FUNC_3(VAR_6, VAR_7, " %s/%s/%s/%s/%s",
                        FUNC_1(VAR_3, VAR_8->color.space),
                        FUNC_1(VAR_4, VAR_8->color.primaries),
                        FUNC_1(VAR_5, VAR_8->color.gamma),
                        FUNC_1(VAR_1, VAR_8->color.levels),
                        FUNC_1(VAR_2, VAR_8->color.light));
        if (VAR_8->color.sig_peak)
            FUNC_3(VAR_6, VAR_7, " SP=%f", VAR_8->color.sig_peak);
        FUNC_3(VAR_6, VAR_7, " CL=%s",
                        FUNC_1(VAR_0, VAR_8->chroma_location));
        if (VAR_8->rotate)
            FUNC_3(VAR_6, VAR_7, " rot=%d", VAR_8->rotate);
        if (VAR_8->stereo3d > 0) {
            FUNC_3(VAR_6, VAR_7, " stereo=%s",
                            FUNC_0(VAR_8->stereo3d, "?"));
        }
    } else {
        FUNC_4(VAR_6, VAR_7, "???");
    }
    return VAR_6;
}
