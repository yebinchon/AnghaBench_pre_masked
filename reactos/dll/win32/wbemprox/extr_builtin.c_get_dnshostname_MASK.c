
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int iSockaddrLength; int lpSockaddr; } ;
struct TYPE_5__ {TYPE_1__ Address; } ;
typedef TYPE_1__ SOCKET_ADDRESS ;
typedef TYPE_2__ IP_ADAPTER_UNICAST_ADDRESS ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static WCHAR *FUNC_3( IP_ADAPTER_UNICAST_ADDRESS *VAR_2 )
{
    const SOCKET_ADDRESS *VAR_3 = &VAR_2->Address;
    WCHAR VAR_4[VAR_0];

    if (!VAR_2) return ((void*)0);
    if (FUNC_1( VAR_3->lpSockaddr, VAR_3->iSockaddrLength, VAR_4, FUNC_0( VAR_4 ), ((void*)0),
                      0, VAR_1 )) return ((void*)0);
    return FUNC_2( VAR_4 );
}
