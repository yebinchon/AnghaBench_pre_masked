
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zimg_opts {int dummy; } ;
struct mp_zimg_context {struct zimg_opts opts; TYPE_1__* opts_cache; } ;
struct TYPE_2__ {struct zimg_opts* opts; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct mp_zimg_context *VAR_0)
{
    FUNC_0(VAR_0->opts_cache);

    struct zimg_opts *VAR_1 = VAR_0->opts_cache->opts;
    VAR_0->opts = *VAR_1;
}
