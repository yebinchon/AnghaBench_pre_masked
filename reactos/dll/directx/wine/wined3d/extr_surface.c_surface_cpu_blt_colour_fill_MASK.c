
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int map_binding; } ;
struct wined3d_texture {int level_count; TYPE_3__* sub_resources; TYPE_2__ resource; } ;
struct wined3d_rendertarget_view {int format_flags; int sub_resource_idx; TYPE_4__* resource; TYPE_5__* format; } ;
struct wined3d_map_desc {int row_pitch; int slice_pitch; int* data; } ;
struct wined3d_device {scalar_t__ d3d_initialized; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_color {int dummy; } ;
struct wined3d_box {unsigned int right; int left; unsigned int bottom; int top; int front; } ;
struct wined3d_bo_address {int dummy; } ;
typedef int c ;
typedef int WORD ;
struct TYPE_11__ {scalar_t__ id; unsigned int byte_count; int block_height; int block_width; int block_byte_count; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__* format; struct wined3d_device* device; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_7__ {scalar_t__ id; } ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct wined3d_rendertarget_view*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct wined3d_context* FUNC_3 (struct wined3d_device*,int *,int ) ;
 int* FUNC_4 (struct wined3d_context*,struct wined3d_bo_address*,int ,int ,int ) ;
 int FUNC_5 (struct wined3d_context*) ;
 int FUNC_6 (struct wined3d_context*,struct wined3d_bo_address*,int ) ;
 int FUNC_7 (struct wined3d_box const*) ;
 int FUNC_8 (struct wined3d_color const*) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int*,int*,unsigned int) ;
 struct wined3d_texture* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_5__*,struct wined3d_color const*) ;
 int FUNC_14 (TYPE_4__*,size_t) ;
 int FUNC_15 (struct wined3d_texture*,int,struct wined3d_bo_address*,int) ;
 int FUNC_16 (struct wined3d_texture*,int,int*,int*) ;
 int FUNC_17 (struct wined3d_texture*,int,int) ;
 int FUNC_18 (struct wined3d_texture*,int,struct wined3d_context*,int) ;

__attribute__((used)) static void FUNC_19(struct wined3d_rendertarget_view *VAR_4,
        const struct wined3d_box *VAR_5, const struct wined3d_color *VAR_6)
{
    struct wined3d_device *VAR_7 = VAR_4->resource->device;
    struct wined3d_context *VAR_8 = ((void*)0);
    struct wined3d_texture *VAR_9;
    struct wined3d_bo_address VAR_10;
    unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    struct wined3d_map_desc VAR_16;
    DWORD VAR_17;
    BYTE *VAR_18;
    DWORD VAR_19;

    FUNC_2("view %p, box %s, colour %s.\n", VAR_4, FUNC_7(VAR_5), FUNC_8(VAR_6));

    if (VAR_4->format_flags & VAR_1)
    {
        FUNC_1("Not implemented for format %s.\n", FUNC_9(VAR_4->format->id));
        return;
    }

    if (VAR_4->format->id != VAR_4->resource->format->id)
        FUNC_1("View format %s doesn't match resource format %s.\n",
                FUNC_9(VAR_4->format->id), FUNC_9(VAR_4->resource->format->id));

    if (VAR_4->resource->type == VAR_3)
    {
        FUNC_1("Not implemented for buffers.\n");
        return;
    }

    if (VAR_7->d3d_initialized)
        VAR_8 = FUNC_3(VAR_7, ((void*)0), 0);

    VAR_19 = FUNC_13(VAR_4->format, VAR_6);
    VAR_15 = VAR_4->format->byte_count;
    VAR_13 = VAR_5->right - VAR_5->left;
    VAR_14 = VAR_5->bottom - VAR_5->top;

    VAR_9 = FUNC_11(VAR_4->resource);
    VAR_17 = VAR_9->resource.map_binding;
    if (!FUNC_18(VAR_9, VAR_4->sub_resource_idx, VAR_8, VAR_17))
        FUNC_0("Failed to load the sub-resource into %s.\n", FUNC_12(VAR_17));
    FUNC_17(VAR_9, VAR_4->sub_resource_idx, ~VAR_17);
    FUNC_16(VAR_9, VAR_4->sub_resource_idx % VAR_9->level_count,
            &VAR_16.row_pitch, &VAR_16.slice_pitch);
    FUNC_15(VAR_9, VAR_4->sub_resource_idx, &VAR_10, VAR_17);
    VAR_16.data = FUNC_4(VAR_8, &VAR_10,
            VAR_9->sub_resources[VAR_4->sub_resource_idx].size, VAR_0, VAR_2);
    VAR_16.data = (BYTE *)VAR_16.data
            + (VAR_5->front * VAR_16.slice_pitch)
            + ((VAR_5->top / VAR_4->format->block_height) * VAR_16.row_pitch)
            + ((VAR_5->left / VAR_4->format->block_width) * VAR_4->format->block_byte_count);

    switch (VAR_15)
    {
        case 1:
            for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11)
            {
                ((BYTE *)VAR_16.data)[VAR_11] = VAR_19;
            }
            break;

        case 2:
            for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11)
            {
                ((WORD *)VAR_16.data)[VAR_11] = VAR_19;
            }
            break;

        case 3:
        {
            VAR_18 = VAR_16.data;
            for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11, VAR_18 += 3)
            {
                VAR_18[0] = (VAR_19 ) & 0xff;
                VAR_18[1] = (VAR_19 >> 8) & 0xff;
                VAR_18[2] = (VAR_19 >> 16) & 0xff;
            }
            break;
        }
        case 4:
            for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11)
            {
                ((DWORD *)VAR_16.data)[VAR_11] = VAR_19;
            }
            break;

        default:
            FUNC_1("Not implemented for bpp %u.\n", VAR_15);
            FUNC_14(VAR_4->resource, VAR_4->sub_resource_idx);
            return;
    }

    VAR_18 = VAR_16.data;
    for (VAR_12 = 1; VAR_12 < VAR_14; ++VAR_12)
    {
        VAR_18 += VAR_16.row_pitch;
        FUNC_10(VAR_18, VAR_16.data, VAR_13 * VAR_15);
    }

    FUNC_6(VAR_8, &VAR_10, VAR_0);
    if (VAR_8)
        FUNC_5(VAR_8);
}
