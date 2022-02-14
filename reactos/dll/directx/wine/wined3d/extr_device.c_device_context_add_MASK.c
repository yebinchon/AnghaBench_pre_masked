
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_device {int context_count; struct wined3d_context** contexts; } ;
struct wined3d_context {int dummy; } ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct wined3d_context*) ;
 int VAR_1 ;
 struct wined3d_context** FUNC_2 (struct wined3d_context**,int) ;

BOOL FUNC_3(struct wined3d_device *VAR_2, struct wined3d_context *VAR_3)
{
    struct wined3d_context **VAR_4;

    FUNC_1("Adding context %p.\n", VAR_3);

    if (!(VAR_4 = FUNC_2(VAR_2->contexts, sizeof(*VAR_4) * (VAR_2->context_count + 1))))
    {
        FUNC_0("Failed to grow the context array.\n");
        return VAR_0;
    }

    VAR_4[VAR_2->context_count++] = VAR_3;
    VAR_2->contexts = VAR_4;
    return VAR_1;
}
