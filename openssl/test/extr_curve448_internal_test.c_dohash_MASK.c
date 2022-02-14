
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int hashout ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static const uint8_t *FUNC_4(EVP_MD_CTX *VAR_0, const uint8_t *VAR_1,
                             size_t VAR_2)
{
    static uint8_t VAR_3[64];

    if (!FUNC_1(VAR_0, FUNC_3(), ((void*)0))
            || !FUNC_2(VAR_0, VAR_1, VAR_2)
            || !FUNC_0(VAR_0, VAR_3, sizeof(VAR_3)))
        return ((void*)0);

    return VAR_3;
}
