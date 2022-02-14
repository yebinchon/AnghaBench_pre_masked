
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pCallback; } ;
struct TYPE_5__ {TYPE_1__ InetTransport; } ;
typedef TYPE_2__ POP3Transport ;
typedef int POP3RESPONSE ;
typedef int IPOP3Callback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,char*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(IInternetTransport *VAR_0, char *VAR_1, int VAR_2)
{
    POP3Transport *VAR_3 = (POP3Transport *)VAR_0;
    POP3RESPONSE VAR_4;
    HRESULT VAR_5;

    FUNC_3("\n");

    VAR_5 = FUNC_2(VAR_3, VAR_1, &VAR_4);
    if (FUNC_0(VAR_5))
    {

        return;
    }

    FUNC_1((IPOP3Callback *)VAR_3->InetTransport.pCallback, &VAR_4);
}
