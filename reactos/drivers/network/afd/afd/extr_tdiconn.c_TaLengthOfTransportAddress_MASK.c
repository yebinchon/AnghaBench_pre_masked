
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int * Address; } ;
typedef TYPE_1__* PTRANSPORT_ADDRESS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

UINT FUNC_2( PTRANSPORT_ADDRESS VAR_1 )
{
    UINT VAR_2 = FUNC_1(&VAR_1->Address[0]);

    if (!VAR_2)
        return 0;

    VAR_2 += sizeof(ULONG);

    FUNC_0(VAR_0,("AddrLen %x\n", VAR_2));

    return VAR_2;
}
