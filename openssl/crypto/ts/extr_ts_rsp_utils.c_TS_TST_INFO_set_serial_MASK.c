
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* serial; } ;
typedef TYPE_1__ TS_TST_INFO ;
typedef int const ASN1_INTEGER ;


 int const* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(TS_TST_INFO *VAR_2, const ASN1_INTEGER *VAR_3)
{
    ASN1_INTEGER *VAR_4;

    if (VAR_2->serial == VAR_3)
        return 1;
    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    FUNC_1(VAR_2->serial);
    VAR_2->serial = VAR_4;
    return 1;
}
