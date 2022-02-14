
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int * LPBYTE ;
typedef int HCRYPTMSG ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int ,int *,int*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int,char*,int ,...) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(LPCSTR VAR_2, HCRYPTMSG VAR_3, DWORD VAR_4,
 const BYTE *VAR_5, DWORD VAR_6)
{
    DWORD VAR_7;
    LPBYTE VAR_8;
    BOOL VAR_9;

    VAR_7 = 0xdeadbeef;
    VAR_9 = FUNC_0(VAR_3, VAR_4, 0, ((void*)0), &VAR_7);
    FUNC_7(VAR_9 || FUNC_5(FUNC_1() == VAR_1 ||
     FUNC_1() == VAR_0 ),
     "%s: CryptMsgGetParam failed: %08x\n", VAR_2, FUNC_1());
    if (!VAR_9)
    {
        FUNC_8("parameter %d not supported, skipping tests\n", VAR_4);
        return;
    }
    VAR_8 = FUNC_3(FUNC_2(), 0, VAR_7);
    VAR_9 = FUNC_0(VAR_3, VAR_4, 0, VAR_8, &VAR_7);
    FUNC_7(VAR_9, "%s: CryptMsgGetParam failed: %08x\n", VAR_2, FUNC_1());
    FUNC_7(VAR_7 == VAR_6, "%s: expected size %d, got %d\n", VAR_2,
     VAR_6, VAR_7);
    if (VAR_7 == VAR_6 && VAR_7)
        FUNC_7(!FUNC_6(VAR_8, VAR_5, VAR_7), "%s: unexpected data\n", VAR_2);
    FUNC_4(FUNC_2(), 0, VAR_8);
}
