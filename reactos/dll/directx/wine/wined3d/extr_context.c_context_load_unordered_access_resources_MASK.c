
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_unordered_access_view {TYPE_1__* resource; } ;
struct wined3d_texture {int dummy; } ;
struct wined3d_shader {int dummy; } ;
struct wined3d_context {int uses_uavs; } ;
struct wined3d_buffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct wined3d_buffer* FUNC_0 (TYPE_1__*) ;
 struct wined3d_texture* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct wined3d_buffer*,struct wined3d_context*,int ) ;
 int FUNC_3 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_4 (struct wined3d_unordered_access_view*,int ) ;

__attribute__((used)) static void FUNC_5(struct wined3d_context *VAR_5,
        const struct wined3d_shader *VAR_6, struct wined3d_unordered_access_view * const *VAR_7)
{
    struct wined3d_unordered_access_view *VAR_8;
    struct wined3d_texture *VAR_9;
    struct wined3d_buffer *VAR_10;
    unsigned int VAR_11;

    VAR_5->uses_uavs = 0;

    if (!VAR_6)
        return;

    for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11)
    {
        if (!(VAR_8 = VAR_7[VAR_11]))
            continue;

        if (VAR_8->resource->type == VAR_4)
        {
            VAR_10 = FUNC_0(VAR_8->resource);
            FUNC_2(VAR_10, VAR_5, VAR_2);
            FUNC_4(VAR_8, ~VAR_2);
        }
        else
        {
            VAR_9 = FUNC_1(VAR_8->resource);
            FUNC_3(VAR_9, VAR_5, VAR_0);
            FUNC_4(VAR_8, ~VAR_3);
        }

        VAR_5->uses_uavs = 1;
    }
}
