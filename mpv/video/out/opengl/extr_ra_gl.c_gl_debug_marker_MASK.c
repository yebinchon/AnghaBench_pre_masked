
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_gl {int gl; scalar_t__ debug_enable; } ;
struct ra {int log; struct ra_gl* priv; } ;


 int FUNC_0 (int ,int ,char const*) ;

__attribute__((used)) static void FUNC_1(struct ra *VAR_0, const char *VAR_1)
{
    struct ra_gl *VAR_2 = VAR_0->priv;

    if (VAR_2->debug_enable)
        FUNC_0(VAR_2->gl, VAR_0->log, VAR_1);
}
