
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vf_format_opts {int gamma; double sig_peak; scalar_t__ rotate; scalar_t__ dw; scalar_t__ dh; scalar_t__ dar; scalar_t__ stereo_in; scalar_t__ chroma_location; scalar_t__ light; scalar_t__ primaries; scalar_t__ colorlevels; scalar_t__ colormatrix; } ;
struct TYPE_4__ {int gamma; double sig_peak; scalar_t__ light; scalar_t__ primaries; scalar_t__ levels; scalar_t__ space; } ;
struct mp_image_params {scalar_t__ rotate; scalar_t__ stereo3d; scalar_t__ chroma_location; TYPE_1__ color; } ;
typedef enum mp_csp_trc { ____Placeholder_mp_csp_trc } mp_csp_trc ;
struct TYPE_5__ {scalar_t__ num; scalar_t__ den; } ;
typedef TYPE_2__ AVRational ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct mp_image_params*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct mp_image_params*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vf_format_opts *VAR_2, struct mp_image_params *VAR_3)
{
    if (VAR_2->colormatrix)
        VAR_3->color.space = VAR_2->colormatrix;
    if (VAR_2->colorlevels)
        VAR_3->color.levels = VAR_2->colorlevels;
    if (VAR_2->primaries)
        VAR_3->color.primaries = VAR_2->primaries;
    if (VAR_2->gamma) {
        enum mp_csp_trc VAR_4 = VAR_2->gamma;
        VAR_3->color.gamma = VAR_2->gamma;
        if (VAR_4 != VAR_3->color.gamma) {



            VAR_3->color.sig_peak = 0.0;
            VAR_3->color.light = VAR_1;
        }
    }
    if (VAR_2->sig_peak)
        VAR_3->color.sig_peak = VAR_2->sig_peak;
    if (VAR_2->light)
        VAR_3->color.light = VAR_2->light;
    if (VAR_2->chroma_location)
        VAR_3->chroma_location = VAR_2->chroma_location;
    if (VAR_2->stereo_in)
        VAR_3->stereo3d = VAR_2->stereo_in;
    if (VAR_2->rotate >= 0)
        VAR_3->rotate = VAR_2->rotate;

    AVRational VAR_5;
    FUNC_1(VAR_3, &VAR_5.num, &VAR_5.den);
    if (VAR_2->dw > 0)
        VAR_5.num = VAR_2->dw;
    if (VAR_2->dh > 0)
        VAR_5.den = VAR_2->dh;
    if (VAR_2->dar > 0)
        VAR_5 = FUNC_0(VAR_2->dar, VAR_0);
    FUNC_2(VAR_3, VAR_5.num, VAR_5.den);
}
