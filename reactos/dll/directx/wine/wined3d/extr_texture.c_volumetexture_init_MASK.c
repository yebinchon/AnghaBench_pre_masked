
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int * parent; int parent_ops; int locations; } ;
struct TYPE_6__ {int map_binding; } ;
struct wined3d_texture {float* pow2_matrix; unsigned int level_count; struct wined3d_texture_sub_resource* sub_resources; TYPE_3__ resource; int target; } ;
struct wined3d_resource_desc {scalar_t__ format; int usage; int depth; int height; int width; int access; } ;
struct wined3d_parent_ops {int dummy; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_device_parent {TYPE_2__* ops; } ;
struct wined3d_device {TYPE_1__* adapter; struct wined3d_device_parent* device_parent; } ;
typedef int UINT ;
struct TYPE_5__ {struct wined3d_texture* (* volume_created ) (struct wined3d_device_parent*,struct wined3d_texture*,unsigned int,int **,int *) ;} ;
struct TYPE_4__ {struct wined3d_gl_info gl_info; } ;
typedef struct wined3d_texture* HRESULT ;
typedef int DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 struct wined3d_texture* VAR_2 ;
 scalar_t__ FUNC_1 (struct wined3d_texture*) ;
 int VAR_3 ;
 int FUNC_2 (char*,unsigned int,...) ;
 int FUNC_3 (char*,...) ;
 struct wined3d_texture* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct wined3d_texture* VAR_10 ;
 int FUNC_4 (int ) ;
 struct wined3d_texture* FUNC_5 (struct wined3d_device_parent*,struct wined3d_texture*,unsigned int,int **,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 struct wined3d_texture* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct wined3d_texture*) ;
 struct wined3d_texture* FUNC_10 (struct wined3d_texture*,int *,int,int,struct wined3d_resource_desc const*,int ,struct wined3d_device*,void*,struct wined3d_parent_ops const*,int *) ;
 scalar_t__ FUNC_11 (struct wined3d_texture*,struct wined3d_gl_info const*) ;

__attribute__((used)) static HRESULT FUNC_12(struct wined3d_texture *VAR_13, const struct wined3d_resource_desc *VAR_14,
        UINT VAR_15, UINT VAR_16, DWORD VAR_17, struct wined3d_device *VAR_18, void *VAR_19,
        const struct wined3d_parent_ops *VAR_20)
{
    struct wined3d_device_parent *VAR_21 = VAR_18->device_parent;
    const struct wined3d_gl_info *VAR_22 = &VAR_18->adapter->gl_info;
    unsigned int VAR_23;
    HRESULT VAR_24;

    if (VAR_15 != 1)
    {
        FUNC_0("Invalid layer count for volume texture.\n");
        return VAR_2;
    }



    if (VAR_5 >= VAR_14->format)
    {
        FUNC_3("(%p) : Texture cannot be created with a format of WINED3DFMT_UNKNOWN.\n", VAR_13);
        return VAR_4;
    }

    if (!VAR_22->supported[VAR_1])
    {
        FUNC_3("(%p) : Texture cannot be created - no volume texture support.\n", VAR_13);
        return VAR_4;
    }

    if (VAR_14->usage & VAR_6 && (FUNC_7(VAR_14->access)
            || VAR_14->usage & VAR_7))
    {
        FUNC_3("Attempted to create a DYNAMIC texture with access %s.\n",
                FUNC_6(VAR_14->access));
        return VAR_4;
    }

    if (!VAR_22->supported[VAR_0])
    {
        if (!FUNC_4(VAR_14->width) || !FUNC_4(VAR_14->height) || !FUNC_4(VAR_14->depth))
        {
            if (VAR_14->usage & VAR_7)
            {
                FUNC_3("Creating a scratch NPOT volume texture despite lack of HW support.\n");
            }
            else
            {
                FUNC_3("Attempted to create a NPOT volume texture (%u, %u, %u) without GL support.\n",
                        VAR_14->width, VAR_14->height, VAR_14->depth);
                return VAR_4;
            }
        }
    }

    if (FUNC_1(VAR_24 = FUNC_10(VAR_13, &VAR_11, 1, VAR_16, VAR_14,
            VAR_17, VAR_18, VAR_19, VAR_20, &VAR_12)))
    {
        FUNC_3("Failed to initialize texture, returning %#x.\n", VAR_24);
        return VAR_24;
    }

    VAR_13->pow2_matrix[0] = 1.0f;
    VAR_13->pow2_matrix[5] = 1.0f;
    VAR_13->pow2_matrix[10] = 1.0f;
    VAR_13->pow2_matrix[15] = 1.0f;
    VAR_13->target = VAR_3;

    if (FUNC_11(VAR_13, VAR_22))
    {
        FUNC_8(&VAR_13->resource);
        VAR_13->resource.map_binding = VAR_8;
    }


    for (VAR_23 = 0; VAR_23 < VAR_13->level_count; ++VAR_23)
    {
        struct wined3d_texture_sub_resource *VAR_25;

        VAR_25 = &VAR_13->sub_resources[VAR_23];
        VAR_25->locations = VAR_9;

        if (FUNC_1(VAR_24 = VAR_21->ops->volume_created(VAR_21,
                VAR_13, VAR_23, &VAR_25->parent, &VAR_25->parent_ops)))
        {
            FUNC_3("Failed to create volume parent, hr %#x.\n", VAR_24);
            VAR_25->parent = ((void*)0);
            FUNC_9(VAR_13);
            return VAR_24;
        }

        FUNC_2("parent %p, parent_ops %p.\n", VAR_19, VAR_20);

        FUNC_2("Created volume level %u.\n", VAR_23);
    }

    return VAR_10;
}
