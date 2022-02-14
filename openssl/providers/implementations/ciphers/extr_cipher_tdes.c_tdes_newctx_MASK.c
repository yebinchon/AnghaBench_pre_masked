
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void PROV_TDES_CTX ;
typedef int PROV_CIPHER_HW ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*,size_t,size_t,size_t,int,int ,int const*,void*) ;

void *FUNC_2(void *VAR_0, int VAR_1, size_t VAR_2, size_t VAR_3,
                  size_t VAR_4, uint64_t VAR_5, const PROV_CIPHER_HW *VAR_6)
{
    PROV_TDES_CTX *VAR_7 = FUNC_0(sizeof(*VAR_7));

    if (VAR_7 != ((void*)0))
        FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_1, VAR_5, VAR_6,
                               VAR_0);
    return VAR_7;
}
