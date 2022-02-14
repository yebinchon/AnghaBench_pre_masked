
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int IInternetProtocol ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,int,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(IInternetProtocol *VAR_7, LPCWSTR VAR_8, HRESULT VAR_9,
        BOOL VAR_10)
{
    HRESULT VAR_11;

    FUNC_2(VAR_1);
    FUNC_2(VAR_2);

    VAR_4 = VAR_9;
    VAR_5 = VAR_10;
    VAR_11 = FUNC_1(VAR_7, VAR_8, &VAR_6, &VAR_3, 0, 0);
    if(VAR_10)
        FUNC_3((VAR_11&0xffff0000) == ((VAR_0 << 16)|0x80000000) || VAR_11 == VAR_4,
                "expected win32 err or %08x got: %08x\n", VAR_9, VAR_11);
    else
        FUNC_3(VAR_11 == VAR_4, "expected: %08x got: %08x\n", VAR_4, VAR_11);

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
}
