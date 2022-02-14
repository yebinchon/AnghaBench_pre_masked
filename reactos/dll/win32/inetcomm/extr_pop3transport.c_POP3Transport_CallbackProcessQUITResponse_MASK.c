
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pCallback; } ;
struct TYPE_4__ {TYPE_3__ InetTransport; } ;
typedef TYPE_1__ POP3Transport ;
typedef int POP3RESPONSE ;
typedef int IPOP3Callback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,char*,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(IInternetTransport *VAR_0, char *VAR_1, int VAR_2)
{
    POP3Transport *VAR_3 = (POP3Transport *)VAR_0;
    POP3RESPONSE VAR_4;
    HRESULT VAR_5;

    FUNC_4("%s\n", FUNC_5(VAR_1, VAR_2));

    VAR_5 = FUNC_3(VAR_3, VAR_1, &VAR_4);
    if (FUNC_0(VAR_5))
    {

        return;
    }

    FUNC_1((IPOP3Callback *)VAR_3->InetTransport.pCallback, &VAR_4);
    FUNC_2(&VAR_3->InetTransport);
}
