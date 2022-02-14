
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_tex_params {int dummy; } ;
struct ra_tex {int dummy; } ;
struct ra {TYPE_1__* fns; } ;
struct TYPE_2__ {struct ra_tex* (* tex_create ) (struct ra*,struct ra_tex_params const*) ;} ;


 struct ra_tex* FUNC_0 (struct ra*,struct ra_tex_params const*) ;

struct ra_tex *FUNC_1(struct ra *VAR_0, const struct ra_tex_params *VAR_1)
{
    return VAR_0->fns->tex_create(VAR_0, VAR_1);
}
