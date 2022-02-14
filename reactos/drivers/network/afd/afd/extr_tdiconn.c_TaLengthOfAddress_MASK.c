
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ AddressLength; } ;
typedef TYPE_1__* PTA_ADDRESS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

UINT FUNC_1( PTA_ADDRESS VAR_1 )
{
    UINT VAR_2 = VAR_1->AddressLength;

    if (!VAR_2)
        return 0;

    VAR_2 += 2 * sizeof( USHORT );

    FUNC_0(VAR_0,("AddrLen %x\n", VAR_2));

    return VAR_2;
}
