
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_gl_info {scalar_t__* supported; } ;
struct TYPE_5__ {int id; int sync; } ;
struct wined3d_fence {TYPE_2__ object; TYPE_3__* context; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef enum wined3d_fence_result { ____Placeholder_wined3d_fence_result } wined3d_fence_result ;
struct TYPE_6__ {TYPE_1__* gl_info; } ;
struct TYPE_4__ {int * supported; } ;
typedef int GLenum ;
typedef int DWORD ;
typedef void* BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;


 void* FUNC_1 (int ) ;
 int VAR_2 ;


 size_t VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 struct wined3d_context* FUNC_5 (struct wined3d_device const*,int *,int ) ;
 struct wined3d_context* FUNC_6 (struct wined3d_device const*,TYPE_3__*) ;
 int FUNC_7 (struct wined3d_context*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static enum wined3d_fence_result FUNC_11(const struct wined3d_fence *VAR_10,
        const struct wined3d_device *VAR_11, DWORD VAR_12)
{
    const struct wined3d_gl_info *VAR_13;
    struct wined3d_context *VAR_14;
    enum wined3d_fence_result VAR_15;
    BOOL VAR_16;

    FUNC_2("fence %p, device %p, flags %#x.\n", VAR_10, VAR_11, VAR_12);

    if (!VAR_10->context)
    {
        FUNC_2("Fence not issued.\n");
        return VAR_6;
    }

    if (!(VAR_14 = FUNC_6(VAR_11, VAR_10->context)))
    {
        if (!VAR_10->context->gl_info->supported[VAR_1])
        {
            FUNC_3("Fence tested from wrong thread.\n");
            return VAR_9;
        }
        VAR_14 = FUNC_5(VAR_11, ((void*)0), 0);
    }
    VAR_13 = VAR_14->gl_info;

    if (VAR_13->supported[VAR_1])
    {
        GLenum VAR_17 = FUNC_1(FUNC_8(VAR_10->object.sync,
                (VAR_12 & VAR_4) ? VAR_2 : 0, 0));
        FUNC_4("glClientWaitSync");

        switch (VAR_17)
        {
            case 131:
            case 130:
                VAR_15 = VAR_7;
                break;

            case 129:
                VAR_15 = VAR_8;
                break;

            case 128:
            default:
                FUNC_0("glClientWaitSync returned %#x.\n", VAR_17);
                VAR_15 = VAR_5;
        }
    }
    else if (VAR_13->supported[VAR_0])
    {
        VAR_16 = FUNC_1(FUNC_9(VAR_10->object.id));
        FUNC_4("glTestFenceAPPLE");
        if (VAR_16)
            VAR_15 = VAR_7;
        else
            VAR_15 = VAR_8;
    }
    else if (VAR_13->supported[VAR_3])
    {
        VAR_16 = FUNC_1(FUNC_10(VAR_10->object.id));
        FUNC_4("glTestFenceNV");
        if (VAR_16)
            VAR_15 = VAR_7;
        else
            VAR_15 = VAR_8;
    }
    else
    {
        FUNC_0("Fence created despite lack of GL support.\n");
        VAR_15 = VAR_5;
    }

    FUNC_7(VAR_14);
    return VAR_15;
}
