
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_rendertarget_info {TYPE_1__* resource; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct fbo_entry {int flags; int key; int id; } ;
struct TYPE_2__ {int format_flags; } ;
typedef int GLenum ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wined3d_context*,int ,int ) ;
 int FUNC_1 (struct wined3d_gl_info const*,int ) ;
 int FUNC_2 (struct wined3d_context*,int *,struct wined3d_rendertarget_info const*,struct wined3d_rendertarget_info const*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_4, GLenum VAR_5,
        const struct wined3d_rendertarget_info *VAR_6, const struct wined3d_rendertarget_info *VAR_7,
        DWORD VAR_8, DWORD VAR_9, struct fbo_entry *VAR_10)
{
    const struct wined3d_gl_info *VAR_11 = VAR_4->gl_info;

    FUNC_0(VAR_4, VAR_5, VAR_10->id);
    FUNC_1(VAR_11, VAR_5);

    FUNC_2(VAR_4, &VAR_10->key, VAR_6, VAR_7, VAR_8, VAR_9);
    VAR_10->flags = 0;
    if (VAR_7->resource)
    {
        if (VAR_7->resource->format_flags & VAR_0)
            VAR_10->flags |= VAR_2;
        if (VAR_7->resource->format_flags & VAR_1)
            VAR_10->flags |= VAR_3;
    }
}
