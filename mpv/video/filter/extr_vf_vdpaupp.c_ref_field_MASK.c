
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int queue; } ;
struct mp_vdpau_mixer_frame {int dummy; } ;
struct mp_image {int * planes; } ;
typedef uintptr_t VdpVideoSurface ;


 uintptr_t VAR_0 ;
 struct mp_image* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mp_vdpau_mixer_frame*,struct mp_image*) ;

__attribute__((used)) static VdpVideoSurface FUNC_3(struct priv *VAR_1,
                                 struct mp_vdpau_mixer_frame *VAR_2, int VAR_3)
{
    struct mp_image *VAR_4 = FUNC_0(FUNC_1(VAR_1->queue, VAR_3));
    if (!VAR_4)
        return VAR_0;
    FUNC_2(VAR_2, VAR_4);
    return (uintptr_t)VAR_4->planes[3];
}
