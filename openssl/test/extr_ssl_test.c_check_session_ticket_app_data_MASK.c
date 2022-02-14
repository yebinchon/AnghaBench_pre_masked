
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * result_session_ticket_app_data; } ;
struct TYPE_5__ {int * expected_session_ticket_app_data; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(HANDSHAKE_RESULT *VAR_0,
                                         SSL_TEST_CTX *VAR_1)
{
    size_t VAR_2 = 0;
    size_t VAR_3 = 0;


    if (VAR_0->result_session_ticket_app_data != ((void*)0))
        VAR_2 = FUNC_1(VAR_0->result_session_ticket_app_data);
    if (VAR_1->expected_session_ticket_app_data != ((void*)0))
        VAR_3 = FUNC_1(VAR_1->expected_session_ticket_app_data);
    if (VAR_2 == 0 && VAR_3 == 0)
        return 1;

    if (!FUNC_0(VAR_0->result_session_ticket_app_data,
                     VAR_1->expected_session_ticket_app_data))
        return 0;

    return 1;
}
