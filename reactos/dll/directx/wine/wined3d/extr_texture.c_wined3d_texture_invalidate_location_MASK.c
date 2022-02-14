
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture_sub_resource {int locations; } ;
struct wined3d_texture {int sysmem_count; struct wined3d_texture_sub_resource* sub_resources; } ;
typedef int DWORD ;


 int FUNC_0 (char*,unsigned int,struct wined3d_texture*) ;
 int FUNC_1 (char*,struct wined3d_texture*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct wined3d_texture*) ;

void FUNC_4(struct wined3d_texture *VAR_3,
        unsigned int VAR_4, DWORD VAR_5)
{
    struct wined3d_texture_sub_resource *VAR_6;
    DWORD VAR_7;

    FUNC_1("texture %p, sub_resource_idx %u, location %s.\n",
            VAR_3, VAR_4, FUNC_2(VAR_5));

    if (VAR_5 & (VAR_1 | VAR_2))
        FUNC_3(VAR_3);

    VAR_6 = &VAR_3->sub_resources[VAR_4];
    VAR_7 = VAR_6->locations;
    VAR_6->locations &= ~VAR_5;
    if (VAR_7 != VAR_0 && VAR_6->locations == VAR_0)
        ++VAR_3->sysmem_count;

    FUNC_1("New locations flags are %s.\n", FUNC_2(VAR_6->locations));

    if (!VAR_6->locations)
        FUNC_0("Sub-resource %u of texture %p does not have any up to date location.\n",
                VAR_4, VAR_3);
}
