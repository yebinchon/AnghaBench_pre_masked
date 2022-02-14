
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_gl_info {scalar_t__* supported; } ;
struct TYPE_5__ {int id; scalar_t__ sync; } ;
struct wined3d_fence {TYPE_2__ object; TYPE_3__* context; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_6__ {TYPE_1__* gl_info; } ;
struct TYPE_4__ {int * supported; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (char*) ;
 struct wined3d_context* FUNC_2 (struct wined3d_device const*,int *,int ) ;
 int FUNC_3 (struct wined3d_context*,struct wined3d_fence*) ;
 int FUNC_4 (struct wined3d_fence*) ;
 struct wined3d_context* FUNC_5 (struct wined3d_device const*,TYPE_3__*) ;
 int FUNC_6 (struct wined3d_context*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(struct wined3d_fence *VAR_5, const struct wined3d_device *VAR_6)
{
    struct wined3d_context *VAR_7 = ((void*)0);
    const struct wined3d_gl_info *VAR_8;

    if (VAR_5->context && !(VAR_7 = FUNC_5(VAR_6, VAR_5->context))
            && !VAR_5->context->gl_info->supported[VAR_1])
        FUNC_4(VAR_5);
    if (!VAR_7)
        VAR_7 = FUNC_2(VAR_6, ((void*)0), 0);
    VAR_8 = VAR_7->gl_info;
    if (!VAR_5->context)
        FUNC_3(VAR_7, VAR_5);

    if (VAR_8->supported[VAR_1])
    {
        if (VAR_5->object.sync)
            FUNC_0(FUNC_7(VAR_5->object.sync));
        FUNC_1("glDeleteSync");
        VAR_5->object.sync = FUNC_0(FUNC_8(VAR_3, 0));
        FUNC_1("glFenceSync");
    }
    else if (VAR_8->supported[VAR_0])
    {
        FUNC_0(FUNC_9(VAR_5->object.id));
        FUNC_1("glSetFenceAPPLE");
    }
    else if (VAR_8->supported[VAR_4])
    {
        FUNC_0(FUNC_10(VAR_5->object.id, VAR_2));
        FUNC_1("glSetFenceNV");
    }

    FUNC_6(VAR_7);
}
