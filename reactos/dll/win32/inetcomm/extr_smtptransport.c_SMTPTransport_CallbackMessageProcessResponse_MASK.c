
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hrResult; int hrServerError; } ;
struct TYPE_11__ {TYPE_2__ rIxpResult; int command; int member_0; } ;
struct TYPE_8__ {scalar_t__ pCallback; } ;
struct TYPE_10__ {TYPE_1__ InetTransport; } ;
typedef TYPE_3__ SMTPTransport ;
typedef TYPE_4__ SMTPRESPONSE ;
typedef int ISMTPCallback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,char*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(IInternetTransport *VAR_2, char *VAR_3, int VAR_4)
{
    SMTPTransport *VAR_5 = (SMTPTransport *)VAR_2;
    SMTPRESPONSE VAR_6 = { 0 };
    HRESULT VAR_7;

    FUNC_4("\n");

    VAR_7 = FUNC_3(VAR_5, VAR_3, &VAR_6);
    if (FUNC_1(VAR_7))
    {

        return;
    }

    if (FUNC_1(VAR_6.rIxpResult.hrServerError))
    {
        FUNC_0("server error: %s\n", FUNC_5(VAR_3));

        return;
    }

    VAR_6.command = VAR_0;
    VAR_6.rIxpResult.hrResult = VAR_1;
    FUNC_2((ISMTPCallback *)VAR_5->InetTransport.pCallback, &VAR_6);
}
