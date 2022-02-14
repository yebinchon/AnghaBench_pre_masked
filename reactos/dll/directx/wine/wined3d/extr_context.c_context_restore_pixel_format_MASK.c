
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {int * restore_pf_win; scalar_t__ restore_pf; struct wined3d_gl_info* gl_info; } ;
typedef scalar_t__ HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_6(struct wined3d_context *VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_4->gl_info;
    BOOL VAR_6 = VAR_2;

    if (VAR_4->restore_pf && FUNC_3(VAR_4->restore_pf_win))
    {
        if (VAR_4->gl_info->supported[VAR_3])
        {
            HDC VAR_7 = FUNC_2(VAR_4->restore_pf_win, 0, VAR_1 | VAR_0);
            if (VAR_7)
            {
                if (!(VAR_6 = FUNC_1(FUNC_5(VAR_7, VAR_4->restore_pf))))
                {
                    FUNC_0("wglSetPixelFormatWINE failed to restore pixel format %d on window %p.\n",
                            VAR_4->restore_pf, VAR_4->restore_pf_win);
                }
                FUNC_4(VAR_4->restore_pf_win, VAR_7);
            }
        }
        else
        {
            FUNC_0("can't restore pixel format %d on window %p\n", VAR_4->restore_pf, VAR_4->restore_pf_win);
        }
    }

    VAR_4->restore_pf = 0;
    VAR_4->restore_pf_win = ((void*)0);
    return VAR_6;
}
