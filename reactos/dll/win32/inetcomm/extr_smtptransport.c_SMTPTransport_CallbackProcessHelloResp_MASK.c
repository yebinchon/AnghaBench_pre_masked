
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int response ;
struct TYPE_13__ {scalar_t__ pCallback; } ;
struct TYPE_10__ {int hrServerError; } ;
struct TYPE_12__ {scalar_t__ fDone; int command; TYPE_1__ rIxpResult; int member_0; } ;
struct TYPE_11__ {TYPE_7__ InetTransport; scalar_t__ fESMTP; } ;
typedef TYPE_2__ SMTPTransport ;
typedef TYPE_3__ SMTPRESPONSE ;
typedef int ISMTPCallback ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,void (*) (int *,char*,int)) ;
 int FUNC_5 (TYPE_2__*,char*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_9(IInternetTransport *VAR_6, char *VAR_7, int VAR_8)
{
    SMTPTransport *VAR_9 = (SMTPTransport *)VAR_6;
    SMTPRESPONSE VAR_10 = { 0 };
    HRESULT VAR_11;

    FUNC_6("\n");

    VAR_11 = FUNC_5(VAR_9, VAR_7, &VAR_10);
    if (FUNC_1(VAR_11))
    {

        return;
    }

    VAR_10.command = VAR_9->fESMTP ? VAR_3 : VAR_4;
    FUNC_2((ISMTPCallback *)VAR_9->InetTransport.pCallback, &VAR_10);

    if (FUNC_1(VAR_10.rIxpResult.hrServerError))
    {
        FUNC_0("server error: %s\n", FUNC_7(VAR_7));

        return;
    }

    if (!VAR_10.fDone)
    {
        FUNC_4(&VAR_9->InetTransport,
            FUNC_9);
        return;
    }




    FUNC_3(&VAR_9->InetTransport, VAR_0);
    FUNC_3(&VAR_9->InetTransport, VAR_1);

    FUNC_8(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.command = VAR_2;
    VAR_10.fDone = VAR_5;
    FUNC_2((ISMTPCallback *)VAR_9->InetTransport.pCallback, &VAR_10);
}
