
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * member_2; int member_1; int member_0; } ;
typedef int HCRYPTMSG ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CMSG_STREAM_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int *,int *,TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    HCRYPTMSG VAR_10;
    DWORD VAR_11;
    BOOL VAR_12;
    CMSG_STREAM_INFO VAR_13 = { 0, VAR_9, ((void*)0) };

    VAR_10 = FUNC_2(VAR_8, 0, VAR_3, ((void*)0), ((void*)0),
     ((void*)0));


    VAR_11 = 0;
    VAR_12 = FUNC_1(VAR_10, VAR_2, 0, ((void*)0), &VAR_11);
    FUNC_6(VAR_12, "CryptMsgGetParam failed: %08x\n", FUNC_3());
    VAR_11 = 0;
    VAR_12 = FUNC_1(VAR_10, VAR_0, 0, ((void*)0), &VAR_11);
    FUNC_6(VAR_12, "CryptMsgGetParam failed: %08x\n", FUNC_3());



    VAR_11 = 0;
    FUNC_4(0xdeadbeef);
    VAR_12 = FUNC_1(VAR_10, VAR_4, 0, ((void*)0), &VAR_11);
    FUNC_6(!VAR_12 && FUNC_3() == VAR_6,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_3());
    FUNC_4(0xdeadbeef);
    VAR_12 = FUNC_1(VAR_10, VAR_1, 0, ((void*)0), &VAR_11);
    FUNC_6(!VAR_12 && FUNC_3() == VAR_6,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_3());
    VAR_12 = FUNC_1(VAR_10, VAR_5, 0, ((void*)0), &VAR_11);
    FUNC_6(!VAR_12 && FUNC_3() == VAR_6,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_3());
    FUNC_0(VAR_10);


    VAR_10 = FUNC_2(VAR_8, 0, VAR_3, ((void*)0),
     ((void*)0), &VAR_13);
    FUNC_4(0xdeadbeef);
    VAR_12 = FUNC_1(VAR_10, VAR_0, 0, ((void*)0), &VAR_11);
    FUNC_6((!VAR_12 && FUNC_3() == VAR_7) || FUNC_5(VAR_12 ),
     "Expected E_INVALIDARG, got %x\n", FUNC_3());
    FUNC_4(0xdeadbeef);
    VAR_12 = FUNC_1(VAR_10, VAR_2, 0, ((void*)0), &VAR_11);
    FUNC_6((!VAR_12 && FUNC_3() == VAR_7) || FUNC_5(VAR_12 ),
     "Expected E_INVALIDARG, got %x\n", FUNC_3());
    FUNC_0(VAR_10);
}
