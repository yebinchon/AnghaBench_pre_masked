
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 int ** FUNC_2 (int *) ;

int FUNC_3(CMS_ContentInfo *VAR_0, const ASN1_OBJECT *VAR_1)
{
    ASN1_OBJECT **VAR_2, *VAR_3;

    VAR_2 = FUNC_2(VAR_0);
    if (VAR_2 == ((void*)0))
        return 0;
    if (VAR_1 == ((void*)0))
        return 1;
    VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0))
        return 0;
    FUNC_0(*VAR_2);
    *VAR_2 = VAR_3;
    return 1;
}
