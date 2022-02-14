
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_data_st {int digest; int ctx; } ;
typedef int EVP_MD ;


 int FUNC_0 (int ,int *,int ,int const*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
    struct hmac_data_st *VAR_1 = VAR_0;
    const EVP_MD *VAR_2 = FUNC_2(&VAR_1->digest);
    int VAR_3 = 1;


    if (VAR_2 != ((void*)0))
        VAR_3 = FUNC_0(VAR_1->ctx, ((void*)0), 0, VAR_2,
                          FUNC_1(&VAR_1->digest));
    FUNC_3(&VAR_1->digest);
    return VAR_3;
}
