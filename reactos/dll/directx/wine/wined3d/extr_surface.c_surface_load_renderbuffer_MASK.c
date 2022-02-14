
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int usage; int device; } ;
struct wined3d_texture {unsigned int level_count; TYPE_1__ resource; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_8__ {int locations; } ;
struct TYPE_7__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ RECT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct wined3d_context*,int ,struct wined3d_surface*,int,TYPE_2__ const*,struct wined3d_surface*,int,TYPE_2__ const*) ;
 TYPE_3__* FUNC_2 (struct wined3d_surface*) ;
 unsigned int FUNC_3 (struct wined3d_surface*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct wined3d_texture*,unsigned int) ;
 int FUNC_6 (struct wined3d_texture*,unsigned int) ;

__attribute__((used)) static BOOL FUNC_7(struct wined3d_surface *VAR_8, struct wined3d_context *VAR_9,
        DWORD VAR_10)
{
    struct wined3d_texture *VAR_11 = VAR_8->container;
    unsigned int VAR_12 = FUNC_3(VAR_8) % VAR_11->level_count;
    const RECT VAR_13 = {0, 0,
            FUNC_6(VAR_11, VAR_12),
            FUNC_5(VAR_11, VAR_12)};
    DWORD VAR_14 = FUNC_2(VAR_8)->locations;
    DWORD VAR_15;

    if (VAR_11->resource.usage & VAR_2)
    {
        FUNC_0("Unimplemented copy from %s for depth/stencil buffers.\n",
                FUNC_4(VAR_14));
        return VAR_0;
    }

    if (VAR_14 & VAR_3)
        VAR_15 = VAR_3;
    else if (VAR_14 & VAR_4)
        VAR_15 = VAR_4;
    else if (VAR_14 & VAR_6)
        VAR_15 = VAR_6;
    else
        VAR_15 = VAR_5;

    FUNC_1(VAR_11->resource.device, VAR_9, VAR_7,
            VAR_8, VAR_15, &VAR_13, VAR_8, VAR_10, &VAR_13);

    return VAR_1;
}
