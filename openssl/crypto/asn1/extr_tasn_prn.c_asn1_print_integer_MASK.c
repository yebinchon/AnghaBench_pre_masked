
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_INTEGER ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int const*) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, const ASN1_INTEGER *VAR_1)
{
    char *VAR_2;
    int VAR_3 = 1;
    VAR_2 = FUNC_2(((void*)0), VAR_1);
    if (VAR_2 == ((void*)0))
        return 0;
    if (FUNC_0(VAR_0, VAR_2) <= 0)
        VAR_3 = 0;
    FUNC_1(VAR_2);
    return VAR_3;
}
