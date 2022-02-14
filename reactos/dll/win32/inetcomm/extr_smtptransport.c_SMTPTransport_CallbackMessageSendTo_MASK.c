
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int szCommandFormat ;
struct TYPE_9__ {int hrServerError; } ;
struct TYPE_14__ {TYPE_1__ rIxpResult; } ;
struct TYPE_11__ {size_t cAddress; TYPE_2__* prgAddress; } ;
struct TYPE_12__ {TYPE_3__ rAddressList; } ;
struct TYPE_13__ {size_t ulCurrentAddressIndex; int InetTransport; TYPE_4__ pending_message; } ;
struct TYPE_10__ {int addrtype; int szEmail; } ;
typedef TYPE_5__ SMTPTransport ;
typedef TYPE_6__ SMTPRESPONSE ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_5__*,char*,TYPE_6__*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(IInternetTransport *VAR_4, char *VAR_5, int VAR_6)
{
    SMTPTransport *VAR_7 = (SMTPTransport *)VAR_4;
    SMTPRESPONSE VAR_8;
    HRESULT VAR_9;

    FUNC_7("\n");

    VAR_9 = FUNC_6(VAR_7, VAR_5, &VAR_8);
    if (FUNC_1(VAR_9))
    {

        return;
    }

    if (FUNC_1(VAR_8.rIxpResult.hrServerError))
    {
        FUNC_0("server error: %s\n", FUNC_8(VAR_5));

        return;
    }

    for (; VAR_7->ulCurrentAddressIndex < VAR_7->pending_message.rAddressList.cAddress; VAR_7->ulCurrentAddressIndex++)
    {
        FUNC_7("address[%d]: %s\n", VAR_7->ulCurrentAddressIndex,
            VAR_7->pending_message.rAddressList.prgAddress[VAR_7->ulCurrentAddressIndex].szEmail);

        if ((VAR_7->pending_message.rAddressList.prgAddress[VAR_7->ulCurrentAddressIndex].addrtype & VAR_1) == VAR_0)
        {
            static const char VAR_10[] = "RCPT TO: <%s>\n";
            char *VAR_11;
            int VAR_12 = sizeof(VAR_10) - 2 +
                FUNC_10(VAR_7->pending_message.rAddressList.prgAddress[VAR_7->ulCurrentAddressIndex].szEmail);

            VAR_11 = FUNC_3(FUNC_2(), 0, VAR_12);
            if (!VAR_11)
                return;

            FUNC_9(VAR_11, VAR_10,
                VAR_7->pending_message.rAddressList.prgAddress[VAR_7->ulCurrentAddressIndex].szEmail);

            VAR_7->ulCurrentAddressIndex++;
            VAR_9 = FUNC_5(&VAR_7->InetTransport, VAR_11,
                VAR_3);

            FUNC_4(FUNC_2(), 0, VAR_11);
            return;
        }
    }

    VAR_9 = FUNC_5(&VAR_7->InetTransport, "DATA\n",
        VAR_2);
}
