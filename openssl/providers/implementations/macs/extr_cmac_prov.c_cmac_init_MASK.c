
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmac_data_st {int cipher; int ctx; } ;


 int FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
    struct cmac_data_st *VAR_1 = VAR_0;
    int VAR_2 = FUNC_0(VAR_1->ctx, ((void*)0), 0,
                       FUNC_1(&VAR_1->cipher),
                       FUNC_2(&VAR_1->cipher));

    FUNC_3(&VAR_1->cipher);
    return VAR_2;
}
