
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int format; int device; } ;
struct wined3d_texture {unsigned int level_count; TYPE_2__ resource; TYPE_1__* sub_resources; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_7__ {int locations; } ;
typedef TYPE_3__ RECT ;
typedef int POINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,struct wined3d_surface*,int ,struct wined3d_surface*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct wined3d_context* FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct wined3d_context*) ;
 unsigned int FUNC_3 (struct wined3d_surface*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (struct wined3d_bo_address*) ;
 int FUNC_7 (struct wined3d_surface*,struct wined3d_gl_info const*,int ,TYPE_3__ const*,unsigned int,int const*,int ,int ) ;
 int FUNC_8 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 scalar_t__ FUNC_9 (struct wined3d_texture*,unsigned int) ;
 scalar_t__ FUNC_10 (struct wined3d_texture*,unsigned int) ;
 int FUNC_11 (struct wined3d_texture*,unsigned int,struct wined3d_bo_address*,int ) ;
 int FUNC_12 (struct wined3d_texture*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_13 (struct wined3d_texture*,unsigned int,int ) ;
 int FUNC_14 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;
 int FUNC_15 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_16 (struct wined3d_texture*,unsigned int,int ) ;

__attribute__((used)) static HRESULT FUNC_17(struct wined3d_surface *VAR_3, const POINT *VAR_4,
        struct wined3d_surface *VAR_5, const RECT *VAR_6)
{
    unsigned int VAR_7 = FUNC_3(VAR_5);
    unsigned int VAR_8 = FUNC_3(VAR_3);
    struct wined3d_texture *VAR_9 = VAR_5->container;
    struct wined3d_texture *VAR_10 = VAR_3->container;
    unsigned int VAR_11, VAR_12;
    const struct wined3d_gl_info *VAR_13;
    unsigned int VAR_14, VAR_15;
    struct wined3d_context *VAR_16;
    struct wined3d_bo_address VAR_17;
    UINT VAR_18, VAR_19;

    FUNC_0("dst_surface %p, dst_point %s, src_surface %p, src_rect %s.\n",
            VAR_3, FUNC_4(VAR_4),
            VAR_5, FUNC_5(VAR_6));

    VAR_16 = FUNC_1(VAR_10->resource.device, ((void*)0), 0);
    VAR_13 = VAR_16->gl_info;




    VAR_18 = VAR_6->right - VAR_6->left;
    VAR_19 = VAR_6->bottom - VAR_6->top;
    VAR_15 = VAR_8 % VAR_10->level_count;
    if (VAR_18 == FUNC_10(VAR_10, VAR_15)
            && VAR_19 == FUNC_9(VAR_10, VAR_15))
        FUNC_15(VAR_10, VAR_16, VAR_0);
    else
        FUNC_14(VAR_10, VAR_8, VAR_16, VAR_1);
    FUNC_8(VAR_10, VAR_16, VAR_0);

    VAR_14 = VAR_7 % VAR_9->level_count;
    FUNC_11(VAR_9, VAR_7, &VAR_17,
            VAR_9->sub_resources[VAR_7].locations);
    FUNC_12(VAR_9, VAR_14, &VAR_11, &VAR_12);

    FUNC_7(VAR_3, VAR_13, VAR_9->resource.format, VAR_6,
            VAR_11, VAR_4, VAR_0, FUNC_6(&VAR_17));

    FUNC_2(VAR_16);

    FUNC_16(VAR_10, VAR_8, VAR_1);
    FUNC_13(VAR_10, VAR_8, ~VAR_1);

    return VAR_2;
}
