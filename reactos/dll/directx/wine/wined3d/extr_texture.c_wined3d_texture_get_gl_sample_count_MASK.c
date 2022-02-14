
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ multisample_type; int multisample_quality; struct wined3d_format* format; } ;
struct wined3d_texture {TYPE_1__ resource; } ;
struct wined3d_format {unsigned int multisample_types; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(const struct wined3d_texture *VAR_2)
{
    const struct wined3d_format *VAR_3 = VAR_2->resource.format;
    if (VAR_2->resource.multisample_type == VAR_1)
    {
        unsigned int VAR_4, VAR_5 = 0;

        for (VAR_4 = 0; VAR_4 < sizeof(VAR_3->multisample_types) * VAR_0; ++VAR_4)
        {
            if (VAR_3->multisample_types & 1u << VAR_4)
            {
                if (VAR_2->resource.multisample_quality == VAR_5++)
                    break;
            }
        }
        return VAR_4 + 1;
    }

    return VAR_2->resource.multisample_type;
}
