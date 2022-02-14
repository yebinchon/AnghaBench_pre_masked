
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hrServerError; } ;
struct TYPE_8__ {TYPE_1__ rIxpResult; } ;
struct TYPE_7__ {int InetTransport; } ;
typedef TYPE_2__ SMTPTransport ;
typedef TYPE_3__ SMTPRESPONSE ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*,TYPE_3__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(IInternetTransport *VAR_0, char *VAR_1, int VAR_2)
{
    SMTPTransport *VAR_3 = (SMTPTransport *)VAR_0;
    SMTPRESPONSE VAR_4;
    HRESULT VAR_5;

    FUNC_4("\n");

    if (VAR_1)
    {
        VAR_5 = FUNC_3(VAR_3, VAR_1, &VAR_4);
        if (FUNC_1(VAR_5))
        {

            return;
        }

        if (FUNC_1(VAR_4.rIxpResult.hrServerError))
        {
            FUNC_0("server error: %s\n", FUNC_5(VAR_1));

            return;
        }
    }
    FUNC_2(&VAR_3->InetTransport);
}
