
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int map_binding; struct wined3d_device* device; struct wined3d_format* format; } ;
struct wined3d_texture {unsigned int level_count; TYPE_3__* sub_resources; TYPE_1__ resource; } ;
struct wined3d_resource_desc {int usage; int access; int depth; int height; int width; scalar_t__ size; scalar_t__ multisample_quality; int multisample_type; int format; int resource_type; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {int* flags; int id; scalar_t__ conv_byte_count; int color_fixup; } ;
struct wined3d_device {scalar_t__ d3d_initialized; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {int dummy; } ;
struct d3dfmt_converter_desc {int (* convert ) (int const*,int *,unsigned int,unsigned int,int ,int ) ;} ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_11__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_9__ {int surface; } ;
struct TYPE_10__ {TYPE_2__ u; int size; } ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ POINT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct wined3d_context* FUNC_4 (struct wined3d_device*,int *,int ) ;
 void* FUNC_5 (struct wined3d_context*,struct wined3d_bo_address*,int ,int ,int ) ;
 int FUNC_6 (struct wined3d_context*) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_bo_address*,int ) ;
 int FUNC_8 (int ) ;
 struct d3dfmt_converter_desc* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int const*,int *,unsigned int,unsigned int,int ,int ) ;
 int FUNC_12 (struct wined3d_bo_address*) ;
 int FUNC_13 (int ) ;
 int VAR_16 ;
 int FUNC_14 (int ,struct wined3d_gl_info const*,struct wined3d_format const*,TYPE_4__*,unsigned int,TYPE_5__*,int ,int ) ;
 int FUNC_15 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_16 (struct wined3d_device*,struct wined3d_resource_desc*,int,int,int,int *,int *,int *,struct wined3d_texture**) ;
 int FUNC_17 (struct wined3d_texture*,unsigned int) ;
 int FUNC_18 (struct wined3d_texture*,unsigned int) ;
 int FUNC_19 (struct wined3d_texture*,unsigned int,struct wined3d_bo_address*,int ) ;
 int FUNC_20 (struct wined3d_texture*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_21 (struct wined3d_texture*,int ,int ) ;
 int FUNC_22 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;
 int FUNC_23 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_24 (struct wined3d_texture*,int ,int ) ;

__attribute__((used)) static struct wined3d_texture *FUNC_25(struct wined3d_texture *VAR_17,
        unsigned int VAR_18, const struct wined3d_format *VAR_19)
{
    unsigned int VAR_20 = VAR_18 % VAR_17->level_count;
    const struct wined3d_format *VAR_21 = VAR_17->resource.format;
    struct wined3d_device *VAR_22 = VAR_17->resource.device;
    const struct d3dfmt_converter_desc *VAR_23 = ((void*)0);
    const struct wined3d_gl_info *VAR_24 = ((void*)0);
    unsigned int VAR_25, VAR_26;
    struct wined3d_context *VAR_27 = ((void*)0);
    struct wined3d_texture *VAR_28;
    struct wined3d_bo_address VAR_29;
    struct wined3d_resource_desc VAR_30;
    DWORD VAR_31;

    if (!(VAR_23 = FUNC_9(VAR_21->id, VAR_19->id)) && (!VAR_22->d3d_initialized
            || !FUNC_10(VAR_21->color_fixup) || VAR_21->conv_byte_count
            || !FUNC_10(VAR_19->color_fixup) || VAR_19->conv_byte_count
            || (VAR_21->flags[VAR_5] & VAR_2)))
    {
        FUNC_2("Cannot find a conversion function from format %s to %s.\n",
                FUNC_8(VAR_21->id), FUNC_8(VAR_19->id));
        return ((void*)0);
    }


    VAR_30.resource_type = VAR_13;
    VAR_30.format = VAR_19->id;
    VAR_30.multisample_type = VAR_9;
    VAR_30.multisample_quality = 0;
    VAR_30.usage = VAR_4 | VAR_3;
    VAR_30.access = VAR_10 | VAR_11 | VAR_12;
    VAR_30.width = FUNC_18(VAR_17, VAR_20);
    VAR_30.height = FUNC_17(VAR_17, VAR_20);
    VAR_30.depth = 1;
    VAR_30.size = 0;
    if (FUNC_1(FUNC_16(VAR_22, &VAR_30, 1, 1,
            VAR_15 | VAR_14,
            ((void*)0), ((void*)0), &VAR_16, &VAR_28)))
    {
        FUNC_0("Failed to create a destination texture for conversion.\n");
        return ((void*)0);
    }

    if (VAR_22->d3d_initialized)
    {
        VAR_27 = FUNC_4(VAR_22, ((void*)0), 0);
        VAR_24 = VAR_27->gl_info;
    }

    VAR_31 = VAR_17->resource.map_binding;
    if (!FUNC_22(VAR_17, VAR_18, VAR_27, VAR_31))
        FUNC_0("Failed to load the source sub-resource into %s.\n", FUNC_13(VAR_31));
    FUNC_20(VAR_17, VAR_20, &VAR_25, &VAR_26);
    FUNC_19(VAR_17, VAR_18, &VAR_29, VAR_31);

    if (VAR_23)
    {
        unsigned int VAR_32, VAR_33;
        struct wined3d_bo_address VAR_34;
        const BYTE *VAR_35;
        BYTE *VAR_36;

        VAR_31 = VAR_28->resource.map_binding;
        if (!FUNC_22(VAR_28, 0, VAR_27, VAR_31))
            FUNC_0("Failed to load the destination sub-resource into %s.\n", FUNC_13(VAR_31));
        FUNC_20(VAR_28, 0, &VAR_32, &VAR_33);
        FUNC_19(VAR_28, 0, &VAR_34, VAR_31);

        VAR_35 = FUNC_5(VAR_27, &VAR_29,
                VAR_17->sub_resources[VAR_18].size, VAR_1, VAR_7);
        VAR_36 = FUNC_5(VAR_27,
                &VAR_34, VAR_28->sub_resources[0].size, VAR_1, VAR_8);

        VAR_23->convert(VAR_35, VAR_36, VAR_25, VAR_32, VAR_30.width, VAR_30.height);

        FUNC_21(VAR_28, 0, ~VAR_31);
        FUNC_7(VAR_27, &VAR_34, VAR_1);
        FUNC_7(VAR_27, &VAR_29, VAR_1);
    }
    else
    {
        RECT VAR_37 = {0, 0, VAR_30.width, VAR_30.height};
        POINT VAR_38 = {0, 0};

        FUNC_3("Using upload conversion.\n");

        FUNC_23(VAR_28, VAR_27, VAR_0);
        FUNC_15(VAR_28, VAR_27, VAR_0);
        FUNC_14(VAR_28->sub_resources[0].u.surface, VAR_24, VAR_21,
                &VAR_37, VAR_25, &VAR_38, VAR_0, FUNC_12(&VAR_29));

        FUNC_24(VAR_28, 0, VAR_6);
        FUNC_21(VAR_28, 0, ~VAR_6);
    }

    if (VAR_27)
        FUNC_6(VAR_27);

    return VAR_28;
}
