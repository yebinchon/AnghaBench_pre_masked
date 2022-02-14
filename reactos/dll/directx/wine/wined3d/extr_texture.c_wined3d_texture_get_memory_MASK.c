
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int offset; TYPE_1__* buffer; int buffer_object; } ;
struct TYPE_4__ {int * heap_memory; } ;
struct wined3d_texture {TYPE_2__ resource; int * user_memory; struct wined3d_texture_sub_resource* sub_resources; } ;
struct wined3d_bo_address {int buffer_object; int * addr; } ;
struct TYPE_3__ {int name; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,struct wined3d_texture*,unsigned int,struct wined3d_bo_address*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

void FUNC_3(struct wined3d_texture *VAR_3, unsigned int VAR_4,
        struct wined3d_bo_address *VAR_5, DWORD VAR_6)
{
    struct wined3d_texture_sub_resource *VAR_7;

    FUNC_1("texture %p, sub_resource_idx %u, data %p, locations %s.\n",
            VAR_3, VAR_4, VAR_5, FUNC_2(VAR_6));

    VAR_7 = &VAR_3->sub_resources[VAR_4];
    if (VAR_6 & VAR_0)
    {
        VAR_5->addr = ((void*)0);

        VAR_5->buffer_object = VAR_7->buffer_object;



        return;
    }
    if (VAR_6 & VAR_2)
    {
        VAR_5->addr = VAR_3->user_memory;
        VAR_5->buffer_object = 0;
        return;
    }
    if (VAR_6 & VAR_1)
    {
        VAR_5->addr = VAR_3->resource.heap_memory;
        VAR_5->addr += VAR_7->offset;
        VAR_5->buffer_object = 0;
        return;
    }

    FUNC_0("Unexpected locations %s.\n", FUNC_2(VAR_6));
    VAR_5->addr = ((void*)0);
    VAR_5->buffer_object = 0;
}
