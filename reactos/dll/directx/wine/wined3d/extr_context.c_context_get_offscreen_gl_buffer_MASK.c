
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {int aux_buffers; } ;
struct TYPE_2__ {int offscreen_rendering_mode; } ;
typedef int GLenum ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 TYPE_1__ VAR_3 ;

GLenum FUNC_1(const struct wined3d_context *VAR_4)
{
    switch (VAR_3.offscreen_rendering_mode)
    {
        case 128:
            return VAR_2;

        case 129:
            return VAR_4->aux_buffers > 0 ? VAR_0 : VAR_1;

        default:
            FUNC_0("Unhandled offscreen rendering mode %#x.\n", VAR_3.offscreen_rendering_mode);
            return VAR_1;
    }
}
