
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(IInternetTransport *VAR_2, char *VAR_3, int VAR_4)
{
    POP3Transport *VAR_5 = (POP3Transport *)VAR_2;
    POP3RESPONSE VAR_6;
    HRESULT VAR_7;

    FUNC_4("\n");

    VAR_7 = FUNC_3(VAR_5, VAR_3, &VAR_6);
    if (FUNC_0(VAR_7))
    {

        return;
    }

    FUNC_2(&VAR_5->InetTransport, VAR_0);
    FUNC_2(&VAR_5->InetTransport, VAR_1);

    FUNC_1((IPOP3Callback *)VAR_5->InetTransport.pCallback, &VAR_6);
}
