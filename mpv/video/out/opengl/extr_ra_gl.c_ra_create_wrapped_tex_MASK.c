
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex_params {int dummy; } ;
struct ra_tex_gl {int texture; } ;
struct ra_tex {struct ra_tex_gl* priv; } ;
struct ra {int dummy; } ;
typedef int GLuint ;


 struct ra_tex* FUNC_0 (struct ra*,struct ra_tex_params const*) ;

struct ra_tex *FUNC_1(struct ra *VAR_0,
                                     const struct ra_tex_params *VAR_1,
                                     GLuint VAR_2)
{
    struct ra_tex *VAR_3 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_3)
        return ((void*)0);
    struct ra_tex_gl *VAR_4 = VAR_3->priv;
    VAR_4->texture = VAR_2;
    return VAR_3;
}
