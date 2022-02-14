
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__** shader; } ;
struct wined3d_context {int fixed_function_usage_map; } ;
typedef int WORD ;
struct TYPE_5__ {TYPE_1__* resource_info; } ;
struct TYPE_6__ {TYPE_2__ reg_maps; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct wined3d_context*,struct wined3d_state const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct wined3d_state const*) ;
 scalar_t__ FUNC_2 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5)
{
    unsigned int VAR_6;

    if (FUNC_2(VAR_5))
    {
        for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
        {
            if (VAR_5->shader[VAR_3]->reg_maps.resource_info[VAR_6].type)
                FUNC_0(VAR_4, VAR_5, VAR_0 + VAR_6);
        }
    }

    if (FUNC_1(VAR_5))
    {
        for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
        {
            if (VAR_5->shader[VAR_2]->reg_maps.resource_info[VAR_6].type)
                FUNC_0(VAR_4, VAR_5, VAR_6);
        }
    }
    else
    {
        WORD VAR_7 = VAR_4->fixed_function_usage_map;

        for (VAR_6 = 0; VAR_7; VAR_7 >>= 1, ++VAR_6)
        {
            if (VAR_7 & 1)
                FUNC_0(VAR_4, VAR_5, VAR_6);
        }
    }
}
