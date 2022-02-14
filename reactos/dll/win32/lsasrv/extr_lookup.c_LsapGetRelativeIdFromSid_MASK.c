
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int SubAuthorityCount; int * SubAuthority; } ;
typedef TYPE_1__* PSID ;
typedef TYPE_1__* PISID ;



ULONG
FUNC_0(PSID VAR_0)
{
    PISID VAR_1 = VAR_0;

    if (VAR_1->SubAuthorityCount != 0)
        return VAR_1->SubAuthority[VAR_1->SubAuthorityCount - 1];

    return 0;
}
