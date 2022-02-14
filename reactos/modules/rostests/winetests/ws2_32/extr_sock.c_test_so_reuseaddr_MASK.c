
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int saddr ;
typedef int reuse ;
typedef scalar_t__ SOCKET ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 unsigned int FUNC_2 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (int,struct sockaddr*,int) ;
 unsigned int FUNC_5 (scalar_t__,int ,int ,char*,int*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 unsigned int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (scalar_t__,int ) ;
 unsigned int FUNC_11 (scalar_t__,int ,int ,char*,int) ;
 void* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    struct sockaddr_in VAR_9;
    SOCKET VAR_10,VAR_11;
    unsigned int VAR_12,VAR_13;
    int VAR_14;
    DWORD VAR_15;

    VAR_9.sin_family = VAR_0;
    VAR_9.sin_port = FUNC_6(VAR_3+1);
    VAR_9.sin_addr.s_addr = FUNC_7("127.0.0.1");

    VAR_10=FUNC_12(VAR_0, VAR_5, 0);
    FUNC_9(VAR_10!=VAR_2, "socket() failed error: %d\n", FUNC_0());
    VAR_12 = FUNC_2(VAR_10, (struct sockaddr*)&VAR_9, sizeof(VAR_9));
    FUNC_9(VAR_12!=VAR_4, "bind(s1) failed error: %d\n", FUNC_0());

    VAR_11=FUNC_12(VAR_0, VAR_5, 0);
    FUNC_9(VAR_11!=VAR_2, "socket() failed error: %d\n", FUNC_0());

    VAR_13=0x1234;
    VAR_14=sizeof(VAR_13);
    VAR_12=FUNC_5(VAR_11, VAR_6, VAR_7, (char*)&VAR_13, &VAR_14 );
    FUNC_9(VAR_12==0 && VAR_13==0,"wrong result in getsockopt(SO_REUSEADDR): rc=%d reuse=%d\n",VAR_12,VAR_13);

    VAR_12 = FUNC_2(VAR_11, (struct sockaddr*)&VAR_9, sizeof(VAR_9));
    FUNC_9(VAR_12==VAR_4, "bind() succeeded\n");

    VAR_13 = 1;
    VAR_12 = FUNC_11(VAR_11, VAR_6, VAR_7, (char*)&VAR_13, sizeof(VAR_13));
    FUNC_9(VAR_12==0, "setsockopt() failed error: %d\n", FUNC_0());




    VAR_12 = FUNC_2(VAR_11, (struct sockaddr*)&VAR_9, sizeof(VAR_9));
    if(VAR_12==0)
    {
        int VAR_16=FUNC_12(VAR_0, VAR_5, 0), VAR_17;
        FUNC_13("<= Win XP behavior of SO_REUSEADDR\n");



        FUNC_10(VAR_10, VAR_1);
        FUNC_10(VAR_11, VAR_1);
        VAR_12 = FUNC_8(VAR_10, 1);
        FUNC_9(!VAR_12, "listen() failed with error: %d\n", FUNC_0());
        VAR_12 = FUNC_8(VAR_11, 1);
        FUNC_9(!VAR_12, "listen() failed with error: %d\n", FUNC_0());
        VAR_12 = FUNC_4(VAR_16, (struct sockaddr*)&VAR_9, sizeof(VAR_9));
        FUNC_9(!VAR_12, "connecting to accepting socket failed %d\n", FUNC_0());


        VAR_14 = sizeof(VAR_9);
        VAR_17 = FUNC_1(VAR_10, (struct sockaddr*)&VAR_9, &VAR_14);
        if(VAR_17 == VAR_2)
            VAR_17 = FUNC_1(VAR_11, (struct sockaddr*)&VAR_9, &VAR_14);
        FUNC_9(VAR_17 != VAR_2, "none of the listening sockets could get the connection\n");

        FUNC_3(VAR_10);
        FUNC_3(VAR_16);
        FUNC_3(VAR_17);
    }
    else
    {
        FUNC_13(">= Win 2003 behavior of SO_REUSEADDR\n");
        VAR_15 = FUNC_0();
        FUNC_9(VAR_15==VAR_8, "expected 10013, got %d\n", VAR_15);

        FUNC_3(VAR_10);
        VAR_12 = FUNC_2(VAR_11, (struct sockaddr*)&VAR_9, sizeof(VAR_9));
        FUNC_9(VAR_12==0, "bind() failed error: %d\n", FUNC_0());
    }

    FUNC_3(VAR_11);
}
