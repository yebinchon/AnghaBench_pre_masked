
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_caps_gl_ctx {int * restore_gl_ctx; int * restore_dc; int wnd; int dc; int gl_ctx; scalar_t__ test_vbo; scalar_t__ test_program_id; struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,scalar_t__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(const struct wined3d_caps_gl_ctx *VAR_0)
{
    const struct wined3d_gl_info *VAR_1 = VAR_0->gl_info;

    FUNC_4("Destroying caps GL context.\n");




    if (VAR_0->test_program_id || VAR_0->test_vbo)
    {
        FUNC_2(FUNC_6(VAR_0->test_program_id));
        FUNC_2(FUNC_5(1, &VAR_0->test_vbo));
    }

    if (!FUNC_8(((void*)0), ((void*)0)))
        FUNC_1("Failed to disable caps GL context.\n");

    if (!FUNC_7(VAR_0->gl_ctx))
    {
        DWORD VAR_2 = FUNC_3();
        FUNC_1("wglDeleteContext(%p) failed, last error %#x.\n", VAR_0->gl_ctx, VAR_2);
    }

    FUNC_9(VAR_0->wnd, VAR_0->dc);
    FUNC_0(VAR_0->wnd);

    if (VAR_0->restore_gl_ctx && !FUNC_8(VAR_0->restore_dc, VAR_0->restore_gl_ctx))
        FUNC_1("Failed to restore previous GL context.\n");
}
