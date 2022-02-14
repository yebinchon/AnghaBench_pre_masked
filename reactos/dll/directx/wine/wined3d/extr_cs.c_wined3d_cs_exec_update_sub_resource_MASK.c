
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {unsigned int level_count; } ;
struct wined3d_resource {scalar_t__ type; } ;
struct TYPE_2__ {int slice_pitch; int row_pitch; int data; } ;
struct wined3d_box {unsigned int right; unsigned int bottom; unsigned int back; int front; int top; int left; } ;
struct wined3d_cs_update_sub_resource {unsigned int sub_resource_idx; TYPE_1__ data; struct wined3d_box box; struct wined3d_resource* resource; } ;
struct wined3d_cs {int device; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_const_bo_address {int addr; scalar_t__ buffer_object; } ;
struct wined3d_buffer {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct wined3d_buffer* FUNC_1 (struct wined3d_resource*) ;
 struct wined3d_context* FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (struct wined3d_buffer*,int ) ;
 int FUNC_5 (struct wined3d_buffer*,struct wined3d_context*,int ) ;
 int FUNC_6 (struct wined3d_buffer*,struct wined3d_context*,struct wined3d_box const*,int ) ;
 int FUNC_7 (struct wined3d_resource*) ;
 int FUNC_8 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 struct wined3d_texture* FUNC_9 (struct wined3d_resource*) ;
 unsigned int FUNC_10 (struct wined3d_texture*,unsigned int) ;
 unsigned int FUNC_11 (struct wined3d_texture*,unsigned int) ;
 unsigned int FUNC_12 (struct wined3d_texture*,unsigned int) ;
 int FUNC_13 (struct wined3d_texture*,unsigned int,int ) ;
 int FUNC_14 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;
 int FUNC_15 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_16 (struct wined3d_texture*,unsigned int,struct wined3d_context*,struct wined3d_box const*,struct wined3d_const_bo_address*,int ,int ) ;
 int FUNC_17 (struct wined3d_texture*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_18(struct wined3d_cs *VAR_4, const void *VAR_5)
{
    const struct wined3d_cs_update_sub_resource *VAR_6 = VAR_5;
    struct wined3d_resource *VAR_7 = VAR_6->resource;
    const struct wined3d_box *VAR_8 = &VAR_6->box;
    unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
    struct wined3d_const_bo_address VAR_13;
    struct wined3d_context *VAR_14;
    struct wined3d_texture *VAR_15;

    VAR_14 = FUNC_2(VAR_4->device, ((void*)0), 0);

    if (VAR_7->type == VAR_3)
    {
        struct wined3d_buffer *VAR_16 = FUNC_1(VAR_7);

        if (!FUNC_5(VAR_16, VAR_14, VAR_1))
        {
            FUNC_0("Failed to load buffer location.\n");
            goto done;
        }

        FUNC_6(VAR_16, VAR_14, VAR_8, VAR_6->data.data);
        FUNC_4(VAR_16, ~VAR_1);
        goto done;
    }

    VAR_15 = FUNC_9(VAR_7);

    VAR_12 = VAR_6->sub_resource_idx % VAR_15->level_count;
    VAR_9 = FUNC_12(VAR_15, VAR_12);
    VAR_10 = FUNC_11(VAR_15, VAR_12);
    VAR_11 = FUNC_10(VAR_15, VAR_12);

    VAR_13.buffer_object = 0;
    VAR_13.addr = VAR_6->data.data;


    if (!VAR_8->left && !VAR_8->top && !VAR_8->front
            && VAR_8->right == VAR_9 && VAR_8->bottom == VAR_10 && VAR_8->back == VAR_11)
        FUNC_15(VAR_15, VAR_14, VAR_0);
    else
        FUNC_14(VAR_15, VAR_6->sub_resource_idx, VAR_14, VAR_2);
    FUNC_8(VAR_15, VAR_14, VAR_0);

    FUNC_16(VAR_15, VAR_6->sub_resource_idx, VAR_14,
            VAR_8, &VAR_13, VAR_6->data.row_pitch, VAR_6->data.slice_pitch);

    FUNC_17(VAR_15, VAR_6->sub_resource_idx, VAR_2);
    FUNC_13(VAR_15, VAR_6->sub_resource_idx, ~VAR_2);

done:
    FUNC_3(VAR_14);

    FUNC_7(VAR_7);
}
