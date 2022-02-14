
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCRYPTMSG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ,int *,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    HCRYPTMSG VAR_6;
    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_0(0, 0, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(!VAR_6 && FUNC_1() == VAR_3,
     "Expected E_INVALIDARG, got %x\n", FUNC_1());
    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_5, 0, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(!VAR_6 && FUNC_1() == VAR_3,
     "Expected E_INVALIDARG, got %x\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_4, 0, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(!VAR_6 && FUNC_1() == VAR_2,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_1());
    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_5 | VAR_4, 0, 0,
     ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(!VAR_6 && FUNC_1() == VAR_2,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_1());
    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_4, 0,
     VAR_1, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(!VAR_6 && FUNC_1() == VAR_2,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_1());
    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_4, 0, VAR_0, ((void*)0),
     ((void*)0), ((void*)0));
    FUNC_3(!VAR_6 && FUNC_1() == VAR_2,
     "Expected CRYPT_E_INVALID_MSG_TYPE, got %x\n", FUNC_1());
}
