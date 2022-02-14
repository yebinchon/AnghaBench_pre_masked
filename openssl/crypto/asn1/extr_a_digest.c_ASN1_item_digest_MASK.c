
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int ASN1_ITEM ;


 int FUNC_0 (void*,unsigned char**,int const*) ;
 int FUNC_1 (unsigned char*,int,unsigned char*,unsigned int*,int const*,int *) ;
 int FUNC_2 (unsigned char*) ;

int FUNC_3(const ASN1_ITEM *VAR_0, const EVP_MD *VAR_1, void *VAR_2,
                     unsigned char *VAR_3, unsigned int *VAR_4)
{
    int VAR_5;
    unsigned char *VAR_6 = ((void*)0);

    VAR_5 = FUNC_0(VAR_2, &VAR_6, VAR_0);
    if (!VAR_6)
        return 0;

    if (!FUNC_1(VAR_6, VAR_5, VAR_3, VAR_4, VAR_1, ((void*)0))) {
        FUNC_2(VAR_6);
        return 0;
    }
    FUNC_2(VAR_6);
    return 1;
}
