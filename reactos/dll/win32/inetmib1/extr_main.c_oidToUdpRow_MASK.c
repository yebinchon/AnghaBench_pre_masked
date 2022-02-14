
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int idLength; int * ids; } ;
struct TYPE_5__ {int dwLocalPort; int dwLocalAddr; } ;
typedef TYPE_1__ MIB_UDPROW ;
typedef TYPE_2__ AsnObjectIdentifier ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(AsnObjectIdentifier *VAR_0, void *VAR_1)
{
    MIB_UDPROW *VAR_2 = VAR_1;

    FUNC_0(VAR_0 && VAR_0->idLength >= 5);
    VAR_2->dwLocalAddr = FUNC_1(VAR_0);
    VAR_2->dwLocalPort = VAR_0->ids[4];
}
