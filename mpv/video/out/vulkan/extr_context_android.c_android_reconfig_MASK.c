
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; } ;


 int FUNC_0 (struct ra_ctx*,int,int) ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static bool FUNC_2(struct ra_ctx *VAR_0)
{
    int VAR_1, VAR_2;
    if (!FUNC_1(VAR_0->vo, &VAR_1, &VAR_2))
        return 0;

    FUNC_0(VAR_0, VAR_1, VAR_2);
    return 1;
}
