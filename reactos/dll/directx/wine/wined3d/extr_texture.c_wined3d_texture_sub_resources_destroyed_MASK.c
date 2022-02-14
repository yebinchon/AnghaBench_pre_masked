
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int * parent; TYPE_1__* parent_ops; } ;
struct wined3d_texture {unsigned int level_count; unsigned int layer_count; struct wined3d_texture_sub_resource* sub_resources; } ;
struct TYPE_2__ {int (* wined3d_object_destroyed ) (int *) ;} ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_texture *VAR_0)
{
    unsigned int VAR_1 = VAR_0->level_count * VAR_0->layer_count;
    struct wined3d_texture_sub_resource *VAR_2;
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
    {
        VAR_2 = &VAR_0->sub_resources[VAR_3];
        if (VAR_2->parent)
        {
            FUNC_0("sub-resource %u.\n", VAR_3);
            VAR_2->parent_ops->wined3d_object_destroyed(VAR_2->parent);
            VAR_2->parent = ((void*)0);
        }
    }
}
