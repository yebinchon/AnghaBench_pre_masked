
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; } ;
struct wined3d_texture {TYPE_1__ resource; } ;


 unsigned int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct wined3d_texture *VAR_0,
        unsigned int VAR_1)
{
    return FUNC_0(1, VAR_0->resource.width >> VAR_1);
}
