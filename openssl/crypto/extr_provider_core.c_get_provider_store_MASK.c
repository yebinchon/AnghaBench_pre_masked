
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct provider_store_st {int dummy; } ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct provider_store_st* FUNC_1 (int *,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static struct provider_store_st *FUNC_2(OPENSSL_CTX *VAR_4)
{
    struct provider_store_st *VAR_5 = ((void*)0);

    VAR_5 = FUNC_1(VAR_4, VAR_2,
                                 &VAR_3);
    if (VAR_5 == ((void*)0))
        FUNC_0(VAR_0, VAR_1);
    return VAR_5;
}
