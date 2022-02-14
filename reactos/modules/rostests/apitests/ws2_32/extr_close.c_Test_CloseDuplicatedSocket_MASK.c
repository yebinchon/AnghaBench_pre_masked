
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int to ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_5__ {TYPE_3__ member_0; } ;
struct TYPE_4__ {TYPE_2__ member_0; } ;
struct sockaddr_in {int member_1; TYPE_1__ member_2; int member_0; } ;
struct sockaddr {int dummy; } ;
typedef int WSAPROTOCOL_INFOW ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,char*,int,int ) ;
 int FUNC_7 (scalar_t__,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

void FUNC_10()
{
    char VAR_4[10];
    int VAR_5;
    SOCKET VAR_6, VAR_7;
    WSAPROTOCOL_INFOW VAR_8;
    struct sockaddr_in VAR_9 = { VAR_0, 2222, {{{ 0x7f, 0x00, 0x00, 0x01 }}} };


    VAR_6 = FUNC_9(VAR_0, VAR_3, VAR_2);
    if(VAR_6 == VAR_1)
    {
        FUNC_8("socket failed %d. Aborting test.\n", FUNC_2());
        return;
    }

    VAR_5 = FUNC_7(VAR_6, VAR_4, FUNC_4(VAR_4), 0, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_5 == FUNC_4(VAR_4), "sendto err = %d %d\n", VAR_5, FUNC_2());

    VAR_5 = FUNC_1(VAR_6, FUNC_0(), &VAR_8);
    FUNC_6(VAR_5 == 0, "WSADuplicateSocketW err = %d %d\n", VAR_5, FUNC_2());

    VAR_7 = FUNC_3(0, 0, 0, &VAR_8, 0, 0);
    if (VAR_7 == VAR_1)
    {
        FUNC_8("WSASocketW failed %d. Aborting test.\n", FUNC_2());
        FUNC_5(VAR_6);
        return;
    }

    VAR_5 = FUNC_7(VAR_7, VAR_4, FUNC_4(VAR_4), 0, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_5 == FUNC_4(VAR_4), "sendto err = %d %d\n", VAR_5, FUNC_2());

    VAR_5 = FUNC_5(VAR_6);
    FUNC_6(VAR_5 == 0, "closesocket sck err = %d %d\n", VAR_5, FUNC_2());

    VAR_5 = FUNC_7(VAR_7, VAR_4, FUNC_4(VAR_4), 0, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_5 == FUNC_4(VAR_4), "sendto err = %d %d\n", VAR_5, FUNC_2());

    VAR_5 = FUNC_5(VAR_7);
    FUNC_6(VAR_5 == 0, "closesocket dup_sck err = %d %d\n", VAR_5, FUNC_2());
    return;
}
