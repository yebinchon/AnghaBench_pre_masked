
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex_gl {int target; int texture; } ;
struct ra_tex {struct ra_tex_gl* priv; } ;
struct ra {int dummy; } ;
typedef int GLuint ;
typedef int GLenum ;



void FUNC_0(struct ra *VAR_0, struct ra_tex *VAR_1,
                       GLuint *VAR_2, GLenum *VAR_3)
{
    struct ra_tex_gl *VAR_4 = VAR_1->priv;
    *VAR_2 = VAR_4->texture;
    *VAR_3 = VAR_4->target;
}
