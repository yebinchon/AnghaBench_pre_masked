
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ServiceName; TYPE_1__* ClientName; } ;
struct TYPE_6__ {scalar_t__ NameType; int NameCount; } ;
struct TYPE_5__ {scalar_t__ NameType; int NameCount; } ;
typedef TYPE_3__* PKIWI_KERBEROS_TICKET ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

BOOL FUNC_0(PKIWI_KERBEROS_TICKET VAR_2)
{
 return VAR_2 && (VAR_2->ClientName) && (VAR_2->ClientName->NameType == VAR_0) && (VAR_2->ClientName->NameCount == 1) && (VAR_2->ServiceName) && ((VAR_2->ServiceName->NameType >= VAR_0) && (VAR_2->ServiceName->NameType <= VAR_1)) && (VAR_2->ServiceName->NameCount > 1);
}
