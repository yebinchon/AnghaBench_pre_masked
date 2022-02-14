
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_rendertarget_info {TYPE_1__* resource; } ;
struct TYPE_4__ {int (* glGenFramebuffers ) (int,int *) ;} ;
struct wined3d_gl_info {TYPE_2__ fbo_ops; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct fbo_entry {int id; int rt_mask; int flags; int key; } ;
struct TYPE_3__ {int format_flags; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context const*,int *,struct wined3d_rendertarget_info const*,struct wined3d_rendertarget_info const*,int ,int ) ;
 int FUNC_3 (int ) ;
 struct fbo_entry* FUNC_4 (int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static struct fbo_entry *FUNC_6(const struct wined3d_context *VAR_5,
        const struct wined3d_rendertarget_info *VAR_6, const struct wined3d_rendertarget_info *VAR_7,
        DWORD VAR_8, DWORD VAR_9)
{
    const struct wined3d_gl_info *VAR_10 = VAR_5->gl_info;
    struct fbo_entry *VAR_11;

    VAR_11 = FUNC_4(sizeof(*VAR_11));
    FUNC_2(VAR_5, &VAR_11->key, VAR_6, VAR_7, VAR_8, VAR_9);
    VAR_11->flags = 0;
    if (VAR_7->resource)
    {
        if (VAR_7->resource->format_flags & VAR_1)
            VAR_11->flags |= VAR_3;
        if (VAR_7->resource->format_flags & VAR_2)
            VAR_11->flags |= VAR_4;
    }
    VAR_11->rt_mask = FUNC_3(VAR_0);
    VAR_10->fbo_ops.glGenFramebuffers(1, &VAR_11->id);
    FUNC_1("glGenFramebuffers()");
    FUNC_0("Created FBO %u.\n", VAR_11->id);

    return VAR_11;
}
