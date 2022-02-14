
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int * HCRYPTMSG ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,scalar_t__*,scalar_t__*) ;
 int * FUNC_2 (int ,int ,int,int ,int *,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_10;
    HCRYPTMSG VAR_11;
    DWORD VAR_12, VAR_13, VAR_14;
    VAR_11 = FUNC_2(VAR_8, 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());

    VAR_12 = 0;
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, ((void*)0), &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());

    FUNC_4(VAR_14 == 0, "Expected type 0, got %d\n", VAR_14);
    FUNC_0(VAR_11);

    VAR_11 = FUNC_2(VAR_8, 0, VAR_2, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());

    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    FUNC_4(VAR_14 == VAR_2, "Expected CMSG_DATA, got %d\n", VAR_14);
    for (VAR_13 = VAR_1; !VAR_9 && (VAR_13 <= VAR_0); VAR_13++)
    {
        VAR_12 = 0;
        VAR_10 = FUNC_1(VAR_11, VAR_13, 0, ((void*)0), &VAR_12);
        FUNC_4(!VAR_10, "Parameter %d: expected failure\n", VAR_13);
    }
    FUNC_0(VAR_11);

    VAR_11 = FUNC_2(VAR_8, 0, VAR_4, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());
    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    FUNC_4(VAR_14 == VAR_4, "Expected CMSG_ENVELOPED, got %d\n", VAR_14);
    for (VAR_13 = VAR_1; !VAR_9 && (VAR_13 <= VAR_0); VAR_13++)
    {
        VAR_12 = 0;
        VAR_10 = FUNC_1(VAR_11, VAR_13, 0, ((void*)0), &VAR_12);
        FUNC_4(!VAR_10, "Parameter %d: expected failure\n", VAR_13);
    }
    FUNC_0(VAR_11);

    VAR_11 = FUNC_2(VAR_8, 0, VAR_5, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());
    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    FUNC_4(VAR_14 == VAR_5, "Expected CMSG_HASHED, got %d\n", VAR_14);
    for (VAR_13 = VAR_1; !VAR_9 && (VAR_13 <= VAR_0); VAR_13++)
    {
        VAR_12 = 0;
        VAR_10 = FUNC_1(VAR_11, VAR_13, 0, ((void*)0), &VAR_12);
        FUNC_4(!VAR_10, "Parameter %d: expected failure\n", VAR_13);
    }
    FUNC_0(VAR_11);

    VAR_11 = FUNC_2(VAR_8, 0, VAR_6, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());
    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    FUNC_4(VAR_14 == VAR_6, "Expected CMSG_SIGNED, got %d\n", VAR_14);
    for (VAR_13 = VAR_1; !VAR_9 && (VAR_13 <= VAR_0); VAR_13++)
    {
        VAR_12 = 0;
        VAR_10 = FUNC_1(VAR_11, VAR_13, 0, ((void*)0), &VAR_12);
        FUNC_4(!VAR_10, "Parameter %d: expected failure\n", VAR_13);
    }
    FUNC_0(VAR_11);


    VAR_11 = FUNC_2(VAR_8, 0, VAR_3, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());
    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    FUNC_4(VAR_14 == VAR_3, "Expected CMSG_ENCRYPTED, got %d\n", VAR_14);
    FUNC_0(VAR_11);

    VAR_11 = FUNC_2(VAR_8, 0, 1000, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_11 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_3());
    VAR_12 = sizeof(VAR_14);
    VAR_10 = FUNC_1(VAR_11, VAR_7, 0, &VAR_14, &VAR_12);
    FUNC_4(VAR_10, "CryptMsgGetParam failed: %x\n", FUNC_3());
    FUNC_4(VAR_14 == 1000, "Expected 1000, got %d\n", VAR_14);
    FUNC_0(VAR_11);
}
