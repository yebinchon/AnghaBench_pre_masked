
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int access; int usage; TYPE_1__* format; } ;
struct wined3d_texture {int flags; TYPE_2__ resource; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct TYPE_3__ {int conv_byte_count; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_texture *VAR_5, const struct wined3d_gl_info *VAR_6)
{
    return !(VAR_5->resource.access & VAR_2)
            && VAR_5->resource.usage & VAR_1
            && VAR_6->supported[VAR_0]
            && !VAR_5->resource.format->conv_byte_count
            && !(VAR_5->flags & (VAR_4 | VAR_3));
}
