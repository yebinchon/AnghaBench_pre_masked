
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_rendertarget_view {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ id; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(unsigned int VAR_3, struct wined3d_rendertarget_view * const *VAR_4,
        const struct wined3d_rendertarget_view *VAR_5)
{
    unsigned int VAR_6;

    if (VAR_5)
        return VAR_1;

    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6)
    {
        if (VAR_4[VAR_6] && VAR_4[VAR_6]->format->id != VAR_2)
            return VAR_1;
    }

    return VAR_0;
}
