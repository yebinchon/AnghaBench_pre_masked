
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct wined3d_surface* surface; } ;
struct wined3d_texture_sub_resource {int * parent; int parent_ops; TYPE_2__ u; int locations; } ;
struct TYPE_8__ {int map_binding; } ;
struct wined3d_texture {float* pow2_matrix; unsigned int level_count; unsigned int layer_count; struct wined3d_texture_sub_resource* sub_resources; TYPE_4__ resource; int target; } ;
struct wined3d_surface {unsigned int texture_level; unsigned int texture_layer; int renderbuffers; struct wined3d_texture* container; } ;
struct wined3d_resource_desc {scalar_t__ format; int usage; int depth; int height; int width; int access; } ;
struct wined3d_parent_ops {int dummy; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_device_parent {TYPE_3__* ops; } ;
struct wined3d_device {TYPE_1__* adapter; struct wined3d_device_parent* device_parent; } ;
typedef int UINT ;
struct TYPE_7__ {struct wined3d_texture* (* surface_created ) (struct wined3d_device_parent*,struct wined3d_texture*,unsigned int,int **,int *) ;} ;
struct TYPE_5__ {struct wined3d_gl_info gl_info; } ;
typedef int SIZE_T ;
typedef struct wined3d_texture* HRESULT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct wined3d_texture* VAR_2 ;
 scalar_t__ FUNC_0 (struct wined3d_texture*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,unsigned int,unsigned int,...) ;
 int FUNC_2 (char*,...) ;
 struct wined3d_texture* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct wined3d_texture* VAR_13 ;
 struct wined3d_surface* FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct wined3d_texture* FUNC_6 (struct wined3d_device_parent*,struct wined3d_texture*,unsigned int,int **,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 struct wined3d_texture* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (struct wined3d_texture*) ;
 struct wined3d_texture* FUNC_11 (struct wined3d_texture*,int *,int,int,struct wined3d_resource_desc const*,int ,struct wined3d_device*,void*,struct wined3d_parent_ops const*,int *) ;
 scalar_t__ FUNC_12 (struct wined3d_texture*,struct wined3d_gl_info const*) ;

__attribute__((used)) static HRESULT FUNC_13(struct wined3d_texture *VAR_16, const struct wined3d_resource_desc *VAR_17,
        UINT VAR_18, UINT VAR_19, struct wined3d_device *VAR_20, void *VAR_21,
        const struct wined3d_parent_ops *VAR_22)
{
    struct wined3d_device_parent *VAR_23 = VAR_20->device_parent;
    const struct wined3d_gl_info *VAR_24 = &VAR_20->adapter->gl_info;
    struct wined3d_surface *VAR_25;
    unsigned int VAR_26, VAR_27;
    HRESULT VAR_28;

    if (VAR_18 > 1 && !VAR_24->supported[VAR_1])
    {
        FUNC_2("OpenGL implementation does not support array textures.\n");
        return VAR_5;
    }



    if (VAR_6 >= VAR_17->format)
    {
        FUNC_2("(%p) : Texture cannot be created with a format of WINED3DFMT_UNKNOWN.\n", VAR_16);
        return VAR_5;
    }

    if (VAR_17->usage & VAR_8)
    {
        FUNC_2("1d textures can not be used for cube mapping, returning D3DERR_INVALIDCALL.\n");
        return VAR_5;
    }

    if ((VAR_17->usage & VAR_7 && FUNC_8(VAR_17->access))
            || (VAR_17->usage & VAR_10))
    {
        FUNC_2("Attempted to create a DYNAMIC texture in pool %s.\n", FUNC_7(VAR_17->access));
        return VAR_5;
    }

    if (!VAR_24->supported[VAR_0] && !FUNC_4(VAR_17->width))
    {
        if (VAR_17->usage & VAR_10)
        {
            FUNC_2("Creating a scratch NPOT 1d texture despite lack of HW support.\n");
        }
        else
        {
            FUNC_2("Attempted to create a NPOT 1d texture (%u, %u, %u) without GL support.\n",
                    VAR_17->width, VAR_17->height, VAR_17->depth);
            return VAR_5;
        }
    }

    if (VAR_17->usage & VAR_9)
    {
        if (VAR_19 != 1)
        {
            FUNC_2("WINED3DUSAGE_QUERY_GENMIPMAP is set, and level count != 1, returning WINED3DERR_INVALIDCALL.\n");
            return VAR_5;
        }
    }

    if (FUNC_0(VAR_28 = FUNC_11(VAR_16, &VAR_14, VAR_18, VAR_19, VAR_17,
            0, VAR_20, VAR_21, VAR_22, &VAR_15)))
    {
        FUNC_2("Failed to initialize texture, returning %#x.\n", VAR_28);
        return VAR_28;
    }

    VAR_16->pow2_matrix[0] = 1.0f;
    VAR_16->pow2_matrix[5] = 1.0f;
    VAR_16->pow2_matrix[10] = 1.0f;
    VAR_16->pow2_matrix[15] = 1.0f;
    VAR_16->target = (VAR_18 > 1) ? VAR_4 : VAR_3;

    if (FUNC_12(VAR_16, VAR_24))
    {
        FUNC_9(&VAR_16->resource);
        VAR_16->resource.map_binding = VAR_11;
    }

    if (VAR_19 > ~(SIZE_T)0 / VAR_18
            || !(VAR_25 = FUNC_3(VAR_19 * VAR_18, sizeof(*VAR_25))))
    {
        FUNC_10(VAR_16);
        return VAR_2;
    }


    for (VAR_26 = 0; VAR_26 < VAR_16->level_count; ++VAR_26)
    {
        for (VAR_27 = 0; VAR_27 < VAR_16->layer_count; ++VAR_27)
        {
            struct wined3d_texture_sub_resource *VAR_29;
            unsigned int VAR_30 = VAR_27 * VAR_16->level_count + VAR_26;
            struct wined3d_surface *VAR_31;

            VAR_31 = &VAR_25[VAR_30];
            VAR_31->container = VAR_16;
            VAR_31->texture_level = VAR_26;
            VAR_31->texture_layer = VAR_27;
            FUNC_5(&VAR_31->renderbuffers);

            VAR_29 = &VAR_16->sub_resources[VAR_30];
            VAR_29->locations = VAR_12;
            VAR_29->u.surface = VAR_31;

            if (FUNC_0(VAR_28 = VAR_23->ops->surface_created(VAR_23,
                    VAR_16, VAR_30, &VAR_29->parent, &VAR_29->parent_ops)))
            {
                FUNC_2("Failed to create texture1d parent, hr %#x.\n", VAR_28);
                VAR_29->parent = ((void*)0);
                FUNC_10(VAR_16);
                return VAR_28;
            }

            FUNC_1("parent %p, parent_ops %p.\n", VAR_21, VAR_22);

            FUNC_1("Created 1d texture surface level %u, layer %u @ %p.\n", VAR_26, VAR_27, VAR_31);
        }
    }

    return VAR_13;
}
