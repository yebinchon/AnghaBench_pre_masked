
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int user ;
struct TYPE_4__ {char* szUserName; } ;
struct TYPE_6__ {TYPE_1__ ServerInfo; } ;
struct TYPE_5__ {TYPE_3__ InetTransport; } ;
typedef TYPE_2__ POP3Transport ;
typedef int IInternetTransport ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(IInternetTransport *VAR_1, char *VAR_2, int VAR_3)
{
    static const char VAR_4[] = "USER ";
    POP3Transport *VAR_5 = (POP3Transport *)VAR_1;
    char *VAR_6;
    int VAR_7;

    FUNC_4("\n");

    VAR_7 = sizeof(VAR_4) + FUNC_7(VAR_5->InetTransport.ServerInfo.szUserName) + 2;
    VAR_6 = FUNC_1(FUNC_0(), 0, VAR_7);

    FUNC_6(VAR_6, VAR_4);
    FUNC_5(VAR_6, VAR_5->InetTransport.ServerInfo.szUserName);
    FUNC_5(VAR_6, "\r\n");
    FUNC_3(&VAR_5->InetTransport, VAR_6, VAR_0);

    FUNC_2(FUNC_0(), 0, VAR_6);
}
