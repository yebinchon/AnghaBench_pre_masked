
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ PreviousServerState; scalar_t__ OperationState; } ;
typedef TYPE_1__* PDSROLE_UPGRADE_STATUS_INFO ;
typedef scalar_t__ PDSROLER_PRIMARY_DOMAIN_INFORMATION ;
typedef int NET_API_STATUS ;
typedef int DSROLE_UPGRADE_STATUS_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static
NET_API_STATUS
FUNC_1(
    PDSROLER_PRIMARY_DOMAIN_INFORMATION *VAR_2)
{
    PDSROLE_UPGRADE_STATUS_INFO VAR_3;

    VAR_3 = FUNC_0(sizeof(DSROLE_UPGRADE_STATUS_INFO));
    if (VAR_3 == ((void*)0))
        return VAR_0;

    VAR_3->OperationState = 0;
    VAR_3->PreviousServerState = 0;

    *VAR_2 = (PDSROLER_PRIMARY_DOMAIN_INFORMATION)VAR_3;

    return VAR_1;
}
