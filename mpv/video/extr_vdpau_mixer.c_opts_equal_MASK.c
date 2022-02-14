
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vdpau_mixer_opts {scalar_t__ deint; scalar_t__ chroma_deint; scalar_t__ pullup; scalar_t__ hqscaling; scalar_t__ sharpen; scalar_t__ denoise; } ;



__attribute__((used)) static bool FUNC_0(const struct mp_vdpau_mixer_opts *VAR_0,
                       const struct mp_vdpau_mixer_opts *VAR_1)
{
    return VAR_0->deint == VAR_1->deint && VAR_0->chroma_deint == VAR_1->chroma_deint &&
           VAR_0->pullup == VAR_1->pullup && VAR_0->hqscaling == VAR_1->hqscaling &&
           VAR_0->sharpen == VAR_1->sharpen && VAR_0->denoise == VAR_1->denoise;
}
