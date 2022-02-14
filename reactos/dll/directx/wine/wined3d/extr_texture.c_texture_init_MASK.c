
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {struct wined3d_surface* surface; } ;
struct wined3d_texture_sub_resource {int parent_ops; int * parent; TYPE_3__ u; int locations; } ;
struct TYPE_14__ {scalar_t__ gl_type; int usage; int map_binding; } ;
struct wined3d_texture {int flags; int pow2_width; int pow2_height; float* pow2_matrix; unsigned int level_count; unsigned int layer_count; TYPE_4__ resource; struct wined3d_texture_sub_resource* sub_resources; TYPE_2__* overlay_info; int target; } ;
struct wined3d_surface {unsigned int texture_level; unsigned int texture_layer; int dc; int renderbuffers; struct wined3d_texture* container; } ;
struct wined3d_resource_desc {int usage; int access; int width; int height; scalar_t__ multisample_type; int format; } ;
struct wined3d_parent_ops {int dummy; } ;
struct TYPE_11__ {int texture_size; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_1__ limits; } ;
struct wined3d_format {int* flags; } ;
struct wined3d_device_parent {TYPE_5__* ops; } ;
struct wined3d_device {TYPE_9__* cs; TYPE_6__* wined3d; TYPE_8__* adapter; struct wined3d_device_parent* device_parent; } ;
typedef int UINT ;
struct TYPE_19__ {TYPE_7__* ops; } ;
struct TYPE_18__ {struct wined3d_gl_info gl_info; } ;
struct TYPE_17__ {int (* finish ) (TYPE_9__*,int ) ;} ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {struct wined3d_texture* (* surface_created ) (struct wined3d_device_parent*,struct wined3d_texture*,unsigned int,int **,int *) ;} ;
struct TYPE_12__ {int overlays; int entry; } ;
typedef struct wined3d_texture* HRESULT ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct wined3d_texture* VAR_4 ;
 scalar_t__ FUNC_0 (struct wined3d_texture*) ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,unsigned int,unsigned int,...) ;
 int FUNC_3 (char*,...) ;
 struct wined3d_texture* VAR_11 ;
 struct wined3d_texture* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 struct wined3d_texture* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* FUNC_4 (unsigned int,int) ;
 int FUNC_5 (struct wined3d_surface*) ;
 int FUNC_6 (int *) ;
 struct wined3d_texture* FUNC_7 (struct wined3d_device_parent*,struct wined3d_texture*,unsigned int,int **,int *) ;
 int FUNC_8 (TYPE_9__*,int ) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_9 (TYPE_9__*,int ,struct wined3d_surface*) ;
 struct wined3d_format* FUNC_10 (struct wined3d_gl_info const*,int ,int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct wined3d_texture*) ;
 struct wined3d_texture* FUNC_13 (struct wined3d_texture*,int *,unsigned int,unsigned int,struct wined3d_resource_desc const*,int,struct wined3d_device*,void*,struct wined3d_parent_ops const*,int *) ;
 int FUNC_14 (struct wined3d_texture*,unsigned int,int ) ;
 scalar_t__ FUNC_15 (struct wined3d_texture*,struct wined3d_gl_info const*) ;
 int FUNC_16 (struct wined3d_texture*,unsigned int,int ) ;

__attribute__((used)) static HRESULT FUNC_17(struct wined3d_texture *VAR_43, const struct wined3d_resource_desc *VAR_44,
        unsigned int VAR_45, unsigned int VAR_46, DWORD VAR_47, struct wined3d_device *VAR_48,
        void *VAR_49, const struct wined3d_parent_ops *VAR_50)
{
    struct wined3d_device_parent *VAR_51 = VAR_48->device_parent;
    const struct wined3d_gl_info *VAR_52 = &VAR_48->adapter->gl_info;
    struct wined3d_surface *VAR_53;
    UINT VAR_54, VAR_55;
    unsigned int VAR_56, VAR_57, VAR_58;
    HRESULT VAR_59;

    if (!(VAR_44->usage & VAR_18) && VAR_45 > 1
            && !VAR_52->supported[VAR_3])
    {
        FUNC_3("OpenGL implementation does not support array textures.\n");
        return VAR_11;
    }



    if (VAR_15 >= VAR_44->format)
    {
        FUNC_3("(%p) : Texture cannot be created with a format of WINED3DFMT_UNKNOWN.\n", VAR_43);
        return VAR_11;
    }

    if (VAR_44->usage & VAR_17 && FUNC_11(VAR_44->access))
        FUNC_1("Trying to create a managed texture with dynamic usage.\n");
    if (!(VAR_44->usage & (VAR_17 | VAR_21 | VAR_16))
            && (VAR_47 & VAR_37))
        FUNC_3("Creating a mappable texture that doesn't specify dynamic usage.\n");
    if (VAR_44->usage & VAR_21 && VAR_44->access & VAR_33)
        FUNC_1("Trying to create a CPU accessible render target.\n");

    VAR_54 = VAR_44->width;
    VAR_55 = VAR_44->height;
    if (((VAR_44->width & (VAR_44->width - 1)) || (VAR_44->height & (VAR_44->height - 1)))
            && !VAR_52->supported[VAR_1])
    {

        if (VAR_46 != 1 || VAR_45 != 1)
        {
            if (!(VAR_44->usage & VAR_22))
            {
                FUNC_3("Attempted to create a mipmapped/cube/array NPOT texture without unconditional NPOT support.\n");
                return VAR_11;
            }

            FUNC_3("Creating a scratch mipmapped/cube/array NPOT texture despite lack of HW support.\n");
        }
        VAR_43->flags |= VAR_35;

        if (!VAR_52->supported[VAR_2] && !VAR_52->supported[VAR_25])
        {
            const struct wined3d_format *VAR_60 = FUNC_10(VAR_52, VAR_44->format, VAR_44->usage);


            if (VAR_60->flags[VAR_26]
                    & (VAR_13 | VAR_14))
            {
                FUNC_1("Compressed or height scaled non-power-of-two (%ux%u) textures are not supported.\n",
                        VAR_44->width, VAR_44->height);
                return VAR_12;
            }


            VAR_54 = VAR_55 = 1;
            while (VAR_54 < VAR_44->width)
                VAR_54 <<= 1;
            while (VAR_55 < VAR_44->height)
                VAR_55 <<= 1;
            VAR_43->flags |= VAR_36;
        }
    }
    VAR_43->pow2_width = VAR_54;
    VAR_43->pow2_height = VAR_55;

    if ((VAR_54 > VAR_52->limits.texture_size || VAR_55 > VAR_52->limits.texture_size)
            && (VAR_44->usage & VAR_23))
    {
        if (VAR_44->access & VAR_34)
        {
            FUNC_3("Dimensions (%ux%u) exceed the maximum texture size.\n", VAR_54, VAR_55);
            return VAR_12;
        }


        FUNC_2("Creating an oversized (%ux%u) surface.\n", VAR_54, VAR_55);
    }

    if (FUNC_0(VAR_59 = FUNC_13(VAR_43, &VAR_41, VAR_45, VAR_46, VAR_44,
            VAR_47, VAR_48, VAR_49, VAR_50, &VAR_42)))
    {
        FUNC_3("Failed to initialize texture, returning %#x.\n", VAR_59);
        return VAR_59;
    }


    if (VAR_43->resource.gl_type == VAR_27)
    {
        VAR_43->pow2_matrix[0] = (float)VAR_44->width;
        VAR_43->pow2_matrix[5] = (float)VAR_44->height;
        VAR_43->flags &= ~(VAR_39 | VAR_38);
        VAR_43->target = VAR_10;
    }
    else
    {
        if (VAR_43->flags & VAR_36)
        {
            VAR_43->pow2_matrix[0] = (((float)VAR_44->width) / ((float)VAR_54));
            VAR_43->pow2_matrix[5] = (((float)VAR_44->height) / ((float)VAR_55));
            VAR_43->flags &= ~VAR_39;
        }
        else
        {
            VAR_43->pow2_matrix[0] = 1.0f;
            VAR_43->pow2_matrix[5] = 1.0f;
        }
        if (VAR_44->usage & VAR_18)
        {
            VAR_43->target = VAR_9;
        }
        else if (VAR_44->multisample_type && VAR_52->supported[VAR_0])
        {
            if (VAR_45 > 1)
                VAR_43->target = VAR_8;
            else
                VAR_43->target = VAR_7;
        }
        else
        {
            if (VAR_45 > 1)
                VAR_43->target = VAR_6;
            else
                VAR_43->target = VAR_5;
        }
    }
    VAR_43->pow2_matrix[10] = 1.0f;
    VAR_43->pow2_matrix[15] = 1.0f;
    FUNC_2("x scale %.8e, y scale %.8e.\n", VAR_43->pow2_matrix[0], VAR_43->pow2_matrix[5]);

    if (FUNC_15(VAR_43, VAR_52))
        VAR_43->resource.map_binding = VAR_28;

    VAR_58 = VAR_46 * VAR_45;
    if (VAR_58 / VAR_45 != VAR_46
            || !(VAR_53 = FUNC_4(VAR_58, sizeof(*VAR_53))))
    {
        FUNC_12(VAR_43);
        return VAR_4;
    }

    if (VAR_44->usage & VAR_19)
    {
        if (!(VAR_43->overlay_info = FUNC_4(VAR_58, sizeof(*VAR_43->overlay_info))))
        {
            FUNC_5(VAR_53);
            FUNC_12(VAR_43);
            return VAR_4;
        }

        for (VAR_56 = 0; VAR_56 < VAR_58; ++VAR_56)
        {
            FUNC_6(&VAR_43->overlay_info[VAR_56].entry);
            FUNC_6(&VAR_43->overlay_info[VAR_56].overlays);
        }
    }


    for (VAR_56 = 0; VAR_56 < VAR_43->level_count; ++VAR_56)
    {
        for (VAR_57 = 0; VAR_57 < VAR_43->layer_count; ++VAR_57)
        {
            struct wined3d_texture_sub_resource *VAR_61;
            unsigned int VAR_62 = VAR_57 * VAR_43->level_count + VAR_56;
            struct wined3d_surface *VAR_63;

            VAR_63 = &VAR_53[VAR_62];
            VAR_63->container = VAR_43;
            VAR_63->texture_level = VAR_56;
            VAR_63->texture_layer = VAR_57;
            FUNC_6(&VAR_63->renderbuffers);

            VAR_61 = &VAR_43->sub_resources[VAR_62];
            VAR_61->locations = VAR_29;
            VAR_61->u.surface = VAR_63;
            if (!(VAR_43->resource.usage & VAR_16))
            {
                FUNC_16(VAR_43, VAR_62, VAR_30);
                FUNC_14(VAR_43, VAR_62, ~VAR_30);
            }

            if (FUNC_0(VAR_59 = VAR_51->ops->surface_created(VAR_51,
                    VAR_43, VAR_62, &VAR_61->parent, &VAR_61->parent_ops)))
            {
                FUNC_3("Failed to create surface parent, hr %#x.\n", VAR_59);
                VAR_61->parent = ((void*)0);
                FUNC_12(VAR_43);
                return VAR_59;
            }

            FUNC_2("parent %p, parent_ops %p.\n", VAR_61->parent, VAR_61->parent_ops);

            FUNC_2("Created surface level %u, layer %u @ %p.\n", VAR_56, VAR_57, VAR_63);

            if ((VAR_44->usage & VAR_20) || (VAR_48->wined3d->flags & VAR_31))
            {
                FUNC_9(VAR_48->cs, VAR_40, VAR_63);
                VAR_48->cs->ops->finish(VAR_48->cs, VAR_24);
                if (!VAR_63->dc)
                {
                    FUNC_12(VAR_43);
                    return VAR_11;
                }
            }
        }
    }

    return VAR_32;
}
