
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pass ;
struct TYPE_6__ {char* szPassword; } ;
struct TYPE_8__ {TYPE_1__ ServerInfo; scalar_t__ pCallback; } ;
struct TYPE_7__ {TYPE_5__ InetTransport; } ;
typedef TYPE_2__ POP3Transport ;
typedef int POP3RESPONSE ;
typedef int IPOP3Callback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_5__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_2__*,char*,int *) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(IInternetTransport *VAR_2, char *VAR_3, int VAR_4)
{
    static const char VAR_5[] = "PASS ";
    POP3Transport *VAR_6 = (POP3Transport *)VAR_2;
    POP3RESPONSE VAR_7;
    char *VAR_8;
    int VAR_9;
    HRESULT VAR_10;

    FUNC_7("\n");

    VAR_10 = FUNC_6(VAR_6, VAR_3, &VAR_7);
    if (FUNC_0(VAR_10))
    {

        return;
    }

    FUNC_4((IPOP3Callback *)VAR_6->InetTransport.pCallback, &VAR_7);

    VAR_9 = sizeof(VAR_5) + FUNC_11(VAR_6->InetTransport.ServerInfo.szPassword) + 2;
    VAR_8 = FUNC_2(FUNC_1(), 0, VAR_9);

    FUNC_10(VAR_8, VAR_5);
    FUNC_9(VAR_8, VAR_6->InetTransport.ServerInfo.szPassword);
    FUNC_9(VAR_8, "\r\n");

    FUNC_8(VAR_6, VAR_1);

    FUNC_5(&VAR_6->InetTransport, VAR_8, VAR_0);
    FUNC_3(FUNC_1(), 0, VAR_8);
}
