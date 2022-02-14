
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int selected_gl_version; int (* p_wglCreateContextAttribsARB ) (int ,int ,int*) ;} ;
typedef int HGLRC ;
typedef int HDC ;
typedef int GLint ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct wined3d_gl_info const*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int*) ;

HGLRC FUNC_6(const struct wined3d_gl_info *VAR_5, HDC VAR_6, HGLRC VAR_7)
{
    HGLRC VAR_8;
    unsigned int VAR_9 = 0;
    GLint VAR_10[7], VAR_11 = 0;

    if (FUNC_3(VAR_5))
        VAR_11 = VAR_0;
    VAR_10[VAR_9++] = VAR_3;
    VAR_10[VAR_9++] = VAR_5->selected_gl_version >> 16;
    VAR_10[VAR_9++] = VAR_4;
    VAR_10[VAR_9++] = VAR_5->selected_gl_version & 0xffff;
    if (VAR_5->selected_gl_version >= FUNC_1(3, 2))
        VAR_11 |= VAR_2;
    if (VAR_11)
    {
        VAR_10[VAR_9++] = VAR_1;
        VAR_10[VAR_9++] = VAR_11;
    }
    VAR_10[VAR_9] = 0;

    if (!(VAR_8 = VAR_5->p_wglCreateContextAttribsARB(VAR_6, VAR_7, VAR_10)))
    {
        if (VAR_11 & VAR_2)
        {
            VAR_10[VAR_9 - 1] &= ~VAR_2;
            if (!(VAR_8 = VAR_5->p_wglCreateContextAttribsARB(VAR_6, VAR_7, VAR_10)))
                FUNC_2("Failed to create a WGL context with wglCreateContextAttribsARB, last error %#x.\n",
                        FUNC_0());
        }
    }
    return VAR_8;
}
