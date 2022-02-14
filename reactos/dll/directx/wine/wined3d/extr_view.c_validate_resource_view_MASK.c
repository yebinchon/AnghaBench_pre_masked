
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ level_idx; int level_count; unsigned int layer_count; unsigned int layer_idx; } ;
struct TYPE_12__ {unsigned int start_idx; unsigned int count; } ;
struct TYPE_14__ {TYPE_6__ texture; TYPE_5__ buffer; } ;
struct wined3d_view_desc {scalar_t__ format_id; int flags; TYPE_7__ u; } ;
struct wined3d_texture {unsigned int layer_count; scalar_t__ level_count; } ;
struct wined3d_resource {scalar_t__ type; struct wined3d_format const* format; int usage; TYPE_2__* device; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {scalar_t__ id; unsigned int byte_count; } ;
struct TYPE_11__ {unsigned int size; } ;
struct TYPE_10__ {int structure_byte_stride; } ;
struct wined3d_buffer {TYPE_4__ resource; TYPE_3__ desc; } ;
struct TYPE_9__ {TYPE_1__* adapter; } ;
struct TYPE_8__ {struct wined3d_gl_info gl_info; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct wined3d_buffer* FUNC_1 (struct wined3d_resource*) ;
 int FUNC_2 (scalar_t__) ;
 struct wined3d_texture* FUNC_3 (struct wined3d_resource*) ;
 scalar_t__ FUNC_4 (struct wined3d_format const*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 struct wined3d_format* FUNC_6 (struct wined3d_gl_info const*,scalar_t__,int ) ;
 unsigned int FUNC_7 (struct wined3d_texture*,scalar_t__) ;

__attribute__((used)) static const struct wined3d_format *FUNC_8(const struct wined3d_view_desc *VAR_6,
        struct wined3d_resource *VAR_7, BOOL VAR_8, BOOL VAR_9)
{
    const struct wined3d_gl_info *VAR_10 = &VAR_7->device->adapter->gl_info;
    const struct wined3d_format *VAR_11;

    VAR_11 = FUNC_6(VAR_10, VAR_6->format_id, VAR_7->usage);
    if (VAR_7->type == VAR_3 && (VAR_6->flags & VAR_5))
    {
        if (VAR_11->id != VAR_0)
        {
            FUNC_0("Invalid format %s for raw buffer view.\n", FUNC_2(VAR_11->id));
            return ((void*)0);
        }

        VAR_11 = FUNC_6(VAR_10, VAR_1, VAR_7->usage);
    }

    if (FUNC_4(VAR_11))
    {
        FUNC_0("Trying to create view for typeless format %s.\n", FUNC_2(VAR_11->id));
        return ((void*)0);
    }

    if (VAR_7->type == VAR_3)
    {
        struct wined3d_buffer *VAR_12 = FUNC_1(VAR_7);
        unsigned int VAR_13, VAR_14;

        if (VAR_12->desc.structure_byte_stride)
        {
            if (VAR_6->format_id != VAR_2)
            {
                FUNC_0("Invalid format %s for structured buffer view.\n", FUNC_2(VAR_6->format_id));
                return ((void*)0);
            }

            VAR_11 = FUNC_6(VAR_10, VAR_1, VAR_7->usage);
            VAR_14 = VAR_12->desc.structure_byte_stride;
        }
        else
        {
            VAR_14 = VAR_11->byte_count;
        }

        if (!VAR_14)
            return ((void*)0);

        VAR_13 = VAR_12->resource.size / VAR_14;
        if (VAR_6->u.buffer.start_idx >= VAR_13
                || VAR_6->u.buffer.count > VAR_13 - VAR_6->u.buffer.start_idx)
            return ((void*)0);
    }
    else
    {
        struct wined3d_texture *VAR_15 = FUNC_3(VAR_7);
        unsigned int VAR_16;

        if (VAR_7->format->id != VAR_11->id && !FUNC_4(VAR_7->format)
                && (!VAR_9 || !FUNC_5(VAR_7->format->id, VAR_11->id)))
        {
            FUNC_0("Trying to create incompatible view for non typeless format %s.\n",
                    FUNC_2(VAR_11->id));
            return ((void*)0);
        }

        if (VAR_8 && VAR_7->type == VAR_4)
            VAR_16 = FUNC_7(VAR_15, VAR_6->u.texture.level_idx);
        else
            VAR_16 = VAR_15->layer_count;

        if (!VAR_6->u.texture.level_count
                || (VAR_8 && VAR_6->u.texture.level_count != 1)
                || VAR_6->u.texture.level_idx >= VAR_15->level_count
                || VAR_6->u.texture.level_count > VAR_15->level_count - VAR_6->u.texture.level_idx
                || !VAR_6->u.texture.layer_count
                || VAR_6->u.texture.layer_idx >= VAR_16
                || VAR_6->u.texture.layer_count > VAR_16 - VAR_6->u.texture.layer_idx)
            return ((void*)0);
    }

    return VAR_11;
}
