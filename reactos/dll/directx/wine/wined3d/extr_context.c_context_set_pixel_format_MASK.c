
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* p_wglGetPixelFormat ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ wgl; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_2__ gl_ops; } ;
struct wined3d_context {int pixel_format; int restore_pf; scalar_t__ hdc_has_format; int * restore_pf_win; int * win_handle; int hdc; scalar_t__ hdc_is_private; struct wined3d_gl_info* gl_info; } ;
typedef int * HWND ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int,int ,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int,int ,int ) ;
 size_t VAR_2 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct wined3d_context*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static BOOL FUNC_9(struct wined3d_context *VAR_3)
{
    const struct wined3d_gl_info *VAR_4 = VAR_3->gl_info;
    BOOL VAR_5 = VAR_3->hdc_is_private;
    int VAR_6 = VAR_3->pixel_format;
    HDC VAR_7 = VAR_3->hdc;
    int VAR_8;

    if (VAR_5 && VAR_3->hdc_has_format)
        return VAR_1;

    if (!VAR_5 && FUNC_5(VAR_7) != VAR_3->win_handle)
        return VAR_0;

    VAR_8 = VAR_4->gl_ops.wgl.p_wglGetPixelFormat(VAR_7);
    if (VAR_8 == VAR_6) goto success;

    if (!VAR_8)
    {
        if (!FUNC_3(VAR_7, VAR_6, ((void*)0)))
        {

            FUNC_4("Failed to set pixel format %d on device context %p, last error %#x.\n",
                    VAR_6, VAR_7, FUNC_2());
            return VAR_0;
        }

        VAR_3->restore_pf = 0;
        VAR_3->restore_pf_win = VAR_5 ? ((void*)0) : FUNC_5(VAR_7);
        goto success;
    }





    if (VAR_4->supported[VAR_2])
    {
        HWND VAR_9;

        if (!FUNC_1(FUNC_8(VAR_7, VAR_6)))
        {
            FUNC_0("wglSetPixelFormatWINE failed to set pixel format %d on device context %p.\n",
                    VAR_6, VAR_7);
            return VAR_0;
        }

        VAR_9 = VAR_5 ? ((void*)0) : FUNC_5(VAR_7);
        if (VAR_9 != VAR_3->restore_pf_win)
        {
            FUNC_6(VAR_3);

            VAR_3->restore_pf = VAR_5 ? 0 : VAR_8;
            VAR_3->restore_pf_win = VAR_9;
        }

        goto success;
    }





    FUNC_0("Unable to set pixel format %d on device context %p. Already using format %d.\n",
            VAR_6, VAR_7, VAR_8);
    return VAR_1;

success:
    if (VAR_5)
        VAR_3->hdc_has_format = VAR_1;
    return VAR_1;
}
