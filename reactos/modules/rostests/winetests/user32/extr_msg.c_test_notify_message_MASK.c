
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hwnd; } ;
typedef TYPE_1__ MSG ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int ,int ,int ,int,int,int ,int *,int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_8 (int ,int ,int,int) ;
 scalar_t__ FUNC_9 (int ,int ,int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int,int,int *,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int,int,int *,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_18(void)
{
    HWND VAR_7;
    BOOL VAR_8;
    MSG VAR_9;

    VAR_7 = FUNC_0(0, "TestWindowClass", ((void*)0), VAR_5,
                           VAR_0, VAR_0, 300, 300, 0, ((void*)0), ((void*)0), 0);
    FUNC_16(VAR_7 != 0, "Failed to create window\n");
    FUNC_14();
    FUNC_15();

    VAR_8 = FUNC_12(VAR_7, VAR_4, 0x1234, 0xdeadbeef);
    FUNC_16(VAR_8 == VAR_3, "SendNotifyMessageA failed with error %u\n", FUNC_4());
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_13(VAR_7, VAR_4, 0x1234, 0xdeadbeef);
    FUNC_16(VAR_8 == VAR_3, "SendNotifyMessageW failed with error %u\n", FUNC_4());
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_10(VAR_7, VAR_4, 0x1234, 0xdeadbeef, ((void*)0), 0);
    FUNC_16(VAR_8 == VAR_3, "SendMessageCallbackA failed with error %u\n", FUNC_4());
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_11(VAR_7, VAR_4, 0x1234, 0xdeadbeef, ((void*)0), 0);
    FUNC_16(VAR_8 == VAR_3, "SendMessageCallbackW failed with error %u\n", FUNC_4());
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_6(VAR_7, VAR_4, 0x1234, 0xdeadbeef);
    FUNC_16(VAR_8 == VAR_3, "PostMessageA failed with error %u\n", FUNC_4());
    FUNC_14();
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_7(VAR_7, VAR_4, 0x1234, 0xdeadbeef);
    FUNC_16(VAR_8 == VAR_3, "PostMessageW failed with error %u\n", FUNC_4());
    FUNC_14();
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_8(FUNC_3(), VAR_4, 0x1234, 0xdeadbeef);
    FUNC_16(VAR_8 == VAR_3, "PostThreadMessageA failed with error %u\n", FUNC_4());
    while (FUNC_5(&VAR_9, 0, 0, 0, VAR_2))
    {
        VAR_9.hwnd = VAR_7;
        FUNC_2(&VAR_9);
    }
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    VAR_8 = FUNC_9(FUNC_3(), VAR_4, 0x1234, 0xdeadbeef);
    FUNC_16(VAR_8 == VAR_3, "PostThreadMessageW failed with error %u\n", FUNC_4());
    while (FUNC_5(&VAR_9, 0, 0, 0, VAR_2))
    {
        VAR_9.hwnd = VAR_7;
        FUNC_2(&VAR_9);
    }
    FUNC_17(VAR_6, "WmNotifySeq", VAR_1);

    FUNC_1(VAR_7);
}
