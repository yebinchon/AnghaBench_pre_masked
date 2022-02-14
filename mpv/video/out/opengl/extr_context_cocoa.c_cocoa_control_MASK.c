
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; } ;


 int VAR_0 ;
 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (int ,int*,int,void*) ;

__attribute__((used)) static int FUNC_2(struct ra_ctx *VAR_1, int *VAR_2, int VAR_3,
                         void *VAR_4)
{
    int VAR_5 = FUNC_1(VAR_1->vo, VAR_2, VAR_3, VAR_4);
    if (*VAR_2 & VAR_0)
        FUNC_0(VAR_1);
    return VAR_5;
}
