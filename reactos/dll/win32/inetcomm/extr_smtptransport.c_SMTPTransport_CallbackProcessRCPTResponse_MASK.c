
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hrServerError; } ;
struct TYPE_11__ {TYPE_2__ rIxpResult; int command; int member_0; } ;
struct TYPE_8__ {scalar_t__ pCallback; } ;
struct TYPE_10__ {TYPE_1__ InetTransport; int * addrlist; } ;
typedef TYPE_3__ SMTPTransport ;
typedef TYPE_4__ SMTPRESPONSE ;
typedef int ISMTPCallback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,char*,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(IInternetTransport *VAR_1, char *VAR_2, int VAR_3)
{
    SMTPTransport *VAR_4 = (SMTPTransport *)VAR_1;
    SMTPRESPONSE VAR_5 = { 0 };
    HRESULT VAR_6;

    FUNC_6("\n");

    FUNC_3(FUNC_2(), 0, VAR_4->addrlist);
    VAR_4->addrlist = ((void*)0);

    VAR_6 = FUNC_5(VAR_4, VAR_2, &VAR_5);
    if (FUNC_1(VAR_6))
    {

        return;
    }

    VAR_5.command = VAR_0;
    FUNC_4((ISMTPCallback *)VAR_4->InetTransport.pCallback, &VAR_5);

    if (FUNC_1(VAR_5.rIxpResult.hrServerError))
    {
        FUNC_0("server error: %s\n", FUNC_7(VAR_2));

        return;
    }
}
