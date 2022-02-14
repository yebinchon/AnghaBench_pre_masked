
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int format_flags; } ;
struct wined3d_texture {TYPE_1__ resource; } ;
struct wined3d_context {TYPE_3__* d3d_info; TYPE_2__* gl_info; } ;
struct TYPE_6__ {int wined3d_creation_flags; } ;
struct TYPE_5__ {int * supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_context *VAR_4,
        const struct wined3d_texture *VAR_5)
{
    unsigned int VAR_6 = VAR_5->resource.format_flags
            & (VAR_1 | VAR_2);

    return (!VAR_4->gl_info->supported[VAR_0]
            || (VAR_6 && VAR_6 != (VAR_1 | VAR_2)))
            && VAR_4->d3d_info->wined3d_creation_flags & VAR_3;
}
