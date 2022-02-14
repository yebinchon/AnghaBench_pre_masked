
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage; } ;
struct wined3d_texture {unsigned int level_count; int const target; TYPE_1__ resource; } ;
typedef int const GLenum ;
 int VAR_0 ;

__attribute__((used)) static inline GLenum FUNC_0(const struct wined3d_texture *VAR_1,
        unsigned int VAR_2)
{
    static const GLenum VAR_3[] =
    {
        130,
        133,
        129,
        132,
        128,
        131,
    };

    return VAR_1->resource.usage & VAR_0
            ? VAR_3[VAR_2 / VAR_1->level_count] : VAR_1->target;
}
