
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_device {size_t context_count; struct wined3d_context** contexts; } ;
struct wined3d_context {int dummy; } ;
typedef size_t UINT ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct wined3d_context*) ;
 int VAR_1 ;
 int FUNC_2 (struct wined3d_context**) ;
 struct wined3d_context** FUNC_3 (struct wined3d_context**,int) ;
 int FUNC_4 (struct wined3d_context**,struct wined3d_context**,size_t) ;

void FUNC_5(struct wined3d_device *VAR_2, struct wined3d_context *VAR_3)
{
    struct wined3d_context **VAR_4;
    BOOL VAR_5 = VAR_0;
    UINT VAR_6;

    FUNC_1("Removing context %p.\n", VAR_3);

    for (VAR_6 = 0; VAR_6 < VAR_2->context_count; ++VAR_6)
    {
        if (VAR_2->contexts[VAR_6] == VAR_3)
        {
            VAR_5 = VAR_1;
            break;
        }
    }

    if (!VAR_5)
    {
        FUNC_0("Context %p doesn't exist in context array.\n", VAR_3);
        return;
    }

    if (!--VAR_2->context_count)
    {
        FUNC_2(VAR_2->contexts);
        VAR_2->contexts = ((void*)0);
        return;
    }

    FUNC_4(&VAR_2->contexts[VAR_6], &VAR_2->contexts[VAR_6 + 1], (VAR_2->context_count - VAR_6) * sizeof(*VAR_2->contexts));
    if (!(VAR_4 = FUNC_3(VAR_2->contexts, VAR_2->context_count * sizeof(*VAR_2->contexts))))
    {
        FUNC_0("Failed to shrink context array. Oh well.\n");
        return;
    }

    VAR_2->contexts = VAR_4;
}
