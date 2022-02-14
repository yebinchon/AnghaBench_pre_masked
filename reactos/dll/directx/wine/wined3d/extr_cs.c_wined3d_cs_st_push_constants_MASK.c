
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_device {unsigned int context_count; TYPE_2__** contexts; TYPE_1__* shader_backend; } ;
struct wined3d_cs {int state; struct wined3d_device* device; } ;
typedef enum wined3d_push_constants { ____Placeholder_wined3d_push_constants } wined3d_push_constants ;
struct TYPE_6__ {unsigned int offset; unsigned int size; int mask; } ;
struct TYPE_5__ {int constant_update_mask; } ;
struct TYPE_4__ {int (* shader_update_float_pixel_constants ) (struct wined3d_device*,unsigned int,unsigned int) ;int (* shader_update_float_vertex_constants ) (struct wined3d_device*,unsigned int,unsigned int) ;} ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void const*,unsigned int) ;
 int FUNC_1 (struct wined3d_device*,unsigned int,unsigned int) ;
 int FUNC_2 (struct wined3d_device*,unsigned int,unsigned int) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_3, enum wined3d_push_constants VAR_4,
        unsigned int VAR_5, unsigned int VAR_6, const void *VAR_7)
{
    struct wined3d_device *VAR_8 = VAR_3->device;
    unsigned int VAR_9;
    unsigned int VAR_10;
    size_t VAR_11;

    if (VAR_4 == VAR_1)
        VAR_8->shader_backend->shader_update_float_vertex_constants(VAR_8, VAR_5, VAR_6);
    else if (VAR_4 == VAR_0)
        VAR_8->shader_backend->shader_update_float_pixel_constants(VAR_8, VAR_5, VAR_6);

    VAR_11 = VAR_2[VAR_4].offset + VAR_5 * VAR_2[VAR_4].size;
    FUNC_0((BYTE *)&VAR_3->state + VAR_11, VAR_7, VAR_6 * VAR_2[VAR_4].size);
    for (VAR_10 = 0, VAR_9 = VAR_8->context_count; VAR_10 < VAR_9; ++VAR_10)
    {
        VAR_8->contexts[VAR_10]->constant_update_mask |= VAR_2[VAR_4].mask;
    }
}
