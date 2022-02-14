
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture_sub_resource {scalar_t__ locations; } ;
struct wined3d_texture {int sysmem_count; struct wined3d_texture_sub_resource* sub_resources; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,struct wined3d_texture*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wined3d_texture*) ;

void FUNC_3(struct wined3d_texture *VAR_1,
        unsigned int VAR_2, DWORD VAR_3)
{
    struct wined3d_texture_sub_resource *VAR_4;
    DWORD VAR_5;

    FUNC_0("texture %p, sub_resource_idx %u, location %s.\n",
            VAR_1, VAR_2, FUNC_1(VAR_3));

    VAR_4 = &VAR_1->sub_resources[VAR_2];
    VAR_5 = VAR_4->locations;
    VAR_4->locations |= VAR_3;
    if (VAR_5 == VAR_0 && VAR_3 != VAR_0
            && !--VAR_1->sysmem_count)
        FUNC_2(VAR_1);

    FUNC_0("New locations flags are %s.\n", FUNC_1(VAR_4->locations));
}
