
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY_CTX *VAR_2,
                             const char *VAR_3, const char *VAR_4)
{
    if (FUNC_6(VAR_3, "dsa_paramgen_bits") == 0) {
        int VAR_5;
        VAR_5 = FUNC_5(VAR_4);
        return FUNC_1(VAR_2, VAR_5);
    }
    if (FUNC_6(VAR_3, "dsa_paramgen_q_bits") == 0) {
        int VAR_6 = FUNC_5(VAR_4);
        return FUNC_3(VAR_2, VAR_6);
    }
    if (FUNC_6(VAR_3, "dsa_paramgen_md") == 0) {
        const EVP_MD *VAR_7 = FUNC_4(VAR_4);

        if (VAR_7 == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        return FUNC_2(VAR_2, VAR_7);
    }
    return -2;
}
