
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_STRING ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;

ASN1_STRING *FUNC_3(const ASN1_STRING *VAR_0)
{
    ASN1_STRING *VAR_1;
    if (!VAR_0)
        return ((void*)0);
    VAR_1 = FUNC_2();
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    if (!FUNC_0(VAR_1, VAR_0)) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
