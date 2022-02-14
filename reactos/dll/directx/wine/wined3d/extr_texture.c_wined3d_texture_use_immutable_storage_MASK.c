
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format_flags; } ;
struct wined3d_texture {TYPE_1__ resource; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_texture *VAR_2,
        const struct wined3d_gl_info *VAR_3)
{


    return VAR_3->supported[VAR_0]
            && !(VAR_2->resource.format_flags & VAR_1);
}
