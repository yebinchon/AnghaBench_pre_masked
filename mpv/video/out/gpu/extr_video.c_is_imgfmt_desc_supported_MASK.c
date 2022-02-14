
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_imgfmt_desc {TYPE_1__** planes; int num_planes; } ;
struct gl_video {scalar_t__ forced_dumb_mode; } ;
struct TYPE_2__ {scalar_t__ ctype; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct gl_video *VAR_1,
                                     const struct ra_imgfmt_desc *VAR_2)
{
    if (!VAR_2->num_planes)
        return 0;

    if (VAR_2->planes[0]->ctype == VAR_0 && VAR_1->forced_dumb_mode)
        return 0;

    return 1;
}
