
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_gl_info {scalar_t__* supported; } ;
struct TYPE_3__ {int id; int sync; } ;
struct wined3d_fence {TYPE_1__ object; TYPE_2__* context; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef enum wined3d_fence_result { ____Placeholder_wined3d_fence_result } wined3d_fence_result ;
struct TYPE_4__ {struct wined3d_gl_info* gl_info; } ;
typedef int GLuint64 ;
typedef int GLenum ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;


 int FUNC_1 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 struct wined3d_context* FUNC_5 (struct wined3d_device const*,int *,int ) ;
 struct wined3d_context* FUNC_6 (struct wined3d_device const*,TYPE_2__*) ;
 int FUNC_7 (struct wined3d_context*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

enum wined3d_fence_result FUNC_11(const struct wined3d_fence *VAR_8,
        const struct wined3d_device *VAR_9)
{
    const struct wined3d_gl_info *VAR_10;
    struct wined3d_context *VAR_11;
    enum wined3d_fence_result VAR_12;

    FUNC_2("fence %p, device %p.\n", VAR_8, VAR_9);

    if (!VAR_8->context)
    {
        FUNC_2("Fence not issued.\n");
        return VAR_5;
    }
    VAR_10 = VAR_8->context->gl_info;

    if (!(VAR_11 = FUNC_6(VAR_9, VAR_8->context)))
    {



        if (!VAR_10->supported[VAR_1])
        {
            FUNC_3("Fence finished from wrong thread.\n");
            return VAR_7;
        }
        VAR_11 = FUNC_5(VAR_9, ((void*)0), 0);
    }
    VAR_10 = VAR_11->gl_info;

    if (VAR_10->supported[VAR_1])
    {




        GLenum VAR_13 = FUNC_1(FUNC_8(VAR_8->object.sync,
                VAR_2, ~(GLuint64)0 >> 1));
        FUNC_4("glClientWaitSync");

        switch (VAR_13)
        {
            case 129:
            case 128:
                VAR_12 = VAR_6;
                break;


            default:
                FUNC_0("glClientWaitSync returned %#x.\n", VAR_13);
                VAR_12 = VAR_4;
        }
    }
    else if (VAR_11->gl_info->supported[VAR_0])
    {
        FUNC_1(FUNC_9(VAR_8->object.id));
        FUNC_4("glFinishFenceAPPLE");
        VAR_12 = VAR_6;
    }
    else if (VAR_11->gl_info->supported[VAR_3])
    {
        FUNC_1(FUNC_10(VAR_8->object.id));
        FUNC_4("glFinishFenceNV");
        VAR_12 = VAR_6;
    }
    else
    {
        FUNC_0("Fence created without GL support.\n");
        VAR_12 = VAR_4;
    }

    FUNC_7(VAR_11);
    return VAR_12;
}
