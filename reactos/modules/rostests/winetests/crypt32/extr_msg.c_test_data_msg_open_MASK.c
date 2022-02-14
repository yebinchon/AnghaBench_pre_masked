
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
struct TYPE_5__ {int member_0; } ;
typedef int * HCRYPTMSG ;
typedef TYPE_1__ CMSG_STREAM_INFO ;
typedef TYPE_2__ CMSG_HASHED_ENCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,TYPE_2__*,char*,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    HCRYPTMSG VAR_4;
    CMSG_HASHED_ENCODE_INFO VAR_5 = { 0 };
    CMSG_STREAM_INFO VAR_6 = { 0 };
    char VAR_7[] = "1.2.3";


    FUNC_3(0xdeadbeef);
    VAR_4 = FUNC_1(VAR_3, 0, VAR_0, &VAR_5,
     ((void*)0), ((void*)0));
    FUNC_4(!VAR_4 && FUNC_2() == VAR_2,
     "Expected E_INVALIDARG, got %x\n", FUNC_2());
    VAR_4 = FUNC_1(VAR_3, 0, VAR_0, ((void*)0), ((void*)0),
     ((void*)0));
    FUNC_4(VAR_4 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_4);


    VAR_4 = FUNC_1(VAR_3, 0, VAR_0, ((void*)0), ((void*)0),
     &VAR_6);
    FUNC_4(VAR_4 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_4);


    VAR_4 = FUNC_1(VAR_3, 0, VAR_0, ((void*)0), VAR_7,
     ((void*)0));
    FUNC_4(VAR_4 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_4);

    VAR_4 = FUNC_1(VAR_3, VAR_1,
     VAR_0, ((void*)0), VAR_7, ((void*)0));
    FUNC_4(VAR_4 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_4);



    VAR_4 = FUNC_1(VAR_3, VAR_1,
     VAR_0, ((void*)0), VAR_7, &VAR_6);
    FUNC_4(VAR_4 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_4);
}
