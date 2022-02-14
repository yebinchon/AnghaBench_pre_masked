
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_resource {int device; scalar_t__ bind_count; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {scalar_t__ transform_feedback_active; struct wined3d_gl_info* gl_info; } ;
struct wined3d_buffer {int bind_flags; int flags; int * fence; scalar_t__ buffer_object; struct wined3d_resource resource; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,struct wined3d_buffer*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_context*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,scalar_t__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct wined3d_buffer *VAR_14, struct wined3d_context *VAR_15)
{
    const struct wined3d_gl_info *VAR_16 = VAR_15->gl_info;
    struct wined3d_resource *VAR_17 = &VAR_14->resource;

    if (!VAR_14->buffer_object)
        return;






    if (VAR_17->bind_count)
    {
        if (VAR_14->bind_flags & VAR_6)
            FUNC_5(VAR_17->device, VAR_1);
        if (VAR_14->bind_flags & VAR_4)
            FUNC_5(VAR_17->device, VAR_0);
        if (VAR_14->bind_flags & VAR_3)
        {
            FUNC_5(VAR_17->device, FUNC_1(VAR_13));
            FUNC_5(VAR_17->device, FUNC_1(VAR_11));
            FUNC_5(VAR_17->device, FUNC_1(VAR_9));
            FUNC_5(VAR_17->device, FUNC_1(VAR_10));
            FUNC_5(VAR_17->device, FUNC_1(VAR_12));
            FUNC_5(VAR_17->device, FUNC_1(VAR_8));
        }
        if (VAR_14->bind_flags & VAR_5)
        {
            FUNC_5(VAR_17->device, VAR_2);
            if (VAR_15->transform_feedback_active)
            {



                FUNC_2("Deleting buffer object for buffer %p, disabling transform feedback.\n", VAR_14);
                FUNC_4(VAR_15);
            }
        }
    }

    FUNC_0(FUNC_6(1, &VAR_14->buffer_object));
    FUNC_3("glDeleteBuffers");
    VAR_14->buffer_object = 0;

    if (VAR_14->fence)
    {
        FUNC_7(VAR_14->fence);
        VAR_14->fence = ((void*)0);
    }
    VAR_14->flags &= ~VAR_7;
}
