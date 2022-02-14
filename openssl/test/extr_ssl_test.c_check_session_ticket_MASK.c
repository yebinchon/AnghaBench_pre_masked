
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ session_ticket; } ;
struct TYPE_5__ {scalar_t__ session_ticket_expected; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(HANDSHAKE_RESULT *VAR_1, SSL_TEST_CTX *VAR_2)
{
    if (VAR_2->session_ticket_expected == VAR_0)
        return 1;
    if (!FUNC_1(VAR_1->session_ticket,
                     VAR_2->session_ticket_expected)) {
        FUNC_0("Client SessionTicketExpected mismatch, expected %s, got %s.",
                  FUNC_2(VAR_2->session_ticket_expected),
                  FUNC_2(VAR_1->session_ticket));
        return 0;
    }
    return 1;
}
