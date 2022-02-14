
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int OperationState; } ;
typedef TYPE_1__* PDSROLE_OPERATION_STATE_INFO ;
typedef scalar_t__ PDSROLER_PRIMARY_DOMAIN_INFORMATION ;
typedef int NET_API_STATUS ;
typedef int DSROLE_OPERATION_STATE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static
NET_API_STATUS
FUNC_1(
    PDSROLER_PRIMARY_DOMAIN_INFORMATION *VAR_3)
{
    PDSROLE_OPERATION_STATE_INFO VAR_4;

    VAR_4 = FUNC_0(sizeof(DSROLE_OPERATION_STATE_INFO));
    if (VAR_4 == ((void*)0))
        return VAR_1;

    VAR_4->OperationState = VAR_0;

    *VAR_3 = (PDSROLER_PRIMARY_DOMAIN_INFORMATION)VAR_4;

    return VAR_2;
}
