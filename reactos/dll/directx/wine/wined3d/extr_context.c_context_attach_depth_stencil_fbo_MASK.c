
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_fbo_resource {int object; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLenum ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct wined3d_gl_info const*,int ,int,int ) ;
 int FUNC_2 (struct wined3d_context*,int ,int ,struct wined3d_fbo_resource const*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_4,
        GLenum VAR_5, const struct wined3d_fbo_resource *VAR_6, BOOL VAR_7,
        DWORD VAR_8)
{
    const struct wined3d_gl_info *VAR_9 = VAR_4->gl_info;

    if (VAR_6->object)
    {
        FUNC_0("Attach depth stencil %u.\n", VAR_6->object);

        if (VAR_7)
        {
            FUNC_1(VAR_9, VAR_5,
                    VAR_8, VAR_6->object);
        }
        else
        {
            if (VAR_8 & VAR_2)
                FUNC_2(VAR_4, VAR_5, VAR_0, VAR_6);

            if (VAR_8 & VAR_3)
                FUNC_2(VAR_4, VAR_5, VAR_1, VAR_6);
        }

        if (!(VAR_8 & VAR_2))
            FUNC_2(VAR_4, VAR_5, VAR_0, ((void*)0));

        if (!(VAR_8 & VAR_3))
            FUNC_2(VAR_4, VAR_5, VAR_1, ((void*)0));
    }
    else
    {
        FUNC_0("Attach depth stencil 0.\n");

        FUNC_2(VAR_4, VAR_5, VAR_0, ((void*)0));
        FUNC_2(VAR_4, VAR_5, VAR_1, ((void*)0));
    }
}
