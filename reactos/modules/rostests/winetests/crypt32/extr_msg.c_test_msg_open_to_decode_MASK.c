
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef int * HCRYPTMSG ;
typedef TYPE_1__ CMSG_STREAM_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int,int ,int *,TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    HCRYPTMSG VAR_9;
    CMSG_STREAM_INFO VAR_10 = { 0 };

    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_1(0, 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_4(!VAR_9 && FUNC_2() == VAR_6,
     "Expected E_INVALIDARG, got %x\n", FUNC_2());


    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_1(VAR_8, 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_4(!VAR_9 && FUNC_2() == VAR_6,
     "Expected E_INVALIDARG, got %x\n", FUNC_2());
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_1(VAR_8, 0, VAR_0, 0, ((void*)0), ((void*)0));
    FUNC_4(!VAR_9 && FUNC_2() == VAR_6,
     "Expected E_INVALIDARG, got %x\n", FUNC_2());


    VAR_9 = FUNC_1(VAR_7, 0, VAR_0, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);
    VAR_9 = FUNC_1(VAR_7, 0, VAR_2, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);
    VAR_9 = FUNC_1(VAR_7, 0, VAR_3, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);
    VAR_9 = FUNC_1(VAR_7, 0, VAR_4, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);
    VAR_9 = FUNC_1(VAR_7, 0,
     VAR_5, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);

    VAR_9 = FUNC_1(VAR_7, 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);

    VAR_9 = FUNC_1(VAR_7, 0, VAR_1, 0, ((void*)0),
     ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);
    VAR_9 = FUNC_1(VAR_7, 0, 1000, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);




    VAR_9 = FUNC_1(VAR_7, 0, VAR_3, 0, ((void*)0),
     &VAR_10);
    FUNC_4(VAR_9 != ((void*)0), "CryptMsgOpenToDecode failed: %x\n", FUNC_2());
    FUNC_0(VAR_9);
}
