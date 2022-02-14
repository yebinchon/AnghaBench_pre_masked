
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_tex_gl {int type; int format; int fbo; } ;
struct ra_tex_download_params {int stride; int dst; struct ra_tex* tex; } ;
struct TYPE_2__ {int h; int w; } ;
struct ra_tex {TYPE_1__ params; struct ra_tex_gl* priv; } ;
struct ra {int dummy; } ;
typedef int GL ;


 int FUNC_0 (int *,int ,int,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_1 (struct ra*) ;

__attribute__((used)) static bool FUNC_2(struct ra *VAR_0, struct ra_tex_download_params *VAR_1)
{
    GL *VAR_2 = FUNC_1(VAR_0);
    struct ra_tex *VAR_3 = VAR_1->tex;
    struct ra_tex_gl *VAR_4 = VAR_3->priv;
    if (!VAR_4->fbo)
        return 0;
    return FUNC_0(VAR_2, VAR_4->fbo, 1, VAR_4->format, VAR_4->type,
                                VAR_3->params.w, VAR_3->params.h, VAR_1->dst,
                                VAR_1->stride);
}
