
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex {int priv; } ;
struct ra {int dummy; } ;
struct pl_tex {int dummy; } ;


 int FUNC_0 (struct ra*) ;
 int FUNC_1 (int ,struct pl_tex const**) ;
 int FUNC_2 (struct ra_tex*) ;

__attribute__((used)) static void FUNC_3(struct ra *VAR_0, struct ra_tex *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_1(FUNC_0(VAR_0), (const struct pl_tex **) &VAR_1->priv);
    FUNC_2(VAR_1);
}
