
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* millis; } ;
typedef TYPE_1__ TS_ACCURACY ;
typedef int const ASN1_INTEGER ;


 int const* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(TS_ACCURACY *VAR_2, const ASN1_INTEGER *VAR_3)
{
    ASN1_INTEGER *VAR_4 = ((void*)0);

    if (VAR_2->millis == VAR_3)
        return 1;
    if (VAR_3 != ((void*)0)) {
        VAR_4 = FUNC_0(VAR_3);
        if (VAR_4 == ((void*)0)) {
            FUNC_2(VAR_1, VAR_0);
            return 0;
        }
    }
    FUNC_1(VAR_2->millis);
    VAR_2->millis = VAR_4;
    return 1;
}
