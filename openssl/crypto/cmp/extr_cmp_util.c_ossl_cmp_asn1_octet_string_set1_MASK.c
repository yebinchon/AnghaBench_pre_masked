
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ASN1_OCTET_STRING ;


 int const* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(ASN1_OCTET_STRING **VAR_1,
                                    const ASN1_OCTET_STRING *VAR_2)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_2(0, VAR_0);
        return 0;
    }
    if (*VAR_1 == VAR_2)
        return 1;
    FUNC_1(*VAR_1);

    if (VAR_2 != ((void*)0)) {
        if ((*VAR_1 = FUNC_0(VAR_2)) == ((void*)0))
            return 0;
    } else {
        *VAR_1 = ((void*)0);
    }

    return 1;
}
