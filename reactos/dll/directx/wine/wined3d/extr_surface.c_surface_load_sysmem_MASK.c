
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int locations; } ;
struct TYPE_2__ {int usage; int draw_binding; } ;
struct wined3d_texture {TYPE_1__ resource; int download_count; struct wined3d_texture_sub_resource* sub_resources; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,struct wined3d_surface*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct wined3d_texture*,int) ;
 int FUNC_2 (struct wined3d_surface*,struct wined3d_context*,int,int ) ;
 int FUNC_3 (struct wined3d_surface*,struct wined3d_gl_info const*,int ) ;
 unsigned int FUNC_4 (struct wined3d_surface*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct wined3d_texture*,struct wined3d_context*,int) ;
 int FUNC_7 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int) ;
 int FUNC_8 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;

__attribute__((used)) static BOOL FUNC_9(struct wined3d_surface *VAR_8,
        struct wined3d_context *VAR_9, DWORD VAR_10)
{
    unsigned int VAR_11 = FUNC_4(VAR_8);
    const struct wined3d_gl_info *VAR_12 = VAR_9->gl_info;
    struct wined3d_texture *VAR_13 = VAR_8->container;
    struct wined3d_texture_sub_resource *VAR_14;

    VAR_14 = &VAR_13->sub_resources[VAR_11];
    FUNC_8(VAR_13, VAR_11, VAR_9, VAR_10);


    if (FUNC_1(VAR_13, VAR_6))
    {
        FUNC_7(VAR_13, VAR_11, VAR_9, VAR_5);
        FUNC_2(VAR_8, VAR_9, VAR_5, VAR_10);
        return VAR_1;
    }
    else
    {
        if (VAR_14->locations & (VAR_4 | VAR_5))
            FUNC_7(VAR_13, VAR_11, VAR_9, VAR_6);


        if (VAR_14->locations & (VAR_6 | VAR_7))
        {
            FUNC_6(VAR_13, VAR_9,
                    !(VAR_14->locations & VAR_6));
            FUNC_3(VAR_8, VAR_12, VAR_10);
            ++VAR_13->download_count;

            return VAR_1;
        }
    }

    if (!(VAR_13->resource.usage & VAR_2)
            && (VAR_14->locations & VAR_3))
    {
        FUNC_2(VAR_8, VAR_9, VAR_13->resource.draw_binding, VAR_10);
        return VAR_1;
    }

    FUNC_0("Can't load surface %p with location flags %s into sysmem.\n",
            VAR_8, FUNC_5(VAR_14->locations));
    return VAR_0;
}
