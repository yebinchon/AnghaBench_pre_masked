
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int format; } ;
struct wined3d_texture {unsigned int level_count; TYPE_3__ resource; TYPE_2__* sub_resources; } ;
struct wined3d_context {int gl_info; } ;
struct wined3d_const_bo_address {int dummy; } ;
struct wined3d_box {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_12__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_11__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_8__ {int surface; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ POINT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_4__*,unsigned int,TYPE_5__*,int ,struct wined3d_const_bo_address const*) ;
 scalar_t__ FUNC_1 (struct wined3d_texture*,unsigned int) ;
 scalar_t__ FUNC_2 (struct wined3d_texture*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_texture *VAR_1, unsigned int VAR_2,
        const struct wined3d_context *VAR_3, const struct wined3d_box *VAR_4,
        const struct wined3d_const_bo_address *VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
    unsigned int VAR_8;
    POINT VAR_9;
    RECT VAR_10;

    VAR_10.left = 0;
    VAR_10.top = 0;
    if (VAR_4)
    {
        VAR_9.x = VAR_4->left;
        VAR_9.y = VAR_4->top;
        VAR_10.right = VAR_4->right - VAR_4->left;
        VAR_10.bottom = VAR_4->bottom - VAR_4->top;
    }
    else
    {
        VAR_9.x = VAR_9.y = 0;
        VAR_8 = VAR_2 % VAR_1->level_count;
        VAR_10.right = FUNC_2(VAR_1, VAR_8);
        VAR_10.bottom = FUNC_1(VAR_1, VAR_8);
    }

    FUNC_0(VAR_1->sub_resources[VAR_2].u.surface, VAR_3->gl_info,
            VAR_1->resource.format, &VAR_10, VAR_6, &VAR_9, VAR_0, VAR_5);
}
