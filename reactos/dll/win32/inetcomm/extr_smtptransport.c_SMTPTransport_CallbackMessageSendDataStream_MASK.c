
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int hrServerError; } ;
struct TYPE_10__ {TYPE_1__ rIxpResult; } ;
struct TYPE_8__ {int cbSize; int pstmMsg; } ;
struct TYPE_9__ {int InetTransport; TYPE_2__ pending_message; } ;
typedef TYPE_3__ SMTPTransport ;
typedef TYPE_4__ SMTPRESPONSE ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_3__*,char*,TYPE_4__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(IInternetTransport *VAR_1, char *VAR_2, int VAR_3)
{
    SMTPTransport *VAR_4 = (SMTPTransport *)VAR_1;
    SMTPRESPONSE VAR_5;
    HRESULT VAR_6;
    char *VAR_7;
    ULONG VAR_8;

    FUNC_8("\n");

    VAR_6 = FUNC_7(VAR_4, VAR_2, &VAR_5);
    if (FUNC_1(VAR_6))
    {

        return;
    }

    if (FUNC_1(VAR_5.rIxpResult.hrServerError))
    {
        FUNC_0("server error: %s\n", FUNC_9(VAR_2));

        return;
    }

    VAR_7 = FUNC_3(FUNC_2(), 0, VAR_4->pending_message.cbSize);
    VAR_6 = FUNC_5(VAR_4->pending_message.pstmMsg, VAR_7, VAR_4->pending_message.cbSize, ((void*)0));
    if (FUNC_1(VAR_6))
    {

        return;
    }
    VAR_8 = VAR_4->pending_message.cbSize;





    VAR_6 = FUNC_6(&VAR_4->InetTransport, VAR_7, VAR_8,
        VAR_0);

    FUNC_4(FUNC_2(), 0, VAR_7);
}
