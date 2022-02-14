
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_gl {int * gl; } ;
struct ra {struct ra_gl* priv; } ;
typedef int GL ;



GL *FUNC_0(struct ra *VAR_0)
{
    struct ra_gl *VAR_1 = VAR_0->priv;
    return VAR_1->gl;
}
