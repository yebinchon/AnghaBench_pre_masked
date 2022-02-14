
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* format; } ;
struct wined3d_texture {unsigned int level_count; int flags; int target; TYPE_2__ resource; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_color_key {int dummy; } ;
struct wined3d_blitter {TYPE_3__* ops; struct wined3d_blitter* next; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
struct TYPE_13__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_12__ {int (* blitter_blit ) (struct wined3d_blitter*,int,struct wined3d_context*,struct wined3d_surface*,int,TYPE_4__ const*,struct wined3d_surface*,int,TYPE_4__ const*,struct wined3d_color_key const*,int) ;} ;
struct TYPE_10__ {scalar_t__ id; } ;
typedef TYPE_4__ RECT ;
typedef int GLuint ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,unsigned int,scalar_t__,scalar_t__,unsigned int,int ,int ,unsigned int,scalar_t__,scalar_t__,unsigned int,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct wined3d_blitter*,int,struct wined3d_context*,struct wined3d_surface*,int,TYPE_4__ const*,struct wined3d_surface*,int,TYPE_4__ const*,struct wined3d_color_key const*,int) ;
 unsigned int FUNC_6 (struct wined3d_surface*) ;
 scalar_t__ FUNC_7 (struct wined3d_texture*,unsigned int,TYPE_4__ const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct wined3d_texture*,struct wined3d_context*,int) ;
 int FUNC_10 (struct wined3d_texture*,unsigned int,int) ;
 int FUNC_11 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int) ;
 int FUNC_12 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int) ;
 int FUNC_13 (struct wined3d_texture*,unsigned int,int) ;

__attribute__((used)) static DWORD FUNC_14(struct wined3d_blitter *VAR_4, enum wined3d_blit_op VAR_5,
        struct wined3d_context *VAR_6, struct wined3d_surface *VAR_7, DWORD VAR_8,
        const RECT *VAR_9, struct wined3d_surface *VAR_10, DWORD VAR_11, const RECT *VAR_12,
        const struct wined3d_color_key *VAR_13, enum wined3d_texture_filter_type VAR_14)
{
    const struct wined3d_gl_info *VAR_15 = VAR_6->gl_info;
    unsigned int VAR_16, VAR_17;
    unsigned int VAR_18, VAR_19, VAR_20, VAR_21;
    struct wined3d_texture *VAR_22, *VAR_23;
    struct wined3d_blitter *VAR_24;
    GLuint VAR_25, VAR_26;
    DWORD VAR_27;

    VAR_22 = VAR_7->container;
    VAR_23 = VAR_10->container;




    if (VAR_5 != VAR_0
            || (VAR_22->resource.format->id == VAR_23->resource.format->id
            && (!(VAR_8 & (VAR_1 | VAR_2))
            || !(VAR_11 & (VAR_1 | VAR_2)))))
    {
        if (!(VAR_24 = VAR_4->next))
        {
            FUNC_0("No blitter to handle blit op %#x.\n", VAR_5);
            return VAR_11;
        }

        FUNC_2("Forwarding to blitter %p.\n", VAR_24);
        return VAR_24->ops->blitter_blit(VAR_24, VAR_5, VAR_6, VAR_7, VAR_8,
                VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    }

    FUNC_2("Blit using ARB_copy_image.\n");

    VAR_16 = FUNC_6(VAR_7);
    VAR_18 = VAR_16 % VAR_22->level_count;
    VAR_19 = VAR_16 / VAR_22->level_count;

    VAR_17 = FUNC_6(VAR_10);
    VAR_20 = VAR_17 % VAR_23->level_count;
    VAR_21 = VAR_17 / VAR_23->level_count;

    VAR_27 = VAR_8 & (VAR_1 | VAR_2);
    if (!VAR_27)
        VAR_27 = VAR_22->flags & VAR_3
                ? VAR_2 : VAR_1;
    if (!FUNC_11(VAR_22, VAR_16, VAR_6, VAR_27))
        FUNC_0("Failed to load the source sub-resource into %s.\n", FUNC_8(VAR_27));
    VAR_25 = FUNC_9(VAR_22, VAR_6, VAR_27 == VAR_2);

    VAR_27 = VAR_11 & (VAR_1 | VAR_2);
    if (!VAR_27)
        VAR_27 = VAR_23->flags & VAR_3
                ? VAR_2 : VAR_1;
    if (FUNC_7(VAR_23, VAR_20, VAR_12))
    {
        if (!FUNC_12(VAR_23, VAR_17, VAR_6, VAR_27))
            FUNC_0("Failed to prepare the destination sub-resource into %s.\n", FUNC_8(VAR_27));
    }
    else
    {
        if (!FUNC_11(VAR_23, VAR_17, VAR_6, VAR_27))
            FUNC_0("Failed to load the destination sub-resource into %s.\n", FUNC_8(VAR_27));
    }
    VAR_26 = FUNC_9(VAR_23, VAR_6, VAR_27 == VAR_2);

    FUNC_1(FUNC_4(VAR_25, VAR_22->target, VAR_18,
            VAR_9->left, VAR_9->top, VAR_19, VAR_26, VAR_23->target, VAR_20,
            VAR_12->left, VAR_12->top, VAR_21, VAR_9->right - VAR_9->left,
            VAR_9->bottom - VAR_9->top, 1));
    FUNC_3("copy image data");

    FUNC_13(VAR_23, VAR_17, VAR_27);
    FUNC_10(VAR_23, VAR_17, ~VAR_27);
    if (!FUNC_11(VAR_23, VAR_17, VAR_6, VAR_11))
        FUNC_0("Failed to load the destination sub-resource into %s.\n", FUNC_8(VAR_11));

    return VAR_11 | VAR_27;
}
