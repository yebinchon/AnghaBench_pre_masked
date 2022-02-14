
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pstmMsg; } ;
struct TYPE_4__ {int InetTransport; TYPE_1__ pending_message; } ;
typedef TYPE_2__ SMTPTransport ;
typedef int IInternetTransport ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(IInternetTransport *VAR_1, char *VAR_2, int VAR_3)
{
    SMTPTransport *VAR_4 = (SMTPTransport *)VAR_1;

    FUNC_0(VAR_4->pending_message.pstmMsg);
    FUNC_1(&VAR_4->InetTransport, "\n.\n",
        VAR_0);
}
