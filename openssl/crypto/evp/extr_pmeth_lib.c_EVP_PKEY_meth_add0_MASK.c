
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_METHOD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;

int FUNC_4(const EVP_PKEY_METHOD *VAR_4)
{
    if (VAR_2 == ((void*)0)) {
        VAR_2 = FUNC_1(VAR_3);
        if (VAR_2 == ((void*)0)){
            FUNC_0(VAR_1, VAR_0);
            return 0;
        }
    }
    if (!FUNC_2(VAR_2, VAR_4)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    FUNC_3(VAR_2);
    return 1;
}
