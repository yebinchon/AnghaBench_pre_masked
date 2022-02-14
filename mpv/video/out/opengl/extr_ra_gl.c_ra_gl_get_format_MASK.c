
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {struct gl_format* priv; } ;
struct gl_format {int type; int format; int internal_format; } ;
typedef int GLint ;
typedef int GLenum ;



void FUNC_0(const struct ra_format *VAR_0, GLint *VAR_1,
                      GLenum *VAR_2, GLenum *VAR_3)
{
    const struct gl_format *VAR_4 = VAR_0->priv;
    *VAR_1 = VAR_4->internal_format;
    *VAR_2 = VAR_4->format;
    *VAR_3 = VAR_4->type;
}
