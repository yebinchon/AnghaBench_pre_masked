
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(ASN1_OCTET_STRING **VAR_1,
                                          const unsigned char *VAR_2, int VAR_3)
{
    ASN1_OCTET_STRING *VAR_4 = ((void*)0);

    if (VAR_1 == ((void*)0)) {
        FUNC_3(0, VAR_0);
        return 0;
    }
    if (VAR_2 != ((void*)0)) {
        if ((VAR_4 = FUNC_1()) == ((void*)0)
                || !(FUNC_2(VAR_4, VAR_2, VAR_3))) {
            FUNC_0(VAR_4);
            return 0;
        }
    }

    FUNC_0(*VAR_1);
    *VAR_1 = VAR_4;
    return 1;
}
