
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ result; scalar_t__ session_ticket_do_not_call; } ;
typedef int SSL_TEST_CTX ;
typedef TYPE_1__ HANDSHAKE_RESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int *) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (TYPE_1__*,int *) ;
 int FUNC_19 (TYPE_1__*,int *) ;
 int FUNC_20 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_21(HANDSHAKE_RESULT *VAR_1, SSL_TEST_CTX *VAR_2)
{
    int VAR_3 = 1;
    VAR_3 &= FUNC_10(VAR_1, VAR_2);
    VAR_3 &= FUNC_0(VAR_1, VAR_2);
    if (VAR_1->result == VAR_0) {
        VAR_3 &= FUNC_9(VAR_1, VAR_2);
        VAR_3 &= FUNC_16(VAR_1, VAR_2);
        VAR_3 &= FUNC_18(VAR_1, VAR_2);
        VAR_3 &= FUNC_7(VAR_1, VAR_2);
        VAR_3 &= FUNC_17(VAR_1, VAR_2);
        VAR_3 &= (VAR_1->session_ticket_do_not_call == 0);

        VAR_3 &= FUNC_8(VAR_1, VAR_2);

        VAR_3 &= FUNC_2(VAR_1, VAR_2);
        VAR_3 &= FUNC_1(VAR_1, VAR_2);
        VAR_3 &= FUNC_19(VAR_1, VAR_2);
        VAR_3 &= FUNC_11(VAR_1, VAR_2);
        VAR_3 &= FUNC_20(VAR_1, VAR_2);
        VAR_3 &= FUNC_13(VAR_1, VAR_2);
        VAR_3 &= FUNC_14(VAR_1, VAR_2);
        VAR_3 &= FUNC_15(VAR_1, VAR_2);
        VAR_3 &= FUNC_12(VAR_1, VAR_2);
        VAR_3 &= FUNC_4(VAR_1, VAR_2);
        VAR_3 &= FUNC_5(VAR_1, VAR_2);
        VAR_3 &= FUNC_6(VAR_1, VAR_2);
        VAR_3 &= FUNC_3(VAR_1, VAR_2);
    }
    return VAR_3;
}
