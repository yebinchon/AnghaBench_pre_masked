
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_gl_info {int * formats; } ;
struct wined3d_caps_gl_ctx {int dummy; } ;
struct TYPE_2__ {int vendor; } ;
struct wined3d_adapter {int d3d_info; TYPE_1__ driver_info; struct wined3d_gl_info gl_info; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wined3d_adapter*,struct wined3d_gl_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wined3d_gl_info*) ;
 int FUNC_3 (struct wined3d_gl_info*) ;
 int FUNC_4 (struct wined3d_caps_gl_ctx*,int *) ;
 int FUNC_5 (struct wined3d_caps_gl_ctx*) ;
 int FUNC_6 (struct wined3d_gl_info*,int ) ;
 int FUNC_7 (struct wined3d_gl_info*) ;
 int FUNC_8 (struct wined3d_adapter*,struct wined3d_gl_info*) ;
 int FUNC_9 (struct wined3d_gl_info*) ;
 int FUNC_10 (struct wined3d_gl_info*) ;

BOOL FUNC_11(struct wined3d_adapter *VAR_2, struct wined3d_caps_gl_ctx *VAR_3)
{
    struct wined3d_gl_info *VAR_4 = &VAR_2->gl_info;

    if (!FUNC_2(VAR_4)) return VAR_0;
    if (!FUNC_3(VAR_4)) goto fail;

    if (!VAR_3)
        return VAR_1;

    if (!FUNC_8(VAR_2, VAR_4)) goto fail;
    if (!FUNC_9(VAR_4)) goto fail;

    FUNC_0(VAR_2, VAR_4);
    FUNC_5(VAR_3);
    FUNC_6(VAR_4, VAR_2->driver_info.vendor);
    if (!FUNC_10(VAR_4)) goto fail;
    FUNC_7(VAR_4);
    FUNC_4(VAR_3, &VAR_2->d3d_info);

    return VAR_1;

fail:
    FUNC_1(VAR_4->formats);
    VAR_4->formats = ((void*)0);
    return VAR_0;
}
