
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;
typedef int ULONG ;
typedef int SOCKET ;
typedef scalar_t__ LPSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int ,scalar_t__,int,int ) ;

int FUNC_14()
{
    LPSTR VAR_2;
    int VAR_3;
    SOCKET VAR_4;
    ULONG VAR_5;
    ULONG VAR_6;
    WSADATA VAR_7;


    VAR_3 = FUNC_9(FUNC_6(2, 2), &VAR_7);
    FUNC_12(VAR_3 == 0, "WSAStartup failed. iResult = %d\n", VAR_3);


    VAR_5 = 0xdeadbeef;
    VAR_3 = FUNC_11(0, VAR_0, &VAR_5);
    FUNC_12(VAR_3 == VAR_1, "iResult = %d\n", VAR_3);
    FUNC_12(VAR_5 == 0xdeadbeef, "BytesAvailable = %ld\n", VAR_5);


    if (!FUNC_1(&VAR_4))
    {
        FUNC_12(0, "CreateSocket failed. Aborting test.\n");
        return 0;
    }


    VAR_5 = 0xdeadbeef;
    VAR_3 = FUNC_11(VAR_4, VAR_0, &VAR_5);
    FUNC_12(VAR_3 == 0, "iResult = %d\n", VAR_3);
    FUNC_12(VAR_5 == 0, "BytesAvailable = %ld\n", VAR_5);


    if (!FUNC_0(VAR_4))
    {
        FUNC_12(0, "ConnectToReactOSWebsite failed. Aborting test.\n");
        return 0;
    }


    VAR_3 = FUNC_11(VAR_4, VAR_0, &VAR_5);
    FUNC_12(VAR_3 == 0, "iResult = %d\n", VAR_3);
    FUNC_12(VAR_5 == 0, "BytesAvailable = %ld\n", VAR_5);


    if (!FUNC_3(VAR_4))
    {
        FUNC_12(0, "GetRequestAndWait failed. Aborting test.\n");
        return 0;
    }


    FUNC_7(FUNC_11(VAR_4, VAR_0, &VAR_5));
    FUNC_12(VAR_5 != 0, "BytesAvailable = %ld\n", VAR_5);


    VAR_6 = VAR_5 / 2;
    VAR_2 = (LPSTR) FUNC_4(FUNC_2(), 0, VAR_6);
    FUNC_7(FUNC_13(VAR_4, VAR_2, VAR_6, 0));
    FUNC_5(FUNC_2(), 0, VAR_2);

    VAR_6 = VAR_5 - VAR_6;


    FUNC_7(FUNC_11(VAR_4, VAR_0, &VAR_5));
    FUNC_12(VAR_5 == VAR_6, "BytesAvailable = %ld\n", VAR_5);


    VAR_2 = (LPSTR) FUNC_4(FUNC_2(), 0, VAR_6);
    FUNC_7(FUNC_13(VAR_4, VAR_2, VAR_6, 0));
    FUNC_5(FUNC_2(), 0, VAR_2);


    FUNC_7(FUNC_11(VAR_4, VAR_0, &VAR_5));
    FUNC_12(VAR_5 == 0, "BytesAvailable = %ld\n", VAR_5);

    FUNC_10(VAR_4);
    FUNC_8();
    return 1;
}
