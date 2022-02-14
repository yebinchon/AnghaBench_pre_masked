
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_CTX ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int *) ;
 long FUNC_2 (int *,unsigned char**) ;

__attribute__((used)) static unsigned char *FUNC_3(const char *VAR_0, X509V3_CTX *VAR_1,
                                   long *VAR_2)
{
    ASN1_TYPE *VAR_3;
    unsigned char *VAR_4 = ((void*)0);
    VAR_3 = FUNC_1(VAR_0, VAR_1);
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    *VAR_2 = FUNC_2(VAR_3, &VAR_4);
    FUNC_0(VAR_3);
    return VAR_4;
}
