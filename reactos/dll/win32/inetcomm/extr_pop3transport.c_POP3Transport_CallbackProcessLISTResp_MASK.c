
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pCallback; } ;
struct TYPE_8__ {int fDone; } ;
struct TYPE_7__ {TYPE_5__ InetTransport; } ;
typedef TYPE_1__ POP3Transport ;
typedef TYPE_2__ POP3RESPONSE ;
typedef int IPOP3Callback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*,void (*) (int *,char*,int)) ;
 int FUNC_3 (TYPE_1__*,char*,TYPE_2__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(IInternetTransport *VAR_0, char *VAR_1, int VAR_2)
{
    POP3Transport *VAR_3 = (POP3Transport *)VAR_0;
    POP3RESPONSE VAR_4;
    HRESULT VAR_5;

    FUNC_4("\n");

    VAR_5 = FUNC_3(VAR_3, VAR_1, &VAR_4);
    if (FUNC_0(VAR_5))
    {

        return;
    }

    FUNC_1((IPOP3Callback *)VAR_3->InetTransport.pCallback, &VAR_4);

    if (!VAR_4.fDone)
    {
        FUNC_2(&VAR_3->InetTransport, FUNC_5);
        return;
    }

    FUNC_1((IPOP3Callback *)VAR_3->InetTransport.pCallback, &VAR_4);
}
