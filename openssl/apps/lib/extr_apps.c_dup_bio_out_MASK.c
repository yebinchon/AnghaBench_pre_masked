
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 () ;
 void* FUNC_7 (char*) ;
 int VAR_3 ;

BIO *FUNC_8(int VAR_4)
{
    BIO *VAR_5 = FUNC_3(VAR_3,
                        VAR_1 | (FUNC_5(VAR_4) ? VAR_0 : 0));
    void *VAR_6 = ((void*)0);






    if (FUNC_5(VAR_4)
        && (VAR_6 = FUNC_7("HARNESS_OSSL_PREFIX")) != ((void*)0)) {
        VAR_5 = FUNC_4(FUNC_2(FUNC_6()), VAR_5);
        FUNC_0(VAR_5, VAR_2, 0, VAR_6);
    }

    return VAR_5;
}
