
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dwFlags; } ;
struct TYPE_13__ {TYPE_2__ ServerInfo; scalar_t__ pCallback; } ;
struct TYPE_9__ {int pszResponse; int hrServerError; } ;
struct TYPE_12__ {TYPE_1__ rIxpResult; int command; int member_0; } ;
struct TYPE_11__ {int fESMTP; TYPE_7__ InetTransport; } ;
typedef TYPE_3__ SMTPTransport ;
typedef TYPE_4__ SMTPRESPONSE ;
typedef int ISMTPCallback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (TYPE_7__*,char*,int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*,char*,TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char const*) ;
 size_t FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (int ,char*) ;

__attribute__((used)) static void FUNC_14(IInternetTransport *VAR_5, char *VAR_6, int VAR_7)
{
    SMTPTransport *VAR_8 = (SMTPTransport *)VAR_5;
    SMTPRESPONSE VAR_9 = { 0 };
    HRESULT VAR_10;
    const char *VAR_11;
    char *VAR_12;
    static const char VAR_13[] = "localhost";

    FUNC_8("\n");

    VAR_10 = FUNC_7(VAR_8, VAR_6, &VAR_9);
    if (FUNC_1(VAR_10))
    {

        return;
    }

    VAR_9.command = VAR_4;
    FUNC_5((ISMTPCallback *)VAR_8->InetTransport.pCallback, &VAR_9);

    if (FUNC_1(VAR_9.rIxpResult.hrServerError))
    {
        FUNC_0("server error: %s\n", FUNC_9(VAR_6));

        return;
    }

    FUNC_8("(%s)\n", VAR_6);

    VAR_8->fESMTP = FUNC_13(VAR_9.rIxpResult.pszResponse, "ESMTP") &&
        VAR_8->InetTransport.ServerInfo.dwFlags & (VAR_2|VAR_1|VAR_0);

    if (VAR_8->fESMTP)
        VAR_11 = "EHLO ";
    else
        VAR_11 = "HELO ";

    VAR_12 = FUNC_3(FUNC_2(), 0, FUNC_12(VAR_11) + FUNC_12(VAR_13) + 2);
    FUNC_11(VAR_12, VAR_11);
    FUNC_10(VAR_12, VAR_13);
    VAR_12[FUNC_12(VAR_12)+1] = '\0';
    VAR_12[FUNC_12(VAR_12)] = '\n';

    FUNC_6(&VAR_8->InetTransport, VAR_12,
        VAR_3);

    FUNC_4(FUNC_2(), 0, VAR_12);
}
