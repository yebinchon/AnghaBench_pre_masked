
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mp_vdpau_mixer_frame ;
struct mp_image {scalar_t__ imgfmt; scalar_t__* planes; } ;


 scalar_t__ VAR_0 ;

struct mp_vdpau_mixer_frame *FUNC_0(struct mp_image *VAR_1)
{
    if (VAR_1->imgfmt != VAR_0)
        return ((void*)0);
    return (void *)VAR_1->planes[2];
}
