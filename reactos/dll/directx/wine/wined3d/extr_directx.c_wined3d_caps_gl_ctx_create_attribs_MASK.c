
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int * p_wglCreateContextAttribsARB; } ;
struct wined3d_caps_gl_ctx {int gl_ctx; int dc; } ;
typedef int HGLRC ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct wined3d_gl_info*,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_6(struct wined3d_caps_gl_ctx *VAR_2,
        struct wined3d_gl_info *VAR_3)
{
    HGLRC VAR_4;

    if (!(VAR_3->p_wglCreateContextAttribsARB = (void *)FUNC_4("wglCreateContextAttribsARB")))
        return VAR_1;

    if (!(VAR_4 = FUNC_2(VAR_3, VAR_2->dc, ((void*)0))))
    {
        VAR_3->p_wglCreateContextAttribsARB = ((void*)0);
        return VAR_0;
    }

    if (!FUNC_5(VAR_2->dc, VAR_4))
    {
        FUNC_0("Failed to make new context current, last error %#x.\n", FUNC_1());
        if (!FUNC_3(VAR_4))
            FUNC_0("Failed to delete new context, last error %#x.\n", FUNC_1());
        VAR_3->p_wglCreateContextAttribsARB = ((void*)0);
        return VAR_1;
    }

    if (!FUNC_3(VAR_2->gl_ctx))
        FUNC_0("Failed to delete old context, last error %#x.\n", FUNC_1());
    VAR_2->gl_ctx = VAR_4;

    return VAR_1;
}
